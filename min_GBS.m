function [min_GBS]=min_GBS(A)
    n=length(A);
    min_GBS=A(1);
    for i=1:(n-1)
        min_GBS=lcm(min_GBS,A(i+1));
    end
end