function xi = Re_Xi(t,alpha,i,C,P,A,B)
% Eq. 3 in Ref.[2]
xi=complex(zeros(1));
delta=zeros(3,2);
delta(1,1)=1;
delta(2,2)=1;
for k=1:3
    for l=1:3
        xi=xi+C(i,2,k,l)*(delta(l,1)+P(alpha)*delta(l,2))*A(k,alpha)*B(t,alpha);    
    end
end 
xi=imag(xi/2/pi);
end 