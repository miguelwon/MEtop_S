/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F402_out;
static void C402(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[20]*V[20];
S[3]=V[8]*V[8]*V[8]*V[8];
C[88]=+S[3]*(S[1]*(V[19]*(S[1]*(4*V[20]-2*V[19])+S[0]*(4*V[20]+2*V[19]))+
 S[2]*(2*(S[0]-S[1]))));
S[4]=V[19]*V[19];
C[87]=+S[3]*(V[9]*(V[9]*(V[19]*(12*V[20]-6*V[19])-6*S[2])+V[11]*(18*(S[2]-
 S[4]))));
C[86]=+S[3]*(V[9]*(V[9]*(V[19]*(12*V[20]-6*V[19])-6*S[2])+V[11]*(2*(S[2]-
 S[4])))+S[0]*(V[19]*(8*V[20]+4*V[19])+4*S[2]));
C[85]=+S[3]*(V[9]*(V[9]*(V[19]*(10*V[20]-5*V[19])-5*S[2])+V[11]*(12*(S[2]-
 S[4])))+S[0]*(V[19]*(10*V[20]+5*V[19])+5*S[2]));
C[84]=+S[3]*(V[19]*(10*V[19]-20*V[20])+10*S[2]);
C[83]=+S[3]*(V[19]*(S[1]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+S[2]*(4*(
 S[0]-S[1])));
C[82]=+S[3]*(V[19]*(18*V[19]-36*V[20])+18*S[2]);
C[81]=+S[3]*(V[9]*(V[9]*(V[19]*(20*V[20]-10*V[19])-10*S[2])+V[11]*(18*(S[2]-
 S[4]))));
C[80]=+S[3]*(V[9]*(V[9]*(V[19]*(26*V[20]-13*V[19])-13*S[2])+V[11]*(2*(S[2]-
 S[4])))+S[0]*(V[19]*(14*V[20]+7*V[19])+7*S[2]));
C[79]=+S[3]*(V[19]*(2*V[19]-4*V[20])+2*S[2]);
C[78]=+S[3]*(V[9]*(12*(S[4]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+24*V[20]*V[19]*
 V[9])+S[0]*(V[19]*(16*V[20]+8*V[19])+8*S[2]));
C[77]=+S[3]*(V[19]*(S[1]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+S[2]*(
 8*(S[0]-S[1])));
C[76]=+S[3]*(V[19]*(4*V[19]-8*V[20])+4*S[2]);
S[5]=V[8]*V[8];
C[75]=+S[5]*(S[1]*(V[19]*(S[1]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+
 S[2]*(8*(S[0]-S[1]))));
C[74]=+S[5]*(V[9]*(V[9]*(V[19]*(48*V[20]-24*V[19])-24*S[2])+V[11]*(72*(S[2]-
 S[4]))));
C[73]=+S[5]*(V[9]*(V[9]*(V[19]*(80*V[20]-40*V[19])-40*S[2])+V[11]*(72*(S[2]-
 S[4]))));
C[72]=+S[1]*(V[19]*(S[1]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+S[2]*(
 8*(S[0]-S[1])));
C[71]=+V[9]*(V[9]*(V[19]*(48*V[20]-24*V[19])-24*S[2])+V[11]*(72*(S[2]-
 S[4])));
C[70]=+V[9]*(V[9]*(V[19]*(80*V[20]-40*V[19])-40*S[2])+V[11]*(72*(S[2]-
 S[4])));
C[69]=+S[5]*(V[9]*(V[9]*(V[19]*(48*V[20]-24*V[19])-24*S[2])+V[11]*(8*(S[2]-
 S[4])))+S[0]*(V[19]*(32*V[20]+16*V[19])+16*S[2]));
C[68]=+S[5]*(V[9]*(V[9]*(V[19]*(104*V[20]-52*V[19])-52*S[2])+V[11]*(8*(S[2]-
 S[4])))+S[0]*(V[19]*(56*V[20]+28*V[19])+28*S[2]));
C[67]=+V[9]*(V[9]*(V[19]*(48*V[20]-24*V[19])-24*S[2])+V[11]*(8*(S[2]-
 S[4])))+S[0]*(V[19]*(32*V[20]+16*V[19])+16*S[2]);
C[66]=+V[9]*(V[9]*(V[19]*(104*V[20]-52*V[19])-52*S[2])+V[11]*(8*(S[2]-
 S[4])))+S[0]*(V[19]*(56*V[20]+28*V[19])+28*S[2]);
C[65]=+V[19]*(8*V[19]-16*V[20])+8*S[2];
C[64]=+S[5]*(V[9]*(V[9]*(V[19]*(40*V[20]-20*V[19])-20*S[2])+V[11]*(48*(S[2]-
 S[4])))+S[0]*(V[19]*(40*V[20]+20*V[19])+20*S[2]));
C[63]=+S[5]*(V[19]*(40*V[19]-80*V[20])+40*S[2]);
C[62]=+S[5]*(V[9]*(48*(S[4]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+96*V[20]*V[19]*
 V[9])+S[0]*(V[19]*(64*V[20]+32*V[19])+32*S[2]));
C[61]=+V[9]*(V[9]*(V[19]*(40*V[20]-20*V[19])-20*S[2])+V[11]*(48*(S[2]-
 S[4])))+S[0]*(V[19]*(40*V[20]+20*V[19])+20*S[2]);
C[60]=+V[19]*(40*V[19]-80*V[20])+40*S[2];
C[59]=+V[9]*(48*(S[4]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+96*V[20]*V[19]*V[9])+
 S[0]*(V[19]*(64*V[20]+32*V[19])+32*S[2]);
C[58]=+S[5]*(V[19]*(72*V[19]-144*V[20])+72*S[2]);
C[57]=+S[5]*(V[19]*(S[1]*(64*V[20]-32*V[19])+S[0]*(64*V[20]+32*V[19]))+S[2]*
 (32*(S[0]-S[1])));
C[56]=+V[19]*(S[1]*(32*V[20]-16*V[19])+S[0]*(32*V[20]+16*V[19]))+S[2]*(16*(
 S[0]-S[1]));
C[55]=+V[19]*(72*V[19]-144*V[20])+72*S[2];
C[54]=+V[19]*(S[1]*(64*V[20]-32*V[19])+S[0]*(64*V[20]+32*V[19]))+S[2]*(32*(
 S[0]-S[1]));
C[53]=+V[19]*(16*V[19]-32*V[20])+16*S[2];
C[52]=+S[5]*(V[9]*(V[9]*(V[19]*(28*V[19]-56*V[20])+28*S[2])+V[11]*(72*(S[4]-
 S[2])))+S[0]*(V[19]*(24*V[20]+12*V[19])+12*S[2]));
C[51]=+S[5]*(V[19]*(24*V[19]-48*V[20])+24*S[2]);
C[50]=+S[5]*(V[9]*(V[9]*(V[19]*(20*V[19]-40*V[20])+20*S[2])+V[11]*(8*(S[4]-
 S[2])))+S[0]*(V[19]*(8*V[20]+4*V[19])+4*S[2]));
C[49]=+S[5]*(V[9]*(V[9]*(V[19]*(8*V[19]-16*V[20])+8*S[2])+V[11]*(48*(S[4]-
 S[2])))+S[0]*(V[19]*(16*V[20]+8*V[19])+8*S[2]));
C[48]=+S[5]*(V[19]*(120*V[19]-240*V[20])+120*S[2]);
C[47]=+S[5]*(V[19]*(192*V[19]-384*V[20])+192*S[2]);
C[46]=+S[5]*(V[19]*(160*V[19]-320*V[20])+160*S[2]);
C[45]=+S[5]*(V[19]*(64*V[19]-128*V[20])+64*S[2]);
C[44]=+V[9]*(V[9]*(V[19]*(28*V[19]-56*V[20])+28*S[2])+V[11]*(72*(S[4]-
 S[2])))+S[0]*(V[19]*(24*V[20]+12*V[19])+12*S[2]);
C[43]=+V[19]*(24*V[19]-48*V[20])+24*S[2];
C[42]=+V[9]*(V[9]*(V[19]*(20*V[19]-40*V[20])+20*S[2])+V[11]*(8*(S[4]-
 S[2])))+S[0]*(V[19]*(8*V[20]+4*V[19])+4*S[2]);
C[41]=+V[9]*(V[9]*(V[19]*(8*V[19]-16*V[20])+8*S[2])+V[11]*(48*(S[4]-S[2])))+
 S[0]*(V[19]*(16*V[20]+8*V[19])+8*S[2]);
C[40]=+V[19]*(120*V[19]-240*V[20])+120*S[2];
C[39]=+V[19]*(192*V[19]-384*V[20])+192*S[2];
C[38]=+V[19]*(32*V[19]-64*V[20])+32*S[2];
C[37]=+V[19]*(160*V[19]-320*V[20])+160*S[2];
C[36]=+V[19]*(96*V[19]-192*V[20])+96*S[2];
C[35]=+V[19]*(64*V[19]-128*V[20])+64*S[2];
C[34]=+S[5]*(S[1]*(V[19]*(S[1]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+
 S[2]*(4*(S[0]-S[1]))));
C[33]=+S[5]*(V[9]*(V[9]*(V[19]*(24*V[20]-12*V[19])-12*S[2])+V[11]*(36*(S[2]-
 S[4]))));
C[32]=+S[5]*(V[9]*(V[9]*(V[19]*(40*V[20]-20*V[19])-20*S[2])+V[11]*(36*(S[2]-
 S[4]))));
C[31]=+S[5]*(V[9]*(V[9]*(V[19]*(24*V[20]-12*V[19])-12*S[2])+V[11]*(4*(S[2]-
 S[4])))+S[0]*(V[19]*(16*V[20]+8*V[19])+8*S[2]));
C[30]=+S[5]*(V[9]*(V[9]*(V[19]*(52*V[20]-26*V[19])-26*S[2])+V[11]*(4*(S[2]-
 S[4])))+S[0]*(V[19]*(28*V[20]+14*V[19])+14*S[2]));
C[29]=+S[5]*(V[19]*(4*V[19]-8*V[20])+4*S[2]);
C[28]=+S[5]*(V[9]*(V[9]*(V[19]*(20*V[20]-10*V[19])-10*S[2])+V[11]*(24*(S[2]-
 S[4])))+S[0]*(V[19]*(20*V[20]+10*V[19])+10*S[2]));
C[27]=+S[5]*(V[19]*(20*V[19]-40*V[20])+20*S[2]);
C[26]=+S[5]*(V[9]*(24*(S[4]*(-V[11]-V[9])+S[2]*(V[11]-V[9]))+48*V[20]*V[19]*
 V[9])+S[0]*(V[19]*(32*V[20]+16*V[19])+16*S[2]));
C[25]=+S[5]*(V[19]*(S[1]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+S[2]*(
 8*(S[0]-S[1])));
C[24]=+S[5]*(V[19]*(36*V[19]-72*V[20])+36*S[2]);
C[23]=+S[5]*(V[19]*(S[1]*(32*V[20]-16*V[19])+S[0]*(32*V[20]+16*V[19]))+S[2]*
 (16*(S[0]-S[1])));
C[22]=+S[5]*(V[19]*(8*V[19]-16*V[20])+8*S[2]);
C[21]=+S[3]*(V[9]*(V[9]*(V[19]*(7*V[19]-14*V[20])+7*S[2])+V[11]*(18*(S[4]-
 S[2])))+S[0]*(V[19]*(6*V[20]+3*V[19])+3*S[2]));
C[20]=+S[3]*(V[19]*(6*V[19]-12*V[20])+6*S[2]);
C[19]=+S[5]*(V[9]*(V[9]*(V[19]*(14*V[19]-28*V[20])+14*S[2])+V[11]*(36*(S[4]-
 S[2])))+S[0]*(V[19]*(12*V[20]+6*V[19])+6*S[2]));
C[18]=+S[5]*(V[19]*(12*V[19]-24*V[20])+12*S[2]);
C[17]=+S[3]*(V[9]*(V[9]*(V[19]*(5*V[19]-10*V[20])+5*S[2])+V[11]*(2*(S[4]-
 S[2])))+S[0]*(V[19]*(2*V[20]+V[19])+S[2]));
C[16]=+S[5]*(V[9]*(V[9]*(V[19]*(10*V[19]-20*V[20])+10*S[2])+V[11]*(4*(S[4]-
 S[2])))+S[0]*(V[19]*(4*V[20]+2*V[19])+2*S[2]));
C[15]=+S[3]*(V[9]*(V[9]*(V[19]*(2*V[19]-4*V[20])+2*S[2])+V[11]*(12*(S[4]-
 S[2])))+S[0]*(V[19]*(4*V[20]+2*V[19])+2*S[2]));
C[14]=+S[3]*(V[19]*(30*V[19]-60*V[20])+30*S[2]);
C[13]=+S[5]*(V[9]*(V[9]*(V[19]*(4*V[19]-8*V[20])+4*S[2])+V[11]*(24*(S[4]-
 S[2])))+S[0]*(V[19]*(8*V[20]+4*V[19])+4*S[2]));
C[12]=+S[5]*(V[19]*(60*V[19]-120*V[20])+60*S[2]);
C[11]=+S[3]*(V[19]*(48*V[19]-96*V[20])+48*S[2]);
C[10]=+S[5]*(V[19]*(96*V[19]-192*V[20])+96*S[2]);
C[9]=+S[3]*(V[19]*(8*V[19]-16*V[20])+8*S[2]);
C[8]=+S[5]*(V[19]*(16*V[19]-32*V[20])+16*S[2]);
C[7]=+S[3]*(V[19]*(40*V[19]-80*V[20])+40*S[2]);
C[6]=+S[5]*(V[19]*(80*V[19]-160*V[20])+80*S[2]);
C[5]=+S[3]*(V[19]*(24*V[19]-48*V[20])+24*S[2]);
C[4]=+S[5]*(V[19]*(48*V[19]-96*V[20])+48*S[2]);
C[3]=+S[3]*(V[19]*(16*V[19]-32*V[20])+16*S[2]);
C[2]=+S[5]*(V[19]*(32*V[19]-64*V[20])+32*S[2]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[6]*S[7];
S[8]=V[33]*V[33];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[8]*S[9]*S[10];
}
REAL F402_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  C                 G          
                                    /!==<==============@---1-        
                                    |!  P5             |  P1         
                                    |!                 |             
      G                       n2    |!  n2             |             
    -1---\                 /==>=====+!==>==\          c|-PA          
      P1 |                 |  P3    |!  P3 |           |             
         |                 |        |!     |           |             
      G  |  G     t     W+ |  E2    |!  E2 |  W+    t  |  G          
    -2---@-3---@==>==@-4>--@==<=====+!==<==@-->5-@==>==@---2-        
      P2    P7 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        b     |!  b        |                   
               |     \========>=====+!==>========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              C     |!                               
               \==============<=====/!                               
                              P5     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[89];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C402(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[7]*(DP[0]*(DP[12]*(C[27]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[12]*
 (-DP[8]-DP[9]))+DP[13]*(C[27]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[12]*(-
 DP[8]-DP[9]))+S[2]*(C[27]*DP[10]+C[22]*DP[11]-C[12]*DP[14])+DP[5]*(C[12]*
 DP[14]-C[27]*DP[10]-C[22]*DP[11])+C[14]*DP[14]-C[84]*DP[10]-C[76]*DP[11])+
 DP[7]*(DP[12]*(C[24]*(-DP[1]-DP[3])+C[22]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+DP[13]*(C[24]*(-DP[1]-DP[3])+C[22]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+S[2]*(C[6]*DP[14]-C[24]*DP[10]-C[22]*DP[11])+DP[5]*(C[24]*DP[10]+
 C[22]*DP[11]-C[6]*DP[14])+C[82]*DP[10]+C[76]*DP[11]-C[7]*DP[14])+DP[12]*(
 C[28]*(DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[13]*(DP[8]+DP[9]))+DP[13]*(C[28]*
 (DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[13]*(DP[8]+DP[9]))+S[2]*(C[28]*DP[10]+
 C[26]*DP[11]+C[13]*DP[14])+DP[5]*(-C[28]*DP[10]-C[26]*DP[11]-C[13]*DP[14])-
 C[85]*DP[10]-C[78]*DP[11]-C[15]*DP[14])+DP[0]*(DP[12]*(DP[0]*(C[18]*(DP[8]+
 DP[9]))+C[33]*(-DP[1]-DP[3])+C[32]*(-DP[2]-DP[4])+C[19]*(-DP[8]-DP[9]))+
 DP[13]*(DP[0]*(C[18]*(DP[8]+DP[9]))+C[33]*(-DP[1]-DP[3])+C[32]*(-DP[2]-
 DP[4])+C[19]*(-DP[8]-DP[9]))+DP[14]*(DP[0]*(C[18]*(S[2]-DP[5])-C[20])+
 C[19]*(DP[5]-S[2])+C[21])+DP[10]*(C[33]*(DP[5]-S[2])+C[87])+DP[11]*(C[32]*(
 DP[5]-S[2])+C[81]))+C[34]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))-C[88]*DP[10];
tmp[1]=+DP[12]*(DP[6]*(S[2]*(DP[3]*(C[67]+C[38]*DP[0]+C[65]*DP[6]-C[35]*
 DP[7])+DP[4]*(C[66]+C[65]*DP[0]+C[38]*DP[6]+C[53]*DP[7])+DP[9]*(C[42]-
 C[36]*DP[0]+C[38]*DP[6]+C[39]*DP[7]))+DP[0]*(C[10]*DP[8]-C[2]*DP[1]-C[22]*
 DP[2]-C[8]*DP[3]-C[29]*DP[4]+C[4]*DP[9])+DP[6]*(C[2]*(-DP[2]-DP[8])+C[8]*(-
 DP[4]-DP[9])-C[22]*DP[1]-C[29]*DP[3])+DP[7]*(C[45]*DP[1]-C[8]*DP[2]+C[2]*
 DP[3]-C[22]*DP[4]-C[47]*DP[8]-C[10]*DP[9])-C[69]*DP[1]-C[68]*DP[2]-C[31]*
 DP[3]-C[30]*DP[4]-C[50]*DP[8]-C[16]*DP[9])+DP[7]*(S[2]*(DP[0]*(C[60]*DP[3]+
 C[53]*DP[4]-C[40]*DP[9])+DP[7]*(C[37]*DP[9]-C[55]*DP[3]-C[53]*DP[4])+C[61]*
 DP[3]+C[59]*DP[4]+C[41]*DP[9])+DP[0]*(C[48]*DP[8]-C[63]*DP[1]-C[8]*DP[2]-
 C[27]*DP[3]-C[22]*DP[4]+C[12]*DP[9])+DP[7]*(C[58]*DP[1]+C[8]*DP[2]+C[24]*
 DP[3]+C[22]*DP[4]-C[46]*DP[8]-C[6]*DP[9])-C[64]*DP[1]-C[62]*DP[2]-C[28]*
 DP[3]-C[26]*DP[4]-C[49]*DP[8]-C[13]*DP[9])+DP[0]*(S[2]*(DP[9]*(C[43]*DP[0]-
 C[44])-C[71]*DP[3]-C[70]*DP[4])+DP[0]*(-C[51]*DP[8]-C[18]*DP[9])+C[74]*
 DP[1]+C[73]*DP[2]+C[33]*DP[3]+C[32]*DP[4]+C[52]*DP[8]+C[19]*DP[9])+DP[3]*(
 C[72]*S[2]-C[34])-C[75]*DP[1]);
tmp[2]=+DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[8]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+
 C[4]*(-DP[8]-DP[9]))+DP[6]*(C[8]*(DP[2]+DP[4]+DP[8]+DP[9])+C[29]*(DP[1]+
 DP[3]))+DP[7]*(C[2]*(-DP[1]-DP[3])+C[22]*(DP[2]+DP[4])+C[10]*(DP[8]+
 DP[9]))+C[31]*(DP[1]+DP[3])+C[30]*(DP[2]+DP[4])+C[16]*(DP[8]+DP[9]))+
 DP[13]*(DP[0]*(C[8]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+
 DP[6]*(C[8]*(DP[2]+DP[4]+DP[8]+DP[9])+C[29]*(DP[1]+DP[3]))+DP[7]*(C[2]*(-
 DP[1]-DP[3])+C[22]*(DP[2]+DP[4])+C[10]*(DP[8]+DP[9]))+C[31]*(DP[1]+DP[3])+
 C[30]*(DP[2]+DP[4])+C[16]*(DP[8]+DP[9]))+S[2]*(DP[10]*(C[31]+C[8]*DP[0]+
 C[29]*DP[6]-C[2]*DP[7])+DP[11]*(C[30]+C[29]*DP[0]+C[8]*DP[6]+C[22]*DP[7])+
 DP[14]*(C[16]-C[4]*DP[0]+C[8]*DP[6]+C[10]*DP[7]))+DP[5]*(DP[10]*(C[2]*
 DP[7]-C[31]-C[8]*DP[0]-C[29]*DP[6])+DP[11]*(-C[30]-C[29]*DP[0]-C[8]*DP[6]-
 C[22]*DP[7])+DP[14]*(C[4]*DP[0]-C[16]-C[8]*DP[6]-C[10]*DP[7]))+DP[10]*(
 C[3]*DP[7]-C[86]-C[9]*DP[0]-C[79]*DP[6])+DP[11]*(-C[80]-C[79]*DP[0]-C[9]*
 DP[6]-C[76]*DP[7])+DP[14]*(C[5]*DP[0]-C[17]-C[9]*DP[6]-C[11]*DP[7]))+
 tmp[0]);
tmp[3]=+DP[5]*(DP[6]*(C[8]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*
 (-DP[2]-DP[4]-DP[8]-DP[9])+S[2]*(-DP[11]-DP[14])+DP[5]*(DP[11]+DP[14]))+
 DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+
 S[2]*(DP[10]-DP[11])+DP[5]*(DP[11]-DP[10])))+DP[7]*(C[4]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[9]*(DP[11]-DP[10])+
 C[5]*DP[14])+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2]))+DP[6]*(C[9]*(DP[11]+DP[14]))+C[83]*DP[10]+C[77]*DP[11])+DP[7]*
 (DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-
 S[2]))+C[3]*DP[14]-C[9]*DP[10])+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[83]*DP[10]+C[77]*DP[11]));
R=+DP[0]*(S[2]*(DP[13]*(DP[6]*(DP[1]*(C[2]*DP[7]-C[31]-C[8]*DP[0]-C[29]*
 DP[6])+DP[2]*(-C[30]-C[29]*DP[0]-C[8]*DP[6]-C[22]*DP[7])+DP[8]*(C[4]*DP[0]-
 C[16]-C[8]*DP[6]-C[10]*DP[7]))+DP[7]*(DP[0]*(C[12]*DP[8]-C[27]*DP[1]-C[22]*
 DP[2])+DP[7]*(C[24]*DP[1]+C[22]*DP[2]-C[6]*DP[8])-C[28]*DP[1]-C[26]*DP[2]-
 C[13]*DP[8])+DP[0]*(DP[8]*(C[19]-C[18]*DP[0])+C[33]*DP[1]+C[32]*DP[2])-
 C[34]*DP[1])+tmp[1])+tmp[2])+DP[7]*(S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(
 C[38]*(DP[3]-DP[4])-C[36]*DP[9])+C[2]*(DP[2]-DP[1])+C[8]*(DP[4]-DP[3])+
 C[10]*DP[8]+C[4]*DP[9])+DP[6]*(S[2]*(C[38]*(-DP[4]-DP[9]))+C[2]*(DP[2]+
 DP[8])+C[8]*(DP[4]+DP[9]))+S[2]*(-C[56]*DP[3]-C[54]*DP[4])+C[23]*(DP[1]+
 DP[4])+C[57]*DP[2]+C[25]*DP[3])+DP[7]*(DP[7]*(S[2]*(C[38]*DP[3]-C[35]*
 DP[9])+C[2]*(DP[9]-DP[1])+C[45]*DP[8]-C[8]*DP[3])+S[2]*(-C[56]*DP[3]-C[54]*
 DP[4])+C[23]*(DP[1]+DP[4])+C[57]*DP[2]+C[25]*DP[3]))+DP[13]*(DP[6]*(C[8]*(
 DP[2]*(DP[6]+DP[7])+DP[8]*DP[6]-DP[7]*DP[1])+C[25]*DP[1]+C[23]*DP[2]+C[4]*
 DP[8]*DP[7])+DP[7]*(DP[1]*(C[25]-C[8]*DP[7])+C[23]*DP[2]+C[2]*DP[8]*
 DP[7])))+tmp[3]);
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*9)/(8);
 }
 return R;
}
