% The coefficient matrix used for image decomposition method, the details
% can be found in the reference [2].

function [C_rho,C0_Cinv_C0_rho,C0_Cinv_rho,CH_H_rho,CI_I_rho,CH_H0_H_rho,CI_H0_I_rho,weights,C,C0_Cinv,C0_Cinv_C0]=coef_rho(w,C_I,P_I,P_I_Re,P_I_Im,A_I,B_I,C_II,P_II,P_II_Re,P_II_Im,A_II,B_II,C_GB,P_GB,P_GB_Re,P_GB_Im,A_GB,B_GB,C_SU,P_SU,P_SU_Re,P_SU_Im,A_SU,B_SU,C_SL,P_SL,P_SL_Re,P_SL_Im,A_SL,B_SL,h,N_app,x_w)
 
C=zeros(30,30);
C0=zeros(30,30);
for i=1:3
    for t=1:3
        for alpha=1:3
            C(i,t)=C(i,t)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU);
            C(i+6,t+3)=C(i+6,t+3)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU);
            C(i+9,t+3)=C(i+9,t+3)+Im_Zeta(t,alpha,i,A_SU,B_SU);
            C(i+6,t+6)=C(i+6,t+6)+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I);
            C(i+9,t+6)=C(i+9,t+6)+Im_Zeta(t,alpha,i,A_I,B_I);
            C(i+12,t+9)=C(i+12,t+9)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I);
            C(i+15,t+9)=C(i+15,t+9)+Im_Zeta(t,alpha,i,A_I,B_I);
            C(i+12,t+12)=C(i+12,t+12)+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB);
            C(i+15,t+12)=C(i+15,t+12)+Im_Zeta(t,alpha,i,A_GB,B_GB);
            C(i+18,t+15)=C(i+18,t+15)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB);
            C(i+21,t+15)=C(i+21,t+15)+Im_Zeta(t,alpha,i,A_GB,B_GB);
            C(i+18,t+18)=C(i+18,t+18)+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II);
            C(i+21,t+18)=C(i+21,t+18)+Im_Zeta(t,alpha,i,A_II,B_II);
            C(i+24,t+21)=C(i+24,t+21)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II);
            C(i+27,t+21)=C(i+27,t+21)+Im_Zeta(t,alpha,i,A_II,B_II);
            C(i+24,t+24)=C(i+24,t+24)+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL);
            C(i+27,t+24)=C(i+27,t+24)+Im_Zeta(t,alpha,i,A_SL,B_SL);
            C(i+3,t+27)=C(i+3,t+27)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL);
            
            C0(i+9,t+3)=C0(i+9,t+3)+Re_Zeta(t,alpha,i,A_SU,B_SU);
            C0(i+9,t+6)=C0(i+9,t+6)-Re_Zeta(t,alpha,i,A_I,B_I);
            C0(i+15,t+9)=C0(i+15,t+9)+Re_Zeta(t,alpha,i,A_I,B_I);
            C0(i+15,t+12)=C0(i+15,t+12)-Re_Zeta(t,alpha,i,A_GB,B_GB);
            C0(i+21,t+15)=C0(i+21,t+15)+Re_Zeta(t,alpha,i,A_GB,B_GB);
            C0(i+21,t+18)=C0(i+21,t+18)-Re_Zeta(t,alpha,i,A_II,B_II);
            C0(i+27,t+21)=C0(i+27,t+21)+Re_Zeta(t,alpha,i,A_II,B_II);
            C0(i+27,t+24)=C0(i+27,t+24)-Re_Zeta(t,alpha,i,A_SL,B_SL);
        end 
    end
end
C=2*pi*C;
C0=2*pi*C0;

C0_Cinv=C0/C;
C0_Cinv_C0=C0/C*C0;

C_rho=zeros(30*N_app,30*N_app);
C0_Cinv_C0_rho=zeros(30*N_app,30*N_app);
C0_Cinv_rho=zeros(30*N_app,30*N_app);
weights=diag([w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w;w]);
for i=1:30
    for t=1:30
        C_rho((i-1)*N_app+1:i*N_app,(t-1)*N_app+1:t*N_app)=C(i,t)*diag(ones(1,N_app));
        C0_Cinv_C0_rho((i-1)*N_app+1:i*N_app,(t-1)*N_app+1:t*N_app)=C0_Cinv_C0(i,t)*diag(ones(1,N_app));
        C0_Cinv_rho((i-1)*N_app+1:i*N_app,(t-1)*N_app+1:t*N_app)=C0_Cinv(i,t)*diag(ones(1,N_app));    
    end
