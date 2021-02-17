function first = P_ra(x_1,x_1_r,x_2,x_2_r,P_a,P_b)
% Eq. 4 in Ref.[2]
first=(x_1-x_1_r+P_a*(x_2-x_2_r))/((x_1-x_1_r+P_a*(x_2-x_2_r))^2+(P_b*(x_2-x_2_r))^2);
end 