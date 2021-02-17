%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% This MATLAB code computes elastic fields (especially image forces) due  % 
% to single dislocations in different bi-crystal configurations with      %
% surfaces. The theory is based on the image decomposition method         % 
% developed by Wu and Wang (2007) within the framework of two-dimensional %
% linear anisotropic elasticity (Stroh formalism).                        %
% The surfaces can be stiff layers of finite thickness adjacent to the    % 
% free surfaces or purely free surfaces.                                  %
% The grain boundary (GB) can be an interphase of finite thickness with a %
% given stiffness or a perfect planar interface without thickness.        %           
%                                                                         %
% In the code, the variables with "_I", "_II", "_SU", "_SD" and "_GB"     %
% indicate the material properties for the crystal I, the crystal II,     %
% the upper stiff layer, the bottom stiff layer and the interphase GB,    %
% respectively.                                                           % 
%                                                                         %
% Several "for" loops can be used for multi-CPUs acceleration with        %
% "parfor" which is the tolerant option (the MATLAB Parallel Computing    %
% Toolbox is needed). For single core calculations, they can be used      % 
% by simply changing the "parfor" by "for".                               %
%                                                                         %
% There are four functions that can be used for C-MEX acceleration:       %
% "coef_rho", "Rho_density", "rho_distri" and "stress" (the MATLAB Coder  %
% Toolbox is needed within MATLAB 2018a or more recent versions).         %
% The C_MEX acceleration is the tolerant option with _mex at the end of   %
% each function name. The code can be used without this acceleration      %
% scheme by simply deleting the "_mex" of each function name in the code. %                            
%                                                                         %
% For more details, please check in the reference papers.                 %
%                                                                         %
% References                                                              %
%                                                                         %
% [1] H.Y. Wang, M.S. Wu and H. Fan, 2007. Image decomposition method for % 
% the analysis of a mixed dislocation in a general multilayer.            %
% International Journal of Solids and Structures 44, 1563-1581.           %
%                                                                         %
% [2] X. Chen, T. Richeton, C. Motz and S. Berbenni, 2021.                %
% Surface effects on image stresses and dislocation pile-ups in           %
% anisotropic bi-crystals. International Journal of Plasticity            %
%                                                                         %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Material properties
% Anisotropic elastic constants of Ni (from Hirth-Lothe "Theory of Dislocations", p.837)
Material_I='Ni';
C11=246.5;  %%in GPa
C12=147.3;  %%in GPa
C44=124.7;  %%in GPa
% Lattice parameter in nm
a_cry=0.3524;   
% Length of standard Burgers vector for FCC crystal
b_Standard=sqrt(2)/2*a_cry; 
% Anisotropy ratio 
azener_cry=2*C44/(C11-C12); 
% This code can also be used for a bi-material system where the second (bottom)
% material is different from the first material. In that case, the 
% mechanical properties of the second material must be defined as well.
Material_II='Ni';

% Elastic parameters for isotropic crystal (Hill, 1952; Dewit, 2008)
G_one=1/2*(C11-C12);  % {001}<110> shear resistance
G_two=C44;  % {001}<100> shear resistance
G_cry=1/2*(2/5*G_one+3/5*G_two+5*G_one*G_two/(2*G_two+3*G_one));  % Hill average for cubic crystals: mean of Voight and Reuss average
k_cry=1/3*(C11+2*C12);  % bulk modulus for cubic crystals
E_eff=9*k_cry*G_cry/(3*k_cry+G_cry);  % effective Young modulus from Hill average
v_cry=(3*k_cry-2*G_cry)/(6*k_cry+2*G_cry);  % effective Poisson ratio from Hill average

% If the crystal is considered isotropic
% C44=G_cry;
% C11=k_cry+4/3*G_cry;
% C12=k_cry-2/3*G_cry;
% azener_cry=1;

% Multiply C44 by 1.0001 in order to compute the Stroh matrix if the material is considered isotropic
if azener_cry==1
    C44=C44*1.0001;
end

