function zeta = Re_Zeta(t,alpha,i,A,B)
% Eq. 3 in Ref.[2]
zeta=imag(A(i,alpha)*B(t,alpha)/2/pi);
end 