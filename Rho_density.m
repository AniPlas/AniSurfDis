function rho_t_Napp=Rho_density(b,n,XL1,XL2,C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,CI_H0_I_rho,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,weights,x_w)

rho_t_Napp=zeros(30*N_app,n);

for n_dis=1:n
    zeros_30Napp_3=zeros(30*N_app,3);
    CR_R_rho=zeros_30Napp_3;
    CR_H0_R_rho=zeros_30Napp_3;
    for i=1:3
        for t=1:3
            for g=1:N_app
                for alpha=1:3
                    CR_R_rho((i-1)*N_app+g,t)=CR_R_rho((i-1)*N_app+g,t)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),-P_SU_Re(alpha)*XL2(n_dis),-P_SU_Im(alpha)*XL2(n_dis))+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),-P_SU_Re(alpha)*XL2(n_dis),-P_SU_Im(alpha)*XL2(n_dis));
                    CR_R_rho((i+2)*N_app+g,t)=CR_R_rho((i+2)*N_app+g,t)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,5)-XL2(n_dis)),-P_SL_Im(alpha)*(-h(1,5)-XL2(n_dis)))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,5)-XL2(n_dis)),-P_SL_Im(alpha)*(-h(1,5)-XL2(n_dis)));
                    CR_R_rho((i+5)*N_app+g,t)=CR_R_rho((i+5)*N_app+g,t)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))+sign(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis))))-sign(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)))); 
                    CR_R_rho((i+8)*N_app+g,t)=CR_R_rho((i+8)*N_app+g,t)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis)))+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis)))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)));
                    CR_R_rho((i+11)*N_app+g,t)=CR_R_rho((i+11)*N_app+g,t)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))+sign(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis))))-sign(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis))));
                    CR_R_rho((i+14)*N_app+g,t)=CR_R_rho((i+14)*N_app+g,t)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),P_I_Im(alpha)*(-h(1,2)-XL2(n_dis)))+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),P_I_Im(alpha)*(-h(1,2)-XL2(n_dis)))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)));
                    CR_R_rho((i+17)*N_app+g,t)=CR_R_rho((i+17)*N_app+g,t)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))+sign(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis))))-sign(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis))));
                    CR_R_rho((i+20)*N_app+g,t)=CR_R_rho((i+20)*N_app+g,t)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis)))+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis)))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)));
                    CR_R_rho((i+23)*N_app+g,t)=CR_R_rho((i+23)*N_app+g,t)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))+sign(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis))))-sign(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)))); 
                    CR_R_rho((i+26)*N_app+g,t)=CR_R_rho((i+26)*N_app+g,t)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),P_II_Im(alpha)*(-h(1,4)-XL2(n_dis)))+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),P_II_Im(alpha)*(-h(1,4)-XL2(n_dis)))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)));
                    
                    CR_H0_R_rho((i-1)*N_app+g,t)=CR_H0_R_rho((i-1)*N_app+g,t)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),-P_SU_Re(alpha)*XL2(n_dis),-P_SU_Im(alpha)*XL2(n_dis))-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),-P_SU_Re(alpha)*XL2(n_dis),-P_SU_Im(alpha)*XL2(n_dis));
                    CR_H0_R_rho((i+2)*N_app+g,t)=CR_H0_R_rho((i+2)*N_app+g,t)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,5)-XL2(n_dis)),-P_SL_Im(alpha)*(-h(1,5)-XL2(n_dis)))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,5)-XL2(n_dis)),-P_SL_Im(alpha)*(-h(1,5)-XL2(n_dis)));
                    CR_H0_R_rho((i+5)*N_app+g,t)=CR_H0_R_rho((i+5)*N_app+g,t)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))-sign(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis))))+sign(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis))));
                    CR_H0_R_rho((i+8)*N_app+g,t)=CR_H0_R_rho((i+8)*N_app+g,t)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))+sign(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),XL1(n_dis),P_SU_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_SU_Im(alpha)*(-h(1,1)-XL2(n_dis))))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis))))-sign(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,1)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,1)-XL2(n_dis))));
                    CR_H0_R_rho((i+11)*N_app+g,t)=CR_H0_R_rho((i+11)*N_app+g,t)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))-sign(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis))))+sign(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)))); 
                    CR_H0_R_rho((i+14)*N_app+g,t)=CR_H0_R_rho((i+14)*N_app+g,t)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))+sign(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),XL1(n_dis),P_I_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_I_Im(alpha)*(-h(1,2)-XL2(n_dis))))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis))))-sign(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,2)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,2)-XL2(n_dis))));
                    CR_H0_R_rho((i+17)*N_app+g,t)=CR_H0_R_rho((i+17)*N_app+g,t)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))-sign(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis))))+sign(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis))));
                    CR_H0_R_rho((i+20)*N_app+g,t)=CR_H0_R_rho((i+20)*N_app+g,t)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))+sign(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),XL1(n_dis),P_GB_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_GB_Im(alpha)*(-h(1,3)-XL2(n_dis))))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis))))-sign(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,3)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,3)-XL2(n_dis)))); 
                    CR_H0_R_rho((i+23)*N_app+g,t)=CR_H0_R_rho((i+23)*N_app+g,t)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))-sign(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis))))+sign(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis))));
                    CR_H0_R_rho((i+26)*N_app+g,t)=CR_H0_R_rho((i+26)*N_app+g,t)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))+sign(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),XL1(n_dis),P_II_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_II_Im(alpha)*(-h(1,4)-XL2(n_dis))))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis))))-sign(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis)))*Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),XL1(n_dis),P_SL_Re(alpha)*(-h(1,4)-XL2(n_dis)),abs(P_SL_Im(alpha)*(-h(1,4)-XL2(n_dis))));
                end
            end
        end
    end
    CR_R_rho=2*CR_R_rho;
    CR_H0_R_rho=2*CR_H0_R_rho;

    rho_t_Napp(:,n_dis)=(C_rho+C0_Cinv_C0_rho+(CH_H_rho+CI_I_rho-C0_Cinv_rho*CH_H0_H_rho-C0_Cinv_rho*CI_H0_I_rho)*weights)\(-CR_R_rho+C0_Cinv_rho*CR_H0_R_rho)*b;
end 