% Stiffness parameters of the interphase GB and stiff layers adjacent to the free surfaces
Lambda_GB=2;
Lambda_SU=2;
Lambda_SD=2;

%% Microstructure of the bi-crystal
% Burgers vector and slip plane normal of the dislocation in crystal I presented in the crystal coordinates
% Burgers vector bo
bo=[1;1;0]; 
% Normal vector of slip plane no
no=[-1;1;-1]; 
bo=bo/norm(bo);
no=no/norm(no);
% For an edge dislocation, the dislocation line vector to is perpendicular to bo and belongs to the slip plane of normal no
to=cross(bo,no); 

% Burgers vector and slip plane presented in the global coordinates
% In Stroh formalism, the dislocation line vector is [001]
t=[0;0;1]; 
% The slip plane is defined by an angle alpha (0<alpha<pi), which is
% the angle between the slip plane and the plane x1-x3. 
alpha=pi*1/4; 
% For an edge dislocation, the Burgers vector is perpendicular to t and belongs to the slip plane
b0=[-cos(alpha);-sin(alpha);0];
% Normal vector to the slip plane 
n0=cross(t,b0);
n0=n0/norm(n0);
% Transition matrix from the first crystal's coordinates to the global coordinates 
T_I=[b0,n0,t]/[bo,no,to];

% Orientation of the second crystal. 
% The three crystal's axes e1, e2 and e3 are defined in the global coordinates
% Attractive orientation A for the edge dislocation defined in the first crystal's orientation 
% e1_II=[1,0,0]; 
% e2_II=[0,1,0];
% e3_II=[0,0,1];

% Repulsive orientation B for the edge dislocation defined in the first crystal's orientation 
e1_II=[-0.5,-0.5,sqrt(2)/2]; 
e2_II=[sqrt(2)/2,-sqrt(2)/2,0];
e3_II=[0.5,0.5,sqrt(2)/2];

