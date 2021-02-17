function [sigma,epsilon_m,rotation_m,rotation_v,rotation_abs]=stress(S_singularity,n_singularity,rho_t_Napp,b,n,XL1,XL2,x1,x2,C_I,CS_I,P_I,P_I_Re,P_I_Im,M_P_I,A_I,B_I,C_II,CS_II,P_II,P_II_Re,P_II_Im,M_P_II,A_II,B_II,C_GB,CS_GB,P_GB,P_GB_Re,P_GB_Im,M_P_GB,A_GB,B_GB,C_SU,CS_SU,P_SU,P_SU_Re,P_SU_Im,M_P_SU,A_SU,B_SU,C_SL,CS_SL,P_SL,P_SL_Re,P_SL_Im,M_P_SL,A_SL,B_SL,h,x22,x23,x24,x25,x26,N_app,weights,x_w,C,C0_Cinv,C0_Cinv_C0)

% CS is elastic stiffness tensor in Voigt notation
CS=zeros(6,6);
% Ug is the non-zero displacement gradient components. For two dimensional
% elastic theory, Ui,3 = 0
Ug=zeros(6,1);
% u_g is the full displacement gradient matrix  
u_g=zeros(3,3);
% epsilon_m is the elastic deformation matrix 
epsilon_m=zeros(3,3);
% rotation_m is the rotation matrix 
rotation_m=zeros(3,3);
% rotation_v is the rotation vector
rotation_v=zeros(3,1);

% Q_ is used for elastic fields calculation of dislocations in an infinite 
% homogeneous single crystal, Eq.11 in Ref.[2]
Q_SU=-0.5*sqrt(complex(-1))/pi*B_SU.'*b;
Q_I=-0.5*sqrt(complex(-1))/pi*B_I.'*b;
Q_GB=-0.5*sqrt(complex(-1))/pi*B_GB.'*b;
Q_II=-0.5*sqrt(complex(-1))/pi*B_II.'*b;
Q_SL=-0.5*sqrt(complex(-1))/pi*B_SL.'*b;

if n==1 && n_singularity==0
    if x2>0 
    elseif x2>=x22  % In upper stiff layer _SU
        CS=CS_SU;
        Ug = integrale_num_inf(@(x) stress_SU(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2));  
    elseif x2>x23  % In crystal I 
        CS=CS_I;
        Ug = integrale_num_inf(@(x) stress_I(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2)); 
    elseif x2>=x24  % In interphase GB  
        CS=CS_GB;
        Ug = integrale_num_inf(@(x) stress_GB(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2));  
    elseif x2>=x25  % In crystal II
        CS=CS_II;
        Ug = integrale_num_inf(@(x) stress_II(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2));  
    elseif x2>=x26  % In bottom stiff layer _SL
        CS=CS_SL;
        Ug = integrale_num_inf(@(x) stress_SL(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2));  
    else
    end   
% If there are dislocations not located at calculated point, the elastic fields due to these dislocations in homogeneous single crystal should be considered.     
else
    if x2>0 
    elseif x2>=x22  % In upper stiff layer _SU
        CS=CS_SU;
        Z=x1+P_SU*x2;
        Ug = integrale_num_inf(@(x) stress_SU(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2))+sigma_homo(Z,S_singularity,Q_SU,n_singularity,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26);  
    elseif x2>x23  % In crystal I 
        CS=CS_I;
        Z=x1+P_I*x2;
        Ug = integrale_num_inf(@(x) stress_I(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2))+sigma_homo(Z,S_singularity,Q_I,n_singularity,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26); 
    elseif x2>=x24  % In interphase GB  
        CS=CS_GB;
        Z=x1+P_GB*x2;
        Ug = integrale_num_inf(@(x) stress_GB(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2))+sigma_homo(Z,S_singularity,Q_GB,n_singularity,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26);  
    elseif x2>=x25  % In crystal II
        CS=CS_II;
        Z=x1+P_II*x2;
        Ug = integrale_num_inf(@(x) stress_II(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2))+sigma_homo(Z,S_singularity,Q_II,n_singularity,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26);  
    elseif x2>=x26  % In bottom stiff layer _SL
        CS=CS_SL;
        Z=x1+P_SL*x2;
        Ug = integrale_num_inf(@(x) stress_SL(x,x1,x2,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,rho_t_Napp,x_w,C,C0_Cinv,C0_Cinv_C0,b,n,XL1,XL2))+sigma_homo(Z,S_singularity,Q_SL,n_singularity,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26);  
    else
    end 
end

u_g=[Ug(1:3,1),Ug(4:6,1),zeros(3,1)];

for i=1:3
    for j=1:3
        epsilon_m(i,j)=1/2*(u_g(i,j)+u_g(j,i));
        rotation_m(i,j)=1/2*(u_g(i,j)-u_g(j,i));
    end
end 
sigma0=CS*[epsilon_m(1,1);epsilon_m(2,2);epsilon_m(3,3);2*epsilon_m(2,3);2*epsilon_m(3,1);2*epsilon_m(1,2)];
sigma=[sigma0(1),sigma0(6),sigma0(5);
       sigma0(6),sigma0(2),sigma0(4);
       sigma0(5),sigma0(4),sigma0(3)];
rotation_v(1)=(u_g(3,2)-u_g(2,3))/2;
rotation_v(2)=(u_g(1,3)-u_g(3,1))/2;
rotation_v(3)=(u_g(2,1)-u_g(1,2))/2;
rotation_abs=norm(rotation_v); 
end   