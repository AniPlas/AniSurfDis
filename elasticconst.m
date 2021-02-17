function [C,CS] = elasticconst(c11,c12,c44,T)
% Generate elastic stiffness tensor C_ijkl in the global coordinate
% C_ijkl is a rank 4 tensor

% Initialize C for non rotated crystal, as xi = ei
C0=zeros(3,3,3,3);

% delta function
delta=eye(3);

% Define H
H=2*c44+c12-c11;

% For cubic crystals presents in the crystal coordinate
for i=1:3
    for j=1:3
        for k=1:3
            for l=1:3
                C0(i,j,k,l)=c44*(delta(i,k)*delta(j,l)+delta(i,l)*delta(j,k))+...
                    c12*delta(i,j)*delta(k,l)-H*delta(i,j)*delta(k,l)*delta(i,k);
            end
        end
    end
end

% Presented in the global coordinate by C(i,j,k,l)=T(i,g)*T(j,h)*C0(g,h,m,n)*T(k,m)*T(l,n)
C=zeros(3,3,3,3);

for i=1:3
    for j=1:3
        for k=1:3
            for l=1:3
                for g=1:3
                    for h=1:3
                        for m=1:3
                            for n=1:3
                                C(i,j,k,l)=C(i,j,k,l)+T(i,g)*T(j,h)*C0(g,h,m,n)*T(k,m)*T(l,n);
                            end 
                        end
                    end
                end
            end
        end
    end
end

% Presented in the form of 6*6 matrix, as the Voigt notation
CS=[C(1,1,1,1),C(1,1,2,2),C(1,1,3,3),C(1,1,2,3),C(1,1,3,1),C(1,1,1,2);
    C(1,1,2,2),C(2,2,2,2),C(2,2,3,3),C(2,2,2,3),C(2,2,3,1),C(2,2,1,2);
    C(1,1,3,3),C(2,2,3,3),C(3,3,3,3),C(3,3,2,3),C(3,3,3,1),C(3,3,1,2);
    C(1,1,2,3),C(2,2,2,3),C(3,3,2,3),C(2,3,2,3),C(2,3,3,1),C(2,3,1,2);
    C(1,1,3,1),C(2,2,3,1),C(3,3,3,1),C(2,3,3,1),C(3,1,3,1),C(3,1,1,2);
    C(1,1,1,2),C(2,2,1,2),C(3,3,1,2),C(2,3,1,2),C(3,1,1,2),C(1,2,1,2)];