end

zeros_30Napp_30Napp=zeros(30*N_app,30*N_app);
CH_H_rho=zeros_30Napp_30Napp;
CI_I_rho=zeros_30Napp_30Napp;
CH_H0_H_rho=zeros_30Napp_30Napp;
CI_H0_I_rho=zeros_30Napp_30Napp;
for i=1:3
    for t=1:3
        for g=1:N_app
            for wH=1:N_app
                for alpha=1:3
                    CH_H_rho((i+2)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+2)*N_app+g,(t-1)*N_app+wH)-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,5),P_SL_Im(alpha)*h(1,5));
                    CH_H_rho((i+5)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+5)*N_app+g,(t-1)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CH_H_rho((i+8)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+8)*N_app+g,(t-1)*N_app+wH)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),-P_SU_Im(alpha)*h(1,1))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),-P_I_Im(alpha)*h(1,1));
                    CH_H_rho((i+11)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+11)*N_app+g,(t-1)*N_app+wH)-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CH_H_rho((i+14)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+14)*N_app+g,(t-1)*N_app+wH)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),-P_I_Im(alpha)*h(1,2))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),-P_GB_Im(alpha)*h(1,2));
                    CH_H_rho((i+17)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+17)*N_app+g,(t-1)*N_app+wH)-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CH_H_rho((i+20)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+20)*N_app+g,(t-1)*N_app+wH)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),-P_GB_Im(alpha)*h(1,3))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),-P_II_Im(alpha)*h(1,3));
                    CH_H_rho((i+23)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+23)*N_app+g,(t-1)*N_app+wH)-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CH_H_rho((i+26)*N_app+g,(t-1)*N_app+wH)=CH_H_rho((i+26)*N_app+g,(t-1)*N_app+wH)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),-P_II_Im(alpha)*h(1,4))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),-P_SL_Im(alpha)*h(1,4));
                    CH_H_rho((i-1)*N_app+g,(t+2)*N_app+wH)=CH_H_rho((i-1)*N_app+g,(t+2)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1));
                    
                    CH_H_rho((i+2)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+2)*N_app+g,(t+5)*N_app+wH)-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,5),P_SL_Im(alpha)*h(2,5));
                    CH_H_rho((i+11)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+11)*N_app+g,(t+5)*N_app+wH)-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CH_H_rho((i+14)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+14)*N_app+g,(t+5)*N_app+wH)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),-P_I_Im(alpha)*h(2,2))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),-P_GB_Im(alpha)*h(2,2));
                    CH_H_rho((i+17)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+17)*N_app+g,(t+5)*N_app+wH)-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CH_H_rho((i+20)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+20)*N_app+g,(t+5)*N_app+wH)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),-P_GB_Im(alpha)*h(2,3))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),-P_II_Im(alpha)*h(2,3));
                    CH_H_rho((i+23)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+23)*N_app+g,(t+5)*N_app+wH)-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CH_H_rho((i+26)*N_app+g,(t+5)*N_app+wH)=CH_H_rho((i+26)*N_app+g,(t+5)*N_app+wH)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),-P_II_Im(alpha)*h(2,4))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),-P_SL_Im(alpha)*h(2,4));
                    CH_H_rho((i-1)*N_app+g,(t+8)*N_app+wH)=CH_H_rho((i-1)*N_app+g,(t+8)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,2),P_SU_Im(alpha)*h(1,2));
                    CH_H_rho((i+5)*N_app+g,(t+8)*N_app+wH)=CH_H_rho((i+5)*N_app+g,(t+8)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    CH_H_rho((i+8)*N_app+g,(t+8)*N_app+wH)=CH_H_rho((i+8)*N_app+g,(t+8)*N_app+wH)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    
                    CH_H_rho((i+2)*N_app+g,(t+11)*N_app+wH)=CH_H_rho((i+2)*N_app+g,(t+11)*N_app+wH)-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,5),P_SL_Im(alpha)*h(3,5));
                    CH_H_rho((i+17)*N_app+g,(t+11)*N_app+wH)=CH_H_rho((i+17)*N_app+g,(t+11)*N_app+wH)-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CH_H_rho((i+20)*N_app+g,(t+11)*N_app+wH)=CH_H_rho((i+20)*N_app+g,(t+11)*N_app+wH)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),-P_GB_Im(alpha)*h(3,3))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),-P_II_Im(alpha)*h(3,3));
                    CH_H_rho((i+23)*N_app+g,(t+11)*N_app+wH)=CH_H_rho((i+23)*N_app+g,(t+11)*N_app+wH)-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CH_H_rho((i+26)*N_app+g,(t+11)*N_app+wH)=CH_H_rho((i+26)*N_app+g,(t+11)*N_app+wH)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),-P_II_Im(alpha)*h(3,4))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),-P_SL_Im(alpha)*h(3,4));
                    CH_H_rho((i-1)*N_app+g,(t+14)*N_app+wH)=CH_H_rho((i-1)*N_app+g,(t+14)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,3),P_SU_Im(alpha)*h(1,3));
                    CH_H_rho((i+5)*N_app+g,(t+14)*N_app+wH)=CH_H_rho((i+5)*N_app+g,(t+14)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CH_H_rho((i+8)*N_app+g,(t+14)*N_app+wH)=CH_H_rho((i+8)*N_app+g,(t+14)*N_app+wH)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CH_H_rho((i+11)*N_app+g,(t+14)*N_app+wH)=CH_H_rho((i+11)*N_app+g,(t+14)*N_app+wH)+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    CH_H_rho((i+14)*N_app+g,(t+14)*N_app+wH)=CH_H_rho((i+14)*N_app+g,(t+14)*N_app+wH)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    
                    CH_H_rho((i+2)*N_app+g,(t+17)*N_app+wH)=CH_H_rho((i+2)*N_app+g,(t+17)*N_app+wH)-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,5),P_SL_Im(alpha)*h(4,5));
                    CH_H_rho((i+23)*N_app+g,(t+17)*N_app+wH)=CH_H_rho((i+23)*N_app+g,(t+17)*N_app+wH)-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CH_H_rho((i+26)*N_app+g,(t+17)*N_app+wH)=CH_H_rho((i+26)*N_app+g,(t+17)*N_app+wH)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),-P_II_Im(alpha)*h(4,4))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),-P_SL_Im(alpha)*h(4,4));
                    CH_H_rho((i-1)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i-1)*N_app+g,(t+20)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,4),P_SU_Im(alpha)*h(1,4));
                    CH_H_rho((i+5)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+5)*N_app+g,(t+20)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CH_H_rho((i+8)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+8)*N_app+g,(t+20)*N_app+wH)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CH_H_rho((i+11)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+11)*N_app+g,(t+20)*N_app+wH)+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CH_H_rho((i+14)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+14)*N_app+g,(t+20)*N_app+wH)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CH_H_rho((i+17)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+17)*N_app+g,(t+20)*N_app+wH)+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    CH_H_rho((i+20)*N_app+g,(t+20)*N_app+wH)=CH_H_rho((i+20)*N_app+g,(t+20)*N_app+wH)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    
                    CH_H_rho((i+2)*N_app+g,(t+23)*N_app+wH)=CH_H_rho((i+2)*N_app+g,(t+23)*N_app+wH)-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CH_H_rho((i-1)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i-1)*N_app+g,(t+26)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,5),P_SU_Im(alpha)*h(1,5));
                    CH_H_rho((i+5)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+5)*N_app+g,(t+26)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CH_H_rho((i+8)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+8)*N_app+g,(t+26)*N_app+wH)+Re_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))-Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CH_H_rho((i+11)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+11)*N_app+g,(t+26)*N_app+wH)+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CH_H_rho((i+14)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+14)*N_app+g,(t+26)*N_app+wH)+Re_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))-Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CH_H_rho((i+17)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+17)*N_app+g,(t+26)*N_app+wH)+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CH_H_rho((i+20)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+20)*N_app+g,(t+26)*N_app+wH)+Re_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))-Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CH_H_rho((i+23)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+23)*N_app+g,(t+26)*N_app+wH)+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CH_H_rho((i+26)*N_app+g,(t+26)*N_app+wH)=CH_H_rho((i+26)*N_app+g,(t+26)*N_app+wH)+Re_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))-Re_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    

                    CI_I_rho((i+2)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+2)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,5),P_SL_Im(alpha)*h(1,5));
                    CI_I_rho((i+5)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+5)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CI_I_rho((i+8)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+8)*N_app+g,(t-1)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),-P_SU_Im(alpha)*h(1,1))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),-P_I_Im(alpha)*h(1,1));
                    CI_I_rho((i+11)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+11)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CI_I_rho((i+14)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+14)*N_app+g,(t-1)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),-P_I_Im(alpha)*h(1,2))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),-P_GB_Im(alpha)*h(1,2));
                    CI_I_rho((i+17)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+17)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CI_I_rho((i+20)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+20)*N_app+g,(t-1)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),-P_GB_Im(alpha)*h(1,3))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),-P_II_Im(alpha)*h(1,3));
                    CI_I_rho((i+23)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+23)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CI_I_rho((i+26)*N_app+g,(t-1)*N_app+wH)=CI_I_rho((i+26)*N_app+g,(t-1)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),-P_II_Im(alpha)*h(1,4))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),-P_SL_Im(alpha)*h(1,4));
                    CI_I_rho((i-1)*N_app+g,(t+2)*N_app+wH)=CI_I_rho((i-1)*N_app+g,(t+2)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1));
                    
                    CI_I_rho((i+2)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+2)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,5),P_SL_Im(alpha)*h(2,5));
                    CI_I_rho((i+11)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+11)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CI_I_rho((i+14)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+14)*N_app+g,(t+5)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),-P_I_Im(alpha)*h(2,2))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),-P_GB_Im(alpha)*h(2,2));
                    CI_I_rho((i+17)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+17)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CI_I_rho((i+20)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+20)*N_app+g,(t+5)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),-P_GB_Im(alpha)*h(2,3))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),-P_II_Im(alpha)*h(2,3));
                    CI_I_rho((i+23)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+23)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CI_I_rho((i+26)*N_app+g,(t+5)*N_app+wH)=CI_I_rho((i+26)*N_app+g,(t+5)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),-P_II_Im(alpha)*h(2,4))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),-P_SL_Im(alpha)*h(2,4));
                    CI_I_rho((i-1)*N_app+g,(t+8)*N_app+wH)=CI_I_rho((i-1)*N_app+g,(t+8)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,2),P_SU_Im(alpha)*h(1,2));
                    CI_I_rho((i+5)*N_app+g,(t+8)*N_app+wH)=CI_I_rho((i+5)*N_app+g,(t+8)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    CI_I_rho((i+8)*N_app+g,(t+8)*N_app+wH)=CI_I_rho((i+8)*N_app+g,(t+8)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    
                    CI_I_rho((i+2)*N_app+g,(t+11)*N_app+wH)=CI_I_rho((i+2)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,5),P_SL_Im(alpha)*h(3,5));
                    CI_I_rho((i+17)*N_app+g,(t+11)*N_app+wH)=CI_I_rho((i+17)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CI_I_rho((i+20)*N_app+g,(t+11)*N_app+wH)=CI_I_rho((i+20)*N_app+g,(t+11)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),-P_GB_Im(alpha)*h(3,3))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),-P_II_Im(alpha)*h(3,3));
                    CI_I_rho((i+23)*N_app+g,(t+11)*N_app+wH)=CI_I_rho((i+23)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CI_I_rho((i+26)*N_app+g,(t+11)*N_app+wH)=CI_I_rho((i+26)*N_app+g,(t+11)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),-P_II_Im(alpha)*h(3,4))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),-P_SL_Im(alpha)*h(3,4));
                    CI_I_rho((i-1)*N_app+g,(t+14)*N_app+wH)=CI_I_rho((i-1)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,3),P_SU_Im(alpha)*h(1,3));
                    CI_I_rho((i+5)*N_app+g,(t+14)*N_app+wH)=CI_I_rho((i+5)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CI_I_rho((i+8)*N_app+g,(t+14)*N_app+wH)=CI_I_rho((i+8)*N_app+g,(t+14)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CI_I_rho((i+11)*N_app+g,(t+14)*N_app+wH)=CI_I_rho((i+11)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    CI_I_rho((i+14)*N_app+g,(t+14)*N_app+wH)=CI_I_rho((i+14)*N_app+g,(t+14)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    
                    CI_I_rho((i+2)*N_app+g,(t+17)*N_app+wH)=CI_I_rho((i+2)*N_app+g,(t+17)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,5),P_SL_Im(alpha)*h(4,5));
                    CI_I_rho((i+23)*N_app+g,(t+17)*N_app+wH)=CI_I_rho((i+23)*N_app+g,(t+17)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CI_I_rho((i+26)*N_app+g,(t+17)*N_app+wH)=CI_I_rho((i+26)*N_app+g,(t+17)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),-P_II_Im(alpha)*h(4,4))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),-P_SL_Im(alpha)*h(4,4));
                    CI_I_rho((i-1)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i-1)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,4),P_SU_Im(alpha)*h(1,4));
                    CI_I_rho((i+5)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+5)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CI_I_rho((i+8)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+8)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CI_I_rho((i+11)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+11)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CI_I_rho((i+14)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+14)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CI_I_rho((i+17)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+17)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    CI_I_rho((i+20)*N_app+g,(t+20)*N_app+wH)=CI_I_rho((i+20)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    
                    CI_I_rho((i+2)*N_app+g,(t+23)*N_app+wH)=CI_I_rho((i+2)*N_app+g,(t+23)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CI_I_rho((i-1)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i-1)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,5),P_SU_Im(alpha)*h(1,5));
                    CI_I_rho((i+5)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+5)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CI_I_rho((i+8)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+8)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))-Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CI_I_rho((i+11)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+11)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CI_I_rho((i+14)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+14)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))-Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CI_I_rho((i+17)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+17)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CI_I_rho((i+20)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+20)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))-Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CI_I_rho((i+23)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+23)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CI_I_rho((i+26)*N_app+g,(t+26)*N_app+wH)=CI_I_rho((i+26)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))-Im_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    

                    CH_H0_H_rho((i+2)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+2)*N_app+g,(t-1)*N_app+wH)+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,5),P_SL_Im(alpha)*h(1,5));
                    CH_H0_H_rho((i+5)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+5)*N_app+g,(t-1)*N_app+wH)+Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CH_H0_H_rho((i+8)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+8)*N_app+g,(t-1)*N_app+wH)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CH_H0_H_rho((i+11)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+11)*N_app+g,(t-1)*N_app+wH)+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CH_H0_H_rho((i+14)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+14)*N_app+g,(t-1)*N_app+wH)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CH_H0_H_rho((i+17)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+17)*N_app+g,(t-1)*N_app+wH)+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CH_H0_H_rho((i+20)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+20)*N_app+g,(t-1)*N_app+wH)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CH_H0_H_rho((i+23)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+23)*N_app+g,(t-1)*N_app+wH)+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CH_H0_H_rho((i+26)*N_app+g,(t-1)*N_app+wH)=CH_H0_H_rho((i+26)*N_app+g,(t-1)*N_app+wH)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CH_H0_H_rho((i-1)*N_app+g,(t+2)*N_app+wH)=CH_H0_H_rho((i-1)*N_app+g,(t+2)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1));
                    
                    CH_H0_H_rho((i+2)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+2)*N_app+g,(t+5)*N_app+wH)+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,5),P_SL_Im(alpha)*h(2,5));
                    CH_H0_H_rho((i+11)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+11)*N_app+g,(t+5)*N_app+wH)+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CH_H0_H_rho((i+14)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+14)*N_app+g,(t+5)*N_app+wH)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CH_H0_H_rho((i+17)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+17)*N_app+g,(t+5)*N_app+wH)+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CH_H0_H_rho((i+20)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+20)*N_app+g,(t+5)*N_app+wH)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CH_H0_H_rho((i+23)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+23)*N_app+g,(t+5)*N_app+wH)+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CH_H0_H_rho((i+26)*N_app+g,(t+5)*N_app+wH)=CH_H0_H_rho((i+26)*N_app+g,(t+5)*N_app+wH)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CH_H0_H_rho((i-1)*N_app+g,(t+8)*N_app+wH)=CH_H0_H_rho((i-1)*N_app+g,(t+8)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,2),P_SU_Im(alpha)*h(1,2));
                    CH_H0_H_rho((i+5)*N_app+g,(t+8)*N_app+wH)=CH_H0_H_rho((i+5)*N_app+g,(t+8)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    CH_H0_H_rho((i+8)*N_app+g,(t+8)*N_app+wH)=CH_H0_H_rho((i+8)*N_app+g,(t+8)*N_app+wH)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    
                    CH_H0_H_rho((i+2)*N_app+g,(t+11)*N_app+wH)=CH_H0_H_rho((i+2)*N_app+g,(t+11)*N_app+wH)+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,5),P_SL_Im(alpha)*h(3,5));
                    CH_H0_H_rho((i+17)*N_app+g,(t+11)*N_app+wH)=CH_H0_H_rho((i+17)*N_app+g,(t+11)*N_app+wH)+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CH_H0_H_rho((i+20)*N_app+g,(t+11)*N_app+wH)=CH_H0_H_rho((i+20)*N_app+g,(t+11)*N_app+wH)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CH_H0_H_rho((i+23)*N_app+g,(t+11)*N_app+wH)=CH_H0_H_rho((i+23)*N_app+g,(t+11)*N_app+wH)+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CH_H0_H_rho((i+26)*N_app+g,(t+11)*N_app+wH)=CH_H0_H_rho((i+26)*N_app+g,(t+11)*N_app+wH)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CH_H0_H_rho((i-1)*N_app+g,(t+14)*N_app+wH)=CH_H0_H_rho((i-1)*N_app+g,(t+14)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,3),P_SU_Im(alpha)*h(1,3));
                    CH_H0_H_rho((i+5)*N_app+g,(t+14)*N_app+wH)=CH_H0_H_rho((i+5)*N_app+g,(t+14)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CH_H0_H_rho((i+8)*N_app+g,(t+14)*N_app+wH)=CH_H0_H_rho((i+8)*N_app+g,(t+14)*N_app+wH)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CH_H0_H_rho((i+11)*N_app+g,(t+14)*N_app+wH)=CH_H0_H_rho((i+11)*N_app+g,(t+14)*N_app+wH)-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    CH_H0_H_rho((i+14)*N_app+g,(t+14)*N_app+wH)=CH_H0_H_rho((i+14)*N_app+g,(t+14)*N_app+wH)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    
                    CH_H0_H_rho((i+2)*N_app+g,(t+17)*N_app+wH)=CH_H0_H_rho((i+2)*N_app+g,(t+17)*N_app+wH)+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,5),P_SL_Im(alpha)*h(4,5));
                    CH_H0_H_rho((i+23)*N_app+g,(t+17)*N_app+wH)=CH_H0_H_rho((i+23)*N_app+g,(t+17)*N_app+wH)+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))-Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CH_H0_H_rho((i+26)*N_app+g,(t+17)*N_app+wH)=CH_H0_H_rho((i+26)*N_app+g,(t+17)*N_app+wH)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CH_H0_H_rho((i-1)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i-1)*N_app+g,(t+20)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,4),P_SU_Im(alpha)*h(1,4));
                    CH_H0_H_rho((i+5)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+5)*N_app+g,(t+20)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CH_H0_H_rho((i+8)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+8)*N_app+g,(t+20)*N_app+wH)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CH_H0_H_rho((i+11)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+11)*N_app+g,(t+20)*N_app+wH)-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CH_H0_H_rho((i+14)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+14)*N_app+g,(t+20)*N_app+wH)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CH_H0_H_rho((i+17)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+17)*N_app+g,(t+20)*N_app+wH)-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    CH_H0_H_rho((i+20)*N_app+g,(t+20)*N_app+wH)=CH_H0_H_rho((i+20)*N_app+g,(t+20)*N_app+wH)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    
                    CH_H0_H_rho((i+2)*N_app+g,(t+23)*N_app+wH)=CH_H0_H_rho((i+2)*N_app+g,(t+23)*N_app+wH)+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CH_H0_H_rho((i-1)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i-1)*N_app+g,(t+26)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,5),P_SU_Im(alpha)*h(1,5));
                    CH_H0_H_rho((i+5)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+5)*N_app+g,(t+26)*N_app+wH)-Im_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))+Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CH_H0_H_rho((i+8)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+8)*N_app+g,(t+26)*N_app+wH)-Re_Zeta(t,alpha,i,A_SU,B_SU)*Q_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))+Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CH_H0_H_rho((i+11)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+11)*N_app+g,(t+26)*N_app+wH)-Im_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))+Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CH_H0_H_rho((i+14)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+14)*N_app+g,(t+26)*N_app+wH)-Re_Zeta(t,alpha,i,A_I,B_I)*Q_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))+Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CH_H0_H_rho((i+17)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+17)*N_app+g,(t+26)*N_app+wH)-Im_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))+Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CH_H0_H_rho((i+20)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+20)*N_app+g,(t+26)*N_app+wH)-Re_Zeta(t,alpha,i,A_GB,B_GB)*Q_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))+Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CH_H0_H_rho((i+23)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+23)*N_app+g,(t+26)*N_app+wH)-Im_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))+Im_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CH_H0_H_rho((i+26)*N_app+g,(t+26)*N_app+wH)=CH_H0_H_rho((i+26)*N_app+g,(t+26)*N_app+wH)-Re_Zeta(t,alpha,i,A_II,B_II)*Q_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))+Re_Zeta(t,alpha,i,A_SL,B_SL)*Q_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));

                    
                    CI_H0_I_rho((i+2)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+2)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,5),P_SL_Im(alpha)*h(1,5));
                    CI_H0_I_rho((i+5)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+5)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CI_H0_I_rho((i+8)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+8)*N_app+g,(t-1)*N_app+wH)-Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),-P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1))+Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,1),P_I_Im(alpha)*h(1,1));
                    CI_H0_I_rho((i+11)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+11)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CI_H0_I_rho((i+14)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+14)*N_app+g,(t-1)*N_app+wH)-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(1,2),P_I_Im(alpha)*h(1,2))+Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,2),P_GB_Im(alpha)*h(1,2));
                    CI_H0_I_rho((i+17)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+17)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CI_H0_I_rho((i+20)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+20)*N_app+g,(t-1)*N_app+wH)-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(1,3),P_GB_Im(alpha)*h(1,3))+Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,3),P_II_Im(alpha)*h(1,3));
                    CI_H0_I_rho((i+23)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+23)*N_app+g,(t-1)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CI_H0_I_rho((i+26)*N_app+g,(t-1)*N_app+wH)=CI_H0_I_rho((i+26)*N_app+g,(t-1)*N_app+wH)-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(1,4),P_II_Im(alpha)*h(1,4))+Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(1,4),P_SL_Im(alpha)*h(1,4));
                    CI_H0_I_rho((i-1)*N_app+g,(t+2)*N_app+wH)=CI_H0_I_rho((i-1)*N_app+g,(t+2)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,1),P_SU_Im(alpha)*h(1,1));
                    
                    CI_H0_I_rho((i+2)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+2)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,5),P_SL_Im(alpha)*h(2,5));
                    CI_H0_I_rho((i+11)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+11)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CI_H0_I_rho((i+14)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+14)*N_app+g,(t+5)*N_app+wH)-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),-P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2))+Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,2),P_GB_Im(alpha)*h(2,2));
                    CI_H0_I_rho((i+17)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+17)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CI_H0_I_rho((i+20)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+20)*N_app+g,(t+5)*N_app+wH)-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(2,3),P_GB_Im(alpha)*h(2,3))+Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,3),P_II_Im(alpha)*h(2,3));
                    CI_H0_I_rho((i+23)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+23)*N_app+g,(t+5)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CI_H0_I_rho((i+26)*N_app+g,(t+5)*N_app+wH)=CI_H0_I_rho((i+26)*N_app+g,(t+5)*N_app+wH)-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(2,4),P_II_Im(alpha)*h(2,4))+Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(2,4),P_SL_Im(alpha)*h(2,4));
                    CI_H0_I_rho((i-1)*N_app+g,(t+8)*N_app+wH)=CI_H0_I_rho((i-1)*N_app+g,(t+8)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,2),P_SU_Im(alpha)*h(1,2));
                    CI_H0_I_rho((i+5)*N_app+g,(t+8)*N_app+wH)=CI_H0_I_rho((i+5)*N_app+g,(t+8)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    CI_H0_I_rho((i+8)*N_app+g,(t+8)*N_app+wH)=CI_H0_I_rho((i+8)*N_app+g,(t+8)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,2),P_SU_Im(alpha)*h(2,2))-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,2),P_I_Im(alpha)*h(2,2));
                    
                    CI_H0_I_rho((i+2)*N_app+g,(t+11)*N_app+wH)=CI_H0_I_rho((i+2)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,5),P_SL_Im(alpha)*h(3,5));
                    CI_H0_I_rho((i+17)*N_app+g,(t+11)*N_app+wH)=CI_H0_I_rho((i+17)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CI_H0_I_rho((i+20)*N_app+g,(t+11)*N_app+wH)=CI_H0_I_rho((i+20)*N_app+g,(t+11)*N_app+wH)-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),-P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3))+Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,3),P_II_Im(alpha)*h(3,3));
                    CI_H0_I_rho((i+23)*N_app+g,(t+11)*N_app+wH)=CI_H0_I_rho((i+23)*N_app+g,(t+11)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CI_H0_I_rho((i+26)*N_app+g,(t+11)*N_app+wH)=CI_H0_I_rho((i+26)*N_app+g,(t+11)*N_app+wH)-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(3,4),P_II_Im(alpha)*h(3,4))+Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(3,4),P_SL_Im(alpha)*h(3,4));
                    CI_H0_I_rho((i-1)*N_app+g,(t+14)*N_app+wH)=CI_H0_I_rho((i-1)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,3),P_SU_Im(alpha)*h(1,3));
                    CI_H0_I_rho((i+5)*N_app+g,(t+14)*N_app+wH)=CI_H0_I_rho((i+5)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CI_H0_I_rho((i+8)*N_app+g,(t+14)*N_app+wH)=CI_H0_I_rho((i+8)*N_app+g,(t+14)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,3),P_SU_Im(alpha)*h(2,3))-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,3),P_I_Im(alpha)*h(2,3));
                    CI_H0_I_rho((i+11)*N_app+g,(t+14)*N_app+wH)=CI_H0_I_rho((i+11)*N_app+g,(t+14)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    CI_H0_I_rho((i+14)*N_app+g,(t+14)*N_app+wH)=CI_H0_I_rho((i+14)*N_app+g,(t+14)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,3),P_I_Im(alpha)*h(3,3))-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,3),P_GB_Im(alpha)*h(3,3));
                    
                    CI_H0_I_rho((i+2)*N_app+g,(t+17)*N_app+wH)=CI_H0_I_rho((i+2)*N_app+g,(t+17)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,5),P_SL_Im(alpha)*h(4,5));
                    CI_H0_I_rho((i+23)*N_app+g,(t+17)*N_app+wH)=CI_H0_I_rho((i+23)*N_app+g,(t+17)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CI_H0_I_rho((i+26)*N_app+g,(t+17)*N_app+wH)=CI_H0_I_rho((i+26)*N_app+g,(t+17)*N_app+wH)-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),-P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4))+Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(4,4),P_SL_Im(alpha)*h(4,4));
                    CI_H0_I_rho((i-1)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i-1)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,4),P_SU_Im(alpha)*h(1,4));
                    CI_H0_I_rho((i+5)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+5)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CI_H0_I_rho((i+8)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+8)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,4),P_SU_Im(alpha)*h(2,4))-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,4),P_I_Im(alpha)*h(2,4));
                    CI_H0_I_rho((i+11)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+11)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CI_H0_I_rho((i+14)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+14)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,4),P_I_Im(alpha)*h(3,4))-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,4),P_GB_Im(alpha)*h(3,4));
                    CI_H0_I_rho((i+17)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+17)*N_app+g,(t+20)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    CI_H0_I_rho((i+20)*N_app+g,(t+20)*N_app+wH)=CI_H0_I_rho((i+20)*N_app+g,(t+20)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,4),P_GB_Im(alpha)*h(4,4))-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,4),P_II_Im(alpha)*h(4,4));
                    
                    CI_H0_I_rho((i+2)*N_app+g,(t+23)*N_app+wH)=CI_H0_I_rho((i+2)*N_app+g,(t+23)*N_app+wH)-Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),-P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5)); 
                    CI_H0_I_rho((i-1)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i-1)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(1,5),P_SU_Im(alpha)*h(1,5));
                    CI_H0_I_rho((i+5)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+5)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_SU,P_SU,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))+Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CI_H0_I_rho((i+8)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+8)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_SU,B_SU)*P_R(x_w(g),x_w(wH),P_SU_Re(alpha)*h(2,5),P_SU_Im(alpha)*h(2,5))-Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(2,5),P_I_Im(alpha)*h(2,5));
                    CI_H0_I_rho((i+11)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+11)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_I,P_I,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))+Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CI_H0_I_rho((i+14)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+14)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_I,B_I)*P_R(x_w(g),x_w(wH),P_I_Re(alpha)*h(3,5),P_I_Im(alpha)*h(3,5))-Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(3,5),P_GB_Im(alpha)*h(3,5));
                    CI_H0_I_rho((i+17)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+17)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_GB,P_GB,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))+Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CI_H0_I_rho((i+20)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+20)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_GB,B_GB)*P_R(x_w(g),x_w(wH),P_GB_Re(alpha)*h(4,5),P_GB_Im(alpha)*h(4,5))-Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(4,5),P_II_Im(alpha)*h(4,5));
                    CI_H0_I_rho((i+23)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+23)*N_app+g,(t+26)*N_app+wH)-Re_Xi(t,alpha,i,C_II,P_II,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))+Re_Xi(t,alpha,i,C_SL,P_SL,A_SL,B_SL)*P_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                    CI_H0_I_rho((i+26)*N_app+g,(t+26)*N_app+wH)=CI_H0_I_rho((i+26)*N_app+g,(t+26)*N_app+wH)+Im_Zeta(t,alpha,i,A_II,B_II)*P_R(x_w(g),x_w(wH),P_II_Re(alpha)*h(5,5),P_II_Im(alpha)*h(5,5))-Im_Zeta(t,alpha,i,A_SL,B_SL)*P_R(x_w(g),x_w(wH),P_SL_Re(alpha)*h(5,5),P_SL_Im(alpha)*h(5,5));
                end 
            end 
        end 
    end
end
CH_H_rho=2*CH_H_rho;
CI_I_rho=2*CI_I_rho;
CH_H0_H_rho=2*CH_H0_H_rho;
CI_H0_I_rho=2*CI_H0_I_rho;

end 