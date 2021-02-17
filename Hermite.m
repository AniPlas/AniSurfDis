function [x_w,w]=Hermite(N_app)

syms x
% Hn is the physicists version of the Hermite polynomial
Hn=(-1)^N_app*exp(x^2)*diff(exp(-x^2),N_app,x);
cc=sym2poly(Hn);
% x_w are the roots of the Hermite polynomial
x_w=roots(cc);

% w are the associated weights for the corresponding x_w 
w=zeros(N_app,1);
Hn_1=(-1)^N_app*exp(x^2)*diff(exp(-x^2),N_app-1,x);
for i=1:N_app
    w(i)=exp(x_w(i)^2)*2^(N_app-1)*factorial(N_app)*sqrt(pi)/N_app^2/(subs(Hn_1,x,x_w(i)))^2;
end 

end 