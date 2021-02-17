function [P,P_Re,P_Im,M_P,A,B]=Eigvave(C)
% calculate P, A and B using Stroh matrix Formalism
% C: (3x3x3x3, rank-4 tensor) elastic constant tensor

%Define Q, R and T matrices 
z3 = zeros(3);Q=z3; R=z3; T=z3;
for i=1:3
     for k=1:3
                 Q(i,k)=C(i,1,k,1);
                 R(i,k)=C(i,1,k,2);
                 T(i,k)=C(i,2,k,2);
     end
end

N0=[-T\R',inv(T);R/T*R'-Q,-R/T];
 
%Solve Eigen equation
[V,D]=eig(N0);
 
%initializing A, B and P
P = complex(zeros(1,3)); 
A = complex(zeros(3,3)); 
B = complex(zeros(3,3)); 

image_positive=zeros(1,3);
m=1;
%Define A, B and P
for epsilon=1:6
    if imag(D(epsilon,epsilon))>0
        image_positive(m)=epsilon;
        m=m+1;
    end
end

for epsilon=1:3
    P(epsilon)=D(image_positive(epsilon),image_positive(epsilon));
    A(:,epsilon)=V(1:3,image_positive(epsilon));
    B(:,epsilon)=V(4:6,image_positive(epsilon));
end 

%normalize A and B
for alpha=1:3
    %AialphaLibeta+AibetaLialpha=delta(alpha,beta)
    ralpha = sqrt(2*sum(A(:,alpha).*B(:,alpha)));
    A(:,alpha) = A(:,alpha)/ralpha;
    B(:,alpha) = B(:,alpha)/ralpha;    
end

P=P.';
P_Re=real(P);
P_Im=imag(P);
M_P=diag(P);
