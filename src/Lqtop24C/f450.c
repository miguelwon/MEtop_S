/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F450_out;
static void C450(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[20]*V[20];
S[1]=V[19]*V[19];
S[2]=V[11]*V[11];
S[3]=V[9]*V[9];
S[4]=V[8]*V[8]*V[8]*V[8];
C[65]=+S[4]*(S[3]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(4*(
 S[0]-S[1])))+S[2]*(V[19]*(6*V[19]-4*V[20])+6*S[0])));
C[64]=+S[4]*(V[11]*(V[11]*(V[19]*(12*V[19]-8*V[20])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[63]=+S[4]*(V[19]*(20*V[19]-40*V[20])+20*S[0]);
S[5]=V[11]*V[11]*V[11];
C[62]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[19]*(2*V[20]-V[19])-S[0])+V[11]*(
 S[1]-S[0]))+S[2]*(V[19]*(V[19]-2*V[20])+S[0]))+S[5]*(S[0]-S[1])));
C[61]=+S[4]*(V[9]*(V[9]*(V[19]*(2*V[20]-V[19])-S[0])+V[11]*(6*(S[0]-S[1])))+
 S[2]*(V[19]*(7*V[19]-6*V[20])+7*S[0]));
C[60]=+S[4]*(S[3]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(4*(
 S[0]-S[1])))+S[2]*(V[19]*(4*V[20]+6*V[19])+6*S[0])));
C[59]=+S[4]*(V[11]*(V[11]*(V[19]*(8*V[20]+12*V[19])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[58]=+S[4]*(V[19]*(S[3]*(18*V[20]-9*V[19])+S[2]*(6*V[20]+9*V[19]))+S[0]*(9*
 (S[2]-S[3])));
C[57]=+S[4]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[2]*(V[19]*(4*V[20]+6*V[19])+6*S[0]));
S[6]=V[8]*V[8];
C[56]=+S[6]*(S[3]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(
 S[0]-S[1])))+S[2]*(V[19]*(24*V[19]-16*V[20])+24*S[0])));
C[55]=+S[6]*(S[3]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(
 S[0]-S[1])))+S[2]*(V[19]*(16*V[20]+24*V[19])+24*S[0])));
C[54]=+S[3]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[19]*(24*V[19]-16*V[20])+24*S[0]));
C[53]=+S[3]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[19]*(16*V[20]+24*V[19])+24*S[0]));
C[52]=+S[6]*(V[11]*(V[11]*(V[19]*(48*V[19]-32*V[20])+48*S[0])+V[9]*(16*(
 S[1]-S[0]))));
C[51]=+S[6]*(V[11]*(V[11]*(V[19]*(32*V[20]+48*V[19])+48*S[0])+V[9]*(16*(
 S[1]-S[0]))));
C[50]=+V[11]*(V[11]*(V[19]*(48*V[19]-32*V[20])+48*S[0])+V[9]*(16*(S[1]-
 S[0])));
C[49]=+V[11]*(V[11]*(V[19]*(32*V[20]+48*V[19])+48*S[0])+V[9]*(16*(S[1]-
 S[0])));
C[48]=+S[6]*(V[19]*(80*V[19]-160*V[20])+80*S[0]);
C[47]=+S[6]*(V[19]*(S[3]*(72*V[20]-36*V[19])+S[2]*(24*V[20]+36*V[19]))+S[0]*
 (36*(S[2]-S[3])));
C[46]=+V[19]*(80*V[19]-160*V[20])+80*S[0];
C[45]=+V[19]*(S[3]*(72*V[20]-36*V[19])+S[2]*(24*V[20]+36*V[19]))+S[0]*(36*(
 S[2]-S[3]));
C[44]=+S[6]*(V[9]*(V[9]*(4*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+
 S[2]*(S[0]+S[1]))+V[19]*(V[20]*(8*(S[3]-S[2]))))+S[5]*(4*(S[0]-S[1]))));
C[43]=+V[9]*(V[9]*(4*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+S[2]*(
 S[0]+S[1]))+V[19]*(V[20]*(8*(S[3]-S[2]))))+S[5]*(4*(S[0]-S[1])));
C[42]=+S[6]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(24*(S[0]-
 S[1])))+S[2]*(V[19]*(28*V[19]-24*V[20])+28*S[0]));
