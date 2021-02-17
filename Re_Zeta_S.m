function zeta = Re_Zeta_S(t,alpha,i,j,P,A,B)
% Eq. 3 in Ref.[2]
zeta=zeros(1);
if j==1
    zeta=imag(A(i,alpha)*B(t,alpha)/2/pi);
elseif j==2
    zeta=imag(P(alpha)*A(i,alpha)*B(t,alpha)/2/pi);
end 
end 