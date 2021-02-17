function zeta = Im_Zeta(t,alpha,i,A,B)
% Eq. 3 in Ref.[2]
zeta=-real(A(i,alpha)*B(t,alpha)/2/pi);
end 
 