C[41]=+S[6]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[19]*(16*V[20]+24*V[19])+24*S[0]));
C[40]=+V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(24*(S[0]-S[1])))+
 S[2]*(V[19]*(28*V[19]-24*V[20])+28*S[0]);
C[39]=+V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-S[1])))+
 S[2]*(V[19]*(16*V[20]+24*V[19])+24*S[0]);
C[38]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[19]*(4*V[19]-8*V[20])+4*S[0])+V[11]*(
 20*(S[1]-S[0])))+S[2]*(V[19]*(8*V[20]-20*V[19])-20*S[0]))+S[5]*(4*(S[0]-
 S[1]))));
C[37]=+S[6]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(24*(S[1]-
 S[0])))+S[2]*(V[19]*(44*V[19]-24*V[20])+44*S[0]));
C[36]=+S[6]*(V[19]*(72*V[19]-144*V[20])+72*S[0]);
C[35]=+S[6]*(V[9]*(8*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-16*V[20]*V[19]*
 V[9]));
C[34]=+S[6]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-
 S[1])))+S[2]*(V[19]*(24*V[19]-16*V[20])+24*S[0]));
C[33]=+S[6]*(V[19]*(8*V[19]-16*V[20])+8*S[0]);
C[32]=+S[6]*(V[19]*(64*V[19]-128*V[20])+64*S[0]);
C[31]=+V[9]*(V[9]*(V[9]*(V[9]*(V[19]*(4*V[19]-8*V[20])+4*S[0])+V[11]*(20*(
 S[1]-S[0])))+S[2]*(V[19]*(8*V[20]-20*V[19])-20*S[0]))+S[5]*(4*(S[0]-
 S[1])));
C[30]=+V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(24*(S[1]-S[0])))+
 S[2]*(V[19]*(44*V[19]-24*V[20])+44*S[0]);
C[29]=+V[19]*(72*V[19]-144*V[20])+72*S[0];
C[28]=+V[9]*(8*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-16*V[20]*V[19]*V[9]);
C[27]=+V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[0])+V[11]*(16*(S[0]-S[1])))+
 S[2]*(V[19]*(24*V[19]-16*V[20])+24*S[0]);
C[26]=+V[19]*(8*V[19]-16*V[20])+8*S[0];
C[25]=+V[19]*(64*V[19]-128*V[20])+64*S[0];
C[24]=+S[6]*(S[3]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(8*(
 S[0]-S[1])))+S[2]*(V[19]*(12*V[19]-8*V[20])+12*S[0])));
C[23]=+S[6]*(S[3]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(8*(
 S[0]-S[1])))+S[2]*(V[19]*(8*V[20]+12*V[19])+12*S[0])));
C[22]=+S[6]*(V[11]*(V[11]*(V[19]*(24*V[19]-16*V[20])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[21]=+S[6]*(V[11]*(V[11]*(V[19]*(16*V[20]+24*V[19])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[20]=+S[6]*(V[19]*(40*V[19]-80*V[20])+40*S[0]);
C[19]=+S[6]*(V[19]*(S[3]*(36*V[20]-18*V[19])+S[2]*(12*V[20]+18*V[19]))+S[0]*
 (18*(S[2]-S[3])));
C[18]=+S[6]*(V[9]*(V[9]*(2*(V[9]*(S[1]*(V[11]-V[9])+S[0]*(-V[11]-V[9]))+
 S[2]*(S[0]+S[1]))+V[19]*(V[20]*(4*(S[3]-S[2]))))+S[5]*(2*(S[0]-S[1]))));
C[17]=+S[6]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(12*(S[0]-
 S[1])))+S[2]*(V[19]*(14*V[19]-12*V[20])+14*S[0]));
C[16]=+S[6]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[2]*(V[19]*(8*V[20]+12*V[19])+12*S[0]));
C[15]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[19]*(V[19]-2*V[20])+S[0])+V[11]*(5*(
 S[1]-S[0])))+S[2]*(V[19]*(2*V[20]-5*V[19])-5*S[0]))+S[5]*(S[0]-S[1])));
C[14]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[19]*(2*V[19]-4*V[20])+2*S[0])+V[11]*(
 10*(S[1]-S[0])))+S[2]*(V[19]*(4*V[20]-10*V[19])-10*S[0]))+S[5]*(2*(S[0]-
 S[1]))));
