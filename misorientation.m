function [misorientation_angle,misorientation_axis,misaxis_int]=misorientation(T_I,T_II)

T_sym=cell(1,24);
T_sym{1}=[1,0,0;0,1,0;0,0,1];
T_sym{2}=[0,0,-1;0,-1,0;-1,0,0];
T_sym{3}=[0,0,-1;0,1,0;1,0,0];
T_sym{4}=[-1,0,0;0,1,0;0,0,-1];
T_sym{5}=[0,0,1;0,1,0;-1,0,0];
T_sym{6}=[1,0,0;0,0,-1;0,1,0];
T_sym{7}=[1,0,0;0,-1,0;0,0,-1];
T_sym{8}=[1,0,0;0,0,1;0,-1,0];
T_sym{9}=[0,-1,0;1,0,0;0,0,1];
T_sym{10}=[-1,0,0;0,-1,0;0,0,1];
T_sym{11}=[0,1,0;-1,0,0;0,0,1];
T_sym{12}=[0,0,1;1,0,0;0,1,0];
T_sym{13}=[0,1,0;0,0,1;1,0,0];
T_sym{14}=[0,0,-1;-1,0,0;0,1,0];
T_sym{15}=[0,-1,0;0,0,-1;1,0,0];
T_sym{16}=[0,1,0;0,0,-1;-1,0,0];
T_sym{17}=[0,0,-1;1,0,0;0,-1,0];
T_sym{18}=[0,0,1;-1,0,0;0,-1,0];
T_sym{19}=[0,0,-1;0,-1,0;1,0,0];
T_sym{20}=[0,1,0;1,0,0;0,0,-1];
T_sym{21}=[-1,0,0;0,0,1;0,1,0];
T_sym{22}=[0,1,0;0,0,1;-1,0,0];
T_sym{23}=[0,-1,0;-1,0,0;0,0,-1];
T_sym{24}=[-1,0,0;0,0,-1;0,-1,0];

disorientation_sym=zeros(24,1);

for ss=1:24
    g_gA=T_sym{ss}/T_II*T_I;
    disorientation_sym(ss)=acos((g_gA(1,1)+g_gA(2,2)+g_gA(3,3)-1)/2);
end

[disorientation,index]=min(real(disorientation_sym));
if abs(disorientation)<1e-14
    misorientation_angle=0;
else 
    misorientation_angle=disorientation/pi*180;
end 
g_gA=T_sym{index}/T_II*T_I;

for ii=1:3
    for jj=1:3
        if abs(g_gA(ii,jj))<1e-14
            g_gA(ii,jj)=0;
        else
            if abs(g_gA(ii,jj)-1)<1e-14
                g_gA(ii,jj)=1;
            end
        end 
    end 
end

misorientation_axis(1,1)=(g_gA(2,3)-g_gA(3,2))/(2*sin(disorientation));
misorientation_axis(2,1)=(g_gA(3,1)-g_gA(1,3))/(2*sin(disorientation));
misorientation_axis(3,1)=(g_gA(1,2)-g_gA(2,1))/(2*sin(disorientation));

if abs(misorientation_axis(1,1))<1e-14
   misorientation_axis(1,1)=0;
end
if abs(misorientation_axis(2,1))<1e-14
   misorientation_axis(2,1)=0;
end
if abs(misorientation_axis(3,1))<1e-14
   misorientation_axis(3,1)=0;
end
        
[misaxis_N,misaxis_D]=rat(misorientation_axis);
misaxis_T=min_GBS(misaxis_D);
misaxis_int=misaxis_N./misaxis_D*misaxis_T;
end 