% Transition matrix from the second crystal's coordinates to the global coordinates 
T_II=[e1_II',e2_II',e3_II'];

% Misorientation determination
[misorientation_angle,misorientation_axis,misaxis_int]=misorientation(T_I,T_II);
result_misorientation=cell(2,3);
result_misorientation{1,1}='Misorientation Angle';
result_misorientation{1,2}='Misorientation Axis';
result_misorientation{1,3}='Misorientation Integer Axis';
result_misorientation{2,1}=misorientation_angle;
result_misorientation{2,2}=misorientation_axis;
result_misorientation{2,3}=misaxis_int;

%% Bi-crystal configurations 
% H and h_ are the thickness of the whole bi-crystal and of the corresponding 
% layers, respectively (in nm)
H=1000;
h_GB=0.9;
h_SU=10;
h_SD=h_SU;
h_I=H/2-h_GB/2-h_SU; 
h_II=H-h_I-h_GB-h_SD-h_SU;

% h is the thickness matrix used for the image decomposition method
h=zeros(5,5);
h(1,1)=h_SU;
h(1,2)=h_SU+h_I;
h(1,3)=h_SU+h_I+h_GB;
h(1,4)=h_SU+h_I+h_GB+h_II;
h(1,5)=h_SU+h_I+h_GB+h_II+h_SD;
h(2,2)=h_I;
h(2,3)=h_I+h_GB;
h(2,4)=h_I+h_GB+h_II;
h(2,5)=h_I+h_GB+h_II+h_SD;
h(3,3)=h_GB;
h(3,4)=h_GB+h_II;
h(3,5)=h_GB+h_II+h_SD;
h(4,4)=h_II;
h(4,5)=h_II+h_SD;
h(5,5)=h_SD;

% Position of each planar interface along the x2 axis
x22=-h(1,1);
x23=-h(1,2);
x24=-h(1,3);
x25=-h(1,4);
x26=-h(1,5);

% Position of the middle of the GB along the x2 axis 
Posi_Inter=(x23+x24)/2;

%% Simulation parameters
% Dislocation glide direction towards GB
v=-[cos(alpha);sin(alpha);0];
% Burgers vector
b_cry=b0*b_Standard;
% Calculation of the elastic stiffness tensor of each crystal in the global coordinates. 
% C is a fourth order tensor, 3*3*3*3, while CS is a second order tensor, 6*6, written in Voigt notation.
if azener_cry==1
    [C_I,CS_I]=elasticconstburgers(C11,C12,C44,eye(3));
    [C_II,CS_II]=elasticconstburgers(C11,C12,C44,eye(3));
else
    [C_I,CS_I]=elasticconstburgers(C11,C12,C44,T_I);
    [C_II,CS_II]=elasticconstburgers(C11,C12,C44,T_II);
end

% Interphase GB and stiff layers adjacent to surfaces are considered as isotropic
C44_Iso=G_cry;
C11_Iso=k_cry+4/3*G_cry;
C12_Iso=k_cry-2/3*G_cry;
C44_Iso=C44_Iso*1.0001;
[C_Iso,CS_Iso]=elasticconstburgers(C11_Iso,C12_Iso,C44_Iso,eye(3));
C_GB=C_Iso*Lambda_GB;
CS_GB=CS_Iso*Lambda_GB;
C_SU=C_Iso*Lambda_SU;
CS_SU=CS_Iso*Lambda_SU;
C_SD=C_Iso*Lambda_SD;
CS_SD=CS_Iso*Lambda_SD;

% Reduction to simpler configurations. 
% It should pay attention to the geometrical configuration, as the thickness of each layer.
% % Purely free surfaces without stiff layers
% C_SU=C_I;
% CS_SU=CS_I;
% C_SD=C_II;
% CS_SD=CS_II;
% % Planar GB without thickness. Interphase GB can be identical to Crystal I or Crystal II.
% C_GB=C_I;
% CS_GB=CS_I;

% Determination of eigenvalues P and eigenvectors A and B used in the Stroh matrix formalism
[P_I,P_I_Re,P_I_Im,M_P_I,A_I,B_I]=Eigvave(C_I);
[P_II,P_II_Re,P_II_Im,M_P_II,A_II,B_II]=Eigvave(C_II);
[P_GB,P_GB_Re,P_GB_Im,M_P_GB,A_GB,B_GB]=Eigvave(C_GB);
[P_SU,P_SU_Re,P_SU_Im,M_P_SU,A_SU,B_SU]=Eigvave(C_SU);
[P_SD,P_SD_Re,P_SD_Im,M_P_SD,A_SD,B_SD]=Eigvave(C_SD);

%% Image dislocation density distribution at the interfaces with one single disloction in the crystal I
% The result distri_rho is a 1*N_rho_distri cell variable, where 
% N_rho_distri is the maximum number of sample points used in the
% Gauss-Hermite quadrature. There are 30 image dislocation densities for a 
% five-layers configuration. Thus, distri_rho{i} contains all 30 
% image dislocation densities for the sample point i of the Gauss-Hermite 
% quadrature. Each distri_rho{i} is a 30*N_point matrix, where N_point is 
% the number of mesh points along the interfaces, which is equal to 
% length(Range). Each row of distri_rho{i}(j,:) (j=1:30) is the image 
% dislocation density at the correponding interface with the following order:
% [rho_1U^t,rho_1L^t,rho_2U^t,rho_2L^t,rho_3U^t,rho_3L^t,rho_4U^t,rho_4L^t,rho_5U^t,rho_5L^t] t=1,2,3. 

% Building the x1 values of mesh points along the interfaces
Range=(-10:1:10);
% Maximum number of sample points used in the Gauss-Hermite quadrature
N_rho_distri=15;
distri_rho=cell(N_rho_distri,1);
parfor num_Napp=1:N_rho_distri
    % N_app is the number of sample points used for Gauss-Hermite quadrature
    N_app=num_Napp;
    % x_w are the roots of the physicists version of the Hermite polynomial Hn(x)  
    % (n = N_app), and w are the associated weights
    [x_w,w]=Hermite(N_app); 
    % The coefficients matrix used for the image decomposition method
    [C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,...
        CI_H0_I_rho,weights,C,C0_Cinv,C0_Cinv_C0]=coef_rho_mex(w,C_I,...
        P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,...
        C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,...
        A_SU,B_SU,C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,B_SD,h,N_app,x_w); 
    % n is the number of dislocations
    n=1;
    % (XL1,XL2) are the position coordinates of the dislocation in the x1-x2 plane
    XL1=0;
    XL2=5*b_Standard+Posi_Inter;
    if XL2<x22 && XL2>x23
        distri_rho{num_Napp}=rho_distri_mex(C_rho,C0_Cinv_C0_rho,...
            C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,CI_H0_I_rho,...
            C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,...
            A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,...
            P_SU_Re,P_SU_Im,A_SU,B_SU,C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,...
            B_SD,h,XL1,XL2,N_app,weights,x_w,C,C0_Cinv,C0_Cinv_C0,b_cry,n,Range);
    else
        f = msgbox('Dislocation is out of grains area');
    end
end 

%% Dislocation image stress calculation
% N_PK is the number of points to be calculated along the GB normal direction
N_PK=5;
% Image_stress(:,1) is the distance from GB to the dislocation and
% Image_stress(:,2) is the corresponding resolved dislocation image stress, 
% in GPa
Image_stress=zeros(N_PK,2);
% It should pay attention that the dislocation cannot be located at
% interfaces or surfaces
Image_stress(:,1)=linspace(5*b_Standard,(h_I+h_GB/2)-5*b_Standard,N_PK)'; 

N_app=15;
[x_w,w]=Hermite(N_app);
[C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,...
    CI_H0_I_rho,weights,C,C0_Cinv,C0_Cinv_C0]=coef_rho_mex(w,C_I,...
    P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,...
    C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,...
    A_SU,B_SU,C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,B_SD,h,N_app,x_w);  

% sigma is the dislocation image stress tensor on the dislocation, in GPa
sigma=cell(N_PK,1);

% n is the number of dislocations
n=1;
% n_singularity is the number of dislocations for which point of
% calculation is different from the dislocation position.
% For the dislocation image stress calculation, there is
% only one dislocation and the point of caculation is on the dislocation position, so
% n_singularity = 0.
n_singularity=0;
% S_singularity is defined by S function as S = XL1 + XL2 * P for the 
% dislocations which are not located at the point of calculation.
% (XL1,XL2) defines the dislocation position in the x1-x2 plane and P is the eigenvalue vector of 
% the material containing the dislocation. 
S_singularity=cell(1,n_singularity);
parfor index1=1:N_PK
    % (x1,x2) is the position of the point of caculation
    x1=0;
    x2=Image_stress(index1,1)+Posi_Inter;
    
    % (XL1,XL2) is the dislocation position, in image stress calculation it
    % is the same as the point of caculation
    XL1=x1;
    XL2=x2;
    % Discrete image dislocation densities on each sample points used in the Gauss-Hermite quadrature
    rho_t_Napp=Rho_density_mex(b_cry,n,XL1,XL2,C_rho,C0_Cinv_C0_rho,...
        C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,CI_H0_I_rho,C_I,P_I,...
        P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,...
        P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,...
        B_SU,C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,B_SD,h,N_app,weights,x_w); 
    
    [sigma{index1},~,~,~,~]=stress_mex(S_singularity,n_singularity,...
        rho_t_Napp,b_cry,n,XL1,XL2,x1,x2,C_I,CS_I,P_I,P_I_Re,P_I_Im,...
        M_P_I,A_I,B_I,C_II,CS_II,P_II,P_II_Re,P_II_Im,M_P_II,A_II,...
        B_II,C_GB,CS_GB,P_GB,P_GB_Re,P_GB_Im,M_P_GB,A_GB,B_GB,C_SU,...
        CS_SU,P_SU,P_SU_Re,P_SU_Im,M_P_SU,A_SU,B_SU,C_SD,CS_SD,P_SD,...
        P_SD_Re,P_SD_Im,M_P_SD,A_SD,B_SD,h,x22,x23,x24,x25,x26,N_app,...
        weights,x_w,C,C0_Cinv,C0_Cinv_C0);
end   

for index1=1:N_PK
    % force_PK is the Peach-Koehler force of the dislocation, ion N/m
    force_PK=cross(sigma{index1}*b_cry,t);
    Image_stress(index1,2)=force_PK'*v/b_Standard;
end 

%% Elastic fields due to one single dislocation 
% The dislocation position is defined by L, the distance from the middle of 
% GB along the slip direction, as XL1 = cos(alpha) * L and XL2 = sin(alpha) * L 
% (see figure "convention.png"). The dislocation cannot be located at
% interfaces or surfaces.
d=20*b_Standard;
% The dislocation should be in the first crystal, 
% as XL2>h_GB/2 and XL2<(h_GB/2+h_I)
position_verify=d*sin(alpha); 
if position_verify>h_GB/2 && position_verify<(h_GB/2+h_I)
    n=1;
else
    f = msgbox('Dislocation is out of grains area');
end 

N_app=7;
[x_w,w]=Hermite(N_app);
[C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,...
    CI_H0_I_rho,weights,C,C0_Cinv,C0_Cinv_C0]=coef_rho_mex(w,C_I,...
    P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,...
    C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,...
    A_SU,B_SU,C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,B_SD,h,N_app,x_w);  

%% Building meshed points for elastic fields calculation
d=sort(d);
XL1_cry=zeros(1,n);
XL2_cry=zeros(1,n);
S_singularity_cry=cell(1,n);
for i=1:n
    XL1_cry(i)=cos(alpha)*d(i);
    XL2_cry(i)=sin(alpha)*d(i)+Posi_Inter;
    S_singularity_cry{i}=P_I*XL2_cry(i)+XL1_cry(i);
end

% Dislocation position in the schematic figure of the elastic fields
% distribution
XL_sample=zeros(2,n);
for i=1:n
    XL_sample(1,i)=cos(alpha)*d(i);
    XL_sample(2,i)=sin(alpha)*d(i);
end 
b0_sample=-[cos(alpha);sin(alpha);0];
n0_sample=cross(t,b0_sample);

% Lx and Ly (nm) are the length of simulation plane in x1 and x2 direction,
% respectively. It should pay attention that Ly should not be larger than H.
Lx=10;
Ly=Lx;
% N is the interval number of mesh in x1 direction and M is for x2 direction   
N=5; 
M=5; 
% X,Y are positions of the meshed points. It should pay attention that the 
% points of calculation cannot be located at interfaces or surfaces.
[X,Y]=meshgrid((-Lx/2:Lx/N:Lx/2),(-Ly*(h(1,2)+h(3,3)/2)/H:Ly/M:Ly*(h(4,5)+h(3,3)/2)/H)); 

%% Elastic fields 
% Elastic field matrices for meshed points: sigma_ are stress components,
% epsilon_ are elastic deformation components, rotation is the rotation
% matrix, rotation_vector_ are rotation vector components and
% rotation_length is the rotation magnitude. 
sigma_11=zeros(M+1,N+1);
sigma_12=zeros(M+1,N+1);
sigma_13=zeros(M+1,N+1);
sigma_23=zeros(M+1,N+1);
sigma_22=zeros(M+1,N+1);
sigma_33=zeros(M+1,N+1);
epsilon_11=zeros(M+1,N+1);
epsilon_12=zeros(M+1,N+1);
epsilon_13=zeros(M+1,N+1);
epsilon_23=zeros(M+1,N+1);
epsilon_22=zeros(M+1,N+1);
epsilon_33=zeros(M+1,N+1);
rotation_matrix=cell(M+1,N+1);
rotation_vector_1=zeros(M+1,N+1);
rotation_vector_2=zeros(M+1,N+1);
rotation_vector_3=zeros(M+1,N+1);
rotation_length=zeros(M+1,N+1);

S_singularity_Ela_cry_Ori=cell(1,n);

rho_t_Napp_cry=Rho_density_mex(b_cry,n,XL1_cry,XL2_cry,...
    C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,...
    CH_H0_H_rho,CI_H0_I_rho,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,...
    C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,...
    C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,...
    C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,...
    C_SD,P_SD,P_SD_Re,P_SD_Im,A_SD,B_SD,h,N_app,weights,x_w); 

% First of all, it must be determined in which crystal the points of calculation are.
% The S function should be defined with corresponding eigenvalue vector P_
for index2=1:M+1
    if Y(index2,1)>=(h_GB/2+h_I)  % In upper stiff layer _SU
        for n_singularity=1:n
            S_singularity_Ela_cry_Ori{n_singularity}=XL1_cry(n_singularity)+P_SU*XL2_cry(n_singularity);
        end 
    elseif Y(index2,1)>=h_GB/2  % In crystal I 
        for n_singularity=1:n
            S_singularity_Ela_cry_Ori{n_singularity}=XL1_cry(n_singularity)+P_I*XL2_cry(n_singularity);
        end 
    elseif Y(index2,1)>=-h_GB/2  % In interphase GB    
        for n_singularity=1:n
            S_singularity_Ela_cry_Ori{n_singularity}=XL1_cry(n_singularity)+P_GB*XL2_cry(n_singularity);
        end 
    elseif Y(index2,1)>=-(h_GB/2+h_I)  % In crystal II
        for n_singularity=1:n
            S_singularity_Ela_cry_Ori{n_singularity}=XL1_cry(n_singularity)+P_II*XL2_cry(n_singularity);
        end 
    else % In bottom stiff layer _SD
       for n_singularity=1:n
            S_singularity_Ela_cry_Ori{n_singularity}=XL1_cry(n_singularity)+P_SD*XL2_cry(n_singularity);
        end 
    end
    
    parfor index1=1:N+1
        x1=X(1,index1);
        x2=Y(index2,1)+Posi_Inter;

        % Verify if the dislocation is located at the point of calculation
        % If so, this dislocation does not contribute the elastic fields part corresponding to an infinite homogeneous single crystal  
        k=int16(0);
        for i=1:n
            if sqrt((x1-XL1_cry(i))^2+(x2-XL2_cry(i))^2)<b_Standard
                k=i;
                break
            end 
        end 
        if k>=1 %remove the singularity point
            S_singularity_Ela_cry=S_singularity_Ela_cry_Ori;
            S_singularity_Ela_cry(k)=[];
            [sigma,epsilon_m,rotation_m,rotation_v,rotation_abs]=stress_mex(S_singularity_Ela_cry,n-1,rho_t_Napp_cry,b_cry,n,XL1_cry,XL2_cry,x1,x2,C_I,CS_I,P_I,P_I_Re,P_I_Im,M_P_I,A_I,B_I,C_II,CS_II,P_II,P_II_Re,P_II_Im,M_P_II,A_II,B_II,C_GB,CS_GB,P_GB,P_GB_Re,P_GB_Im,M_P_GB,A_GB,B_GB,C_SU,CS_SU,P_SU,P_SU_Re,P_SU_Im,M_P_SU,A_SU,B_SU,C_SD,CS_SD,P_SD,P_SD_Re,P_SD_Im,M_P_SD,A_SD,B_SD,h,x22,x23,x24,x25,x26,N_app,weights,x_w,C,C0_Cinv,C0_Cinv_C0);
        else 
            [sigma,epsilon_m,rotation_m,rotation_v,rotation_abs]=stress_mex(S_singularity_Ela_cry_Ori,n,rho_t_Napp_cry,b_cry,n,XL1_cry,XL2_cry,x1,x2,C_I,CS_I,P_I,P_I_Re,P_I_Im,M_P_I,A_I,B_I,C_II,CS_II,P_II,P_II_Re,P_II_Im,M_P_II,A_II,B_II,C_GB,CS_GB,P_GB,P_GB_Re,P_GB_Im,M_P_GB,A_GB,B_GB,C_SU,CS_SU,P_SU,P_SU_Re,P_SU_Im,M_P_SU,A_SU,B_SU,C_SD,CS_SD,P_SD,P_SD_Re,P_SD_Im,M_P_SD,A_SD,B_SD,h,x22,x23,x24,x25,x26,N_app,weights,x_w,C,C0_Cinv,C0_Cinv_C0);
        end        
        
        sigma_11(index2,index1)=sigma(1,1);
        sigma_22(index2,index1)=sigma(2,2);
        sigma_33(index2,index1)=sigma(3,3);
        sigma_23(index2,index1)=sigma(2,3);
        sigma_13(index2,index1)=sigma(1,3);
        sigma_12(index2,index1)=sigma(1,2); 
        epsilon_11(index2,index1)=epsilon_m(1,1);
        epsilon_22(index2,index1)=epsilon_m(2,2);
        epsilon_33(index2,index1)=epsilon_m(3,3);
        epsilon_23(index2,index1)=epsilon_m(2,3);
        epsilon_13(index2,index1)=epsilon_m(1,3);
        epsilon_12(index2,index1)=epsilon_m(1,2); 
        rotation_matrix{index2,index1}=rotation_m;
        rotation_vector_1(index2,index1)=rotation_v(1);
        rotation_vector_2(index2,index1)=rotation_v(2);
        rotation_vector_3(index2,index1)=rotation_v(3);
        rotation_length(index2,index1)=rotation_abs;  
    end 
end

%% Interfaces definition for results figure 
free_up=ones(1,(N+1))*(h_GB/2+h_I+h_SU)/b_Standard;
surfacelayer_up=ones(1,(N+1))*(h_GB/2+h_I)/b_Standard;
boundary_I=ones(1,(N+1))*h_GB/2/b_Standard;
boundary_II=ones(1,(N+1))*-h_GB/2/b_Standard;
surfacelayer_bottom=ones(1,(N+1))*-(h_GB/2+h_II)/b_Standard;
free_down=ones(1,(N+1))*-(h_GB/2+h_II+h_SD)/b_Standard;

%% Present the results
figure(1);
plot(Image_stress(:,1),Image_stress(:,2),'r','LineWidth',2);
% legend('Dislocation resolved image stress','Location','northeast')
% legend('boxoff')
% title({['Resolved image stress on dislocation along GB normal direction in anisotropic fivecrystal with two free surfaces between ',Material_I, ' and ',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
xlabel('L / nm','FontSize',14);       %title of axis x
ylabel('Sigma_{im} / GPa','FontSize',14);        %title of axis y
set(gca,'FontSize',14);
set(gcf,'PaperUnits','inches','PaperPosition',[0 0 6 6])
% set(gcf,'color','none')  %Remove the background color
% set(gca,'color','none')  %Remove the background color
print('Image stress on dislocation along slip direction in anisotropic fivecrystal with two free surfaces','-dtiff','-r150')

figure(2);
% For stresses, the unit of x1-x2 axis is the standard Burgers vector length and the stresses are normalized by C44 
contour(X/b_Standard,Y/b_Standard,sigma_11/C44,80);
hold on;
% Dislocations symbol
for k=1:n
    line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
    line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% legend('boxoff')
% title({['Contour of \sigma_{11} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
xlabel('x_1 / b','FontSize',14);        %title of axis x
ylabel('x_2 / b','FontSize',14);        %title of axis y
set(gca,'FontSize',14);
set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% set(gcf,'color','none')  %Remove the background color
% set(gca,'color','none')  %Remove the background color
print('Contour of sigma_{11} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')

% figure(3);
% contour(X/b_Standard,Y/b_Standard,sigma_22/C44,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% % p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \sigma_{22} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of sigma_{22} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(4);
% contour(X/b_Standard,Y/b_Standard,sigma_33/C44,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \sigma_{33} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of sigma_{33} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(5);
% contour(X/b_Standard,Y/b_Standard,sigma_23/C44,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \sigma_{23} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of sigma_{23} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(6);
% contour(X/b_Standard,Y/b_Standard,sigma_13/C44,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \sigma_{13} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of sigma_{13} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(7);
% contour(X/b_Standard,Y/b_Standard,sigma_12/C44,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% Col=colorbar; set(get(Col,'Title'),'string','/ c_{44}'); 
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \sigma_{12} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of sigma_{12} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(8);
% contour(X/b_Standard,Y/b_Standard,epsilon_11,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{11} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{11} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(9);
% contour(X/b_Standard,Y/b_Standard,epsilon_22,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{22} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{22} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(10);
% contour(X/b_Standard,Y/b_Standard,epsilon_33,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{33} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{33} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(11);
% contour(X/b_Standard,Y/b_Standard,epsilon_23,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{23} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{23} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(12);
% contour(X/b_Standard,Y/b_Standard,epsilon_13,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{13} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{13} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(13);
% contour(X/b_Standard,Y/b_Standard,epsilon_12,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of \epsilon_{12} in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('epsilon_{12} in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(14);
% contour(X/b_Standard,Y/b_Standard,rotation_length,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of rotation in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of rotation in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(15);
% contour(X/b_Standard,Y/b_Standard,rotation_vector_1,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of rotation vector 1 in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of rotation vector 1 in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(16);
% contour(X/b_Standard,Y/b_Standard,rotation_vector_2,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of rotation vector 2 in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of rotation vector 2 in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(17);
% contour(X/b_Standard,Y/b_Standard,rotation_vector_3,80);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of rotation vector 3 in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Contour of rotation vector 3 in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 
% figure(18);
% quiver3(X/b_Standard,Y/b_Standard,zeros(N+1,M+1),rotation_vector_1,rotation_vector_2,rotation_vector_3);
% hold on;
% for k=1:n
%     line([XL_sample(1,k)/b_Standard+b0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard-b0_sample(1)*Lx/10],[XL_sample(2,k)/b_Standard+b0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard-b0_sample(2)*Ly/10],'LineWidth',2,'Color',[0 0 0]);
%     line([XL_sample(1,k)/b_Standard+n0_sample(1)*Lx/10,XL_sample(1,k)/b_Standard],[XL_sample(2,k)/b_Standard+n0_sample(2)*Ly/10,XL_sample(2,k)/b_Standard],'LineWidth',2,'Color',[0 0 0]);
% end
% p1=plot(X(1,:)/b_Standard,free_up,'--r',X(1,:)/b_Standard,surfacelayer_up,'--r',X(1,:)/b_Standard,boundary_I,'--r',X(1,:)/b_Standard,boundary_II,'--r',X(1,:)/b_Standard,surfacelayer_bottom,'--r',X(1,:)/b_Standard,free_down,'--r');
% % legend(p1,{'Upper Free Surface','Upper surface layer','Interface I','Interface II','Lower surface layer','Lower Free Surface'},'FontSize',14,'Location','northeast')
% % legend('boxoff')
% % title({['Contour of rotation in anisotropic fivecrystal with two free surfaces between I= ',Material_I, ' and II=',Material_II,' with \lambdaGB =',mat2str(Lambda_GB,1),' \lambdaSU =',mat2str(Lambda_SU,1),' and \lambdaSD =',mat2str(Lambda_SD,1),]},'FontSize',14);    %title
% xlabel('x_1 / b','FontSize',14);        %title of axis x
% ylabel('x_2 / b','FontSize',14);        %title of axis y
% set(gca,'FontSize',14);
% set(gcf,'PaperUnits','inches','PaperPosition',[0 0 7 6])
% % set(gcf,'color','none')  %Remove the background color
% % set(gca,'color','none')  %Remove the background color
% print('Rotation in anisotropic fivecrystal with two free surfaces dislocation near interface','-dtiff','-r150')
% 