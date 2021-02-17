function zeta = Im_Zeta_S(t,alpha,i,j,P,A,B)
% Eq. 3 in Ref.[2]
zeta=zeros(1);
if j==1
    zeta=-real(A(i,alpha)*B(t,alpha)/2/pi);
elseif j==2
    zeta=-real(P(alpha)*A(i,alpha)*B(t,alpha)/2/pi);
end 
end 