C[13]=+S[4]*(V[9]*(V[9]*(V[19]*(2*V[20]-V[19])-S[0])+V[11]*(6*(S[1]-S[0])))+
 S[2]*(V[19]*(11*V[19]-6*V[20])+11*S[0]));
C[12]=+S[6]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(12*(S[1]-
 S[0])))+S[2]*(V[19]*(22*V[19]-12*V[20])+22*S[0]));
C[11]=+S[4]*(V[19]*(18*V[19]-36*V[20])+18*S[0]);
C[10]=+S[6]*(V[19]*(36*V[19]-72*V[20])+36*S[0]);
C[9]=+S[4]*(V[9]*(2*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-4*V[20]*V[19]*
 V[9]));
C[8]=+S[6]*(V[9]*(4*(S[1]*(V[9]-V[11])+S[0]*(V[11]+V[9]))-8*V[20]*V[19]*
 V[9]));
C[7]=+S[4]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[2]*(V[19]*(6*V[19]-4*V[20])+6*S[0]));
C[6]=+S[4]*(V[19]*(2*V[19]-4*V[20])+2*S[0]);
C[5]=+S[6]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[2]*(V[19]*(12*V[19]-8*V[20])+12*S[0]));
C[4]=+S[6]*(V[19]*(4*V[19]-8*V[20])+4*S[0]);
C[3]=+S[4]*(V[19]*(16*V[19]-32*V[20])+16*S[0]);
C[2]=+S[6]*(V[19]*(32*V[19]-64*V[20])+32*S[0]);
S[7]=V[14]*V[14];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[7]*S[8];
S[9]=V[33]*V[33];
S[10]=V[16]*V[16];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[9]*S[10]*S[11];
}
REAL F450_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 c      !  c                 G             
       -1---@==============>======!==>==============@---1-           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           c|P7         /==<======!==<==\          t|-PA             
            |           |  P3     !  P3 |           |                
            |           |         !     |           |                
         G  |  t     W+ |  e2     !  e2 |  W+    t  |  G             
       -2---@==<==@-3<--@==>======!==>==@--<4-@==<==@---2-           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[66];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C450(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[7]*(DP[6]*(DP[12]*(C[10]*(DP[1]+DP[3])+C[4]*(-DP[2]-DP[4])+C[2]*
 (-DP[8]-DP[9]))+DP[13]*(C[10]*(DP[1]+DP[3])+C[4]*(-DP[2]-DP[4])+C[2]*(-
 DP[8]-DP[9]))+S[2]*(C[10]*DP[10]-C[4]*DP[11]-C[2]*DP[14])+DP[5]*(C[4]*
 DP[11]-C[10]*DP[10]+C[2]*DP[14])+C[6]*DP[11]-C[11]*DP[10]+C[3]*DP[14])+
 DP[12]*(DP[1]*(C[17]+C[4]*DP[7])+DP[3]*(C[17]+C[4]*DP[7])+C[16]*(DP[2]+
 DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(DP[1]*(C[17]+C[4]*DP[7])+DP[3]*(C[17]+
 C[4]*DP[7])+C[16]*(DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[10]*(DP[7]*(C[4]*(
 S[2]-DP[5])-C[6])+C[17]*(S[2]-DP[5])-C[61])+DP[11]*(C[16]*(S[2]-DP[5])-
 C[57])+DP[14]*(C[5]*(DP[5]-S[2])+C[7]))+DP[6]*(DP[6]*(C[10]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[11]*DP[11])+
 C[19]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+
 C[58]*DP[11]);
tmp[1]=+S[2]*(DP[12]*(DP[0]*(S[2]*(DP[9]*(C[26]*(DP[0]-DP[7])+C[30]+C[29]*
 DP[6])+DP[3]*(-C[50]-C[46]*DP[6]-C[26]*DP[7])+DP[4]*(-C[49]-C[26]*DP[6]))+
 DP[6]*(C[48]*DP[1]+C[33]*DP[2]+C[20]*DP[3]+C[4]*DP[4]-C[36]*DP[8]-C[10]*
 DP[9])+DP[7]*(C[33]*(DP[1]+DP[8])+C[4]*(DP[3]+DP[9]))+DP[0]*(-C[33]*DP[8]-
 C[4]*DP[9])+C[52]*DP[1]+C[51]*DP[2]+C[22]*DP[3]+C[21]*DP[4]-C[37]*DP[8]-
 C[12]*DP[9])+DP[7]*(DP[6]*(S[2]*(C[29]*DP[3]-C[26]*DP[4]-C[25]*DP[9])+
 C[33]*DP[2]-C[36]*DP[1]-C[10]*DP[3]+C[4]*DP[4]+C[32]*DP[8]+C[2]*DP[9])+
 S[2]*(DP[3]*(C[40]+C[26]*DP[7])+C[39]*DP[4]-C[27]*DP[9])+DP[1]*(-C[42]-
 C[33]*DP[7])+DP[3]*(-C[17]-C[4]*DP[7])+C[34]*DP[8]-C[41]*DP[2]-C[16]*DP[4]+
 C[5]*DP[9])+DP[6]*(DP[4]*(S[2]*(-C[45]-C[29]*DP[6])+C[19]+C[10]*DP[6])+
 DP[2]*(C[47]+C[36]*DP[6])))+DP[13]*(DP[0]*(DP[8]*(C[4]*(DP[7]-DP[0])-C[12]-
 C[10]*DP[6])+DP[1]*(C[22]+C[20]*DP[6]+C[4]*DP[7])+DP[2]*(C[21]+C[4]*
 DP[6]))+DP[7]*(DP[1]*(-C[17]-C[10]*DP[6]-C[4]*DP[7])+DP[2]*(C[4]*DP[6]-
 C[16])+DP[8]*(C[5]+C[2]*DP[6]))+DP[2]*(DP[6]*(C[19]+C[10]*DP[6]))));
tmp[2]=+DP[0]*(DP[5]*(C[8]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*
 (-DP[1]-DP[3]-DP[8]-DP[9])+S[2]*(-DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+
 DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5])))+
 DP[12]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[14]*(-DP[8]-DP[9]))+
 DP[13]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[14]*(-DP[8]-DP[9]))+
 DP[14]*(C[14]*(DP[5]-S[2])+C[9]*(DP[7]-DP[0])+C[15])+DP[10]*(C[24]*(DP[5]-
 S[2])+C[65]+C[9]*DP[7])+DP[11]*(C[23]*(DP[5]-S[2])+C[60]))+S[2]*(DP[12]*(
 S[2]*(DP[9]*(C[28]*(DP[0]-DP[7])-C[31])+DP[3]*(-C[54]-C[28]*DP[7])-C[53]*
 DP[4])+DP[7]*(C[35]*(DP[1]+DP[8])+C[8]*(DP[3]+DP[9]))+DP[0]*(-C[35]*DP[8]-
 C[8]*DP[9])+C[56]*DP[1]+C[55]*DP[2]+C[24]*DP[3]+C[23]*DP[4]+C[38]*DP[8]+
 C[14]*DP[9])+DP[13]*(DP[8]*(C[8]*(DP[7]-DP[0])+C[14])+DP[1]*(C[24]+C[8]*
 DP[7])+C[23]*DP[2])))+DP[7]*(DP[5]*(DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))-C[9]*DP[10])+C[18]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))-C[62]*DP[10])+
 S[2]*(DP[12]*(DP[3]*(S[2]*(C[43]+C[28]*DP[7])-C[18]-C[8]*DP[7])+DP[1]*(-
 C[44]-C[35]*DP[7]))+DP[1]*(DP[13]*(-C[18]-C[8]*DP[7]))));
R=+DP[6]*(DP[5]*(DP[0]*(C[4]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+
 DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+S[2]*(-DP[10]-DP[14])+DP[5]*(DP[10]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-
 S[2])))+DP[6]*(C[20]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 (DP[5]-S[2]))+C[10]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[2]-DP[5]))+C[63]*DP[10]+C[6]*DP[11]-C[11]*DP[14])+DP[12]*(C[22]*(-DP[1]-
 DP[3])+C[21]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+DP[13]*(C[22]*(-DP[1]-
 DP[3])+C[21]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+DP[14]*(C[12]*(S[2]-
 DP[5])+C[6]*(DP[7]-DP[0])-C[13])+DP[10]*(C[22]*(DP[5]-S[2])+C[64]+C[6]*
 DP[7])+DP[11]*(C[21]*(DP[5]-S[2])+C[59]))+tmp[0])+tmp[1])+tmp[2];
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[6];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*81)/(64);
 }
 return R;
}
