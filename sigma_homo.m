function Ug=sigma_homo(Z,S,Q0,N_pileup,x2,M_P_I,A_I,M_P_II,A_II,M_P_GB,A_GB,M_P_SU,A_SU,M_P_SL,A_SL,x22,x23,x24,x25,x26)

u_g=zeros(3,3);
Ug=zeros(6,1);
% Eqs. 5, 10, 11 in Chen et al., IJSS,2019       
if x2>=x22   
    f_sigma=f0_sigma(Z,S,Q0,N_pileup);
    u_g(:,1)=real(A_SU*f_sigma);                                  
    u_g(:,2)=real(A_SU*(M_P_SU*f_sigma));  
elseif x2>x23
    f_sigma=f0_sigma(Z,S,Q0,N_pileup);
    u_g(:,1)=real(A_I*f_sigma);                                  
    u_g(:,2)=real(A_I*(M_P_I*f_sigma));  
elseif x2>=x24
    f_sigma=f0_sigma(Z,S,Q0,N_pileup);
    u_g(:,1)=real(A_GB*f_sigma);                                  
    u_g(:,2)=real(A_GB*(M_P_GB*f_sigma));  
elseif x2>=x25
    f_sigma=f0_sigma(Z,S,Q0,N_pileup);
    u_g(:,1)=real(A_II*f_sigma);                                  
    u_g(:,2)=real(A_II*(M_P_II*f_sigma));  
elseif x2>=x26
    f_sigma=f0_sigma(Z,S,Q0,N_pileup);
    u_g(:,1)=real(A_SL*f_sigma);                                  
    u_g(:,2)=real(A_SL*(M_P_SL*f_sigma));  
end 
    Ug=2*[u_g(:,1);u_g(:,2)];
end 
