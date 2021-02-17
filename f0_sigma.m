function f0_sigma=f0_sigma(Z,S,Q0,N_singularity)
% Eqs. 10 and 11 in Chen et al., IJSS,2019
% The derivation of f0 with x1
sigma_total=complex(zeros(3,1));
for i=1:N_singularity
    sigma_total=sigma_total+1./(Z-S{i});
end 
f0_sigma=diag(sigma_total)*Q0;