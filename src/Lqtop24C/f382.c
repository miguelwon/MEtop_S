/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F382_out;
static void C382(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[18]*V[18];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[66]=+S[2]*(S[1]*(V[17]*(10*V[18]+5*V[17])+5*S[0]));
C[65]=+S[2]*(V[17]*(10*V[17]-20*V[18])+10*S[0]);
C[64]=+S[2]*(S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[63]=+S[2]*(V[17]*(18*V[17]-36*V[18])+18*S[0]);
C[62]=+S[2]*(S[1]*(V[17]*(14*V[18]+7*V[17])+7*S[0]));
C[61]=+S[2]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[60]=+S[2]*(S[1]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[59]=+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[3]=V[8]*V[8];
C[58]=+S[3]*(S[1]*(V[17]*(56*V[18]+28*V[17])+28*S[0]));
C[57]=+S[1]*(V[17]*(56*V[18]+28*V[17])+28*S[0]);
C[56]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[55]=+S[3]*(S[1]*(V[17]*(40*V[18]+20*V[17])+20*S[0]));
C[54]=+S[3]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[53]=+S[1]*(V[17]*(40*V[18]+20*V[17])+20*S[0]);
C[52]=+V[17]*(40*V[17]-80*V[18])+40*S[0];
C[51]=+S[3]*(V[17]*(72*V[17]-144*V[18])+72*S[0]);
C[50]=+S[3]*(S[1]*(V[17]*(64*V[18]+32*V[17])+32*S[0]));
C[49]=+S[1]*(V[17]*(32*V[18]+16*V[17])+16*S[0]);
C[48]=+V[17]*(72*V[17]-144*V[18])+72*S[0];
C[47]=+S[1]*(V[17]*(64*V[18]+32*V[17])+32*S[0]);
C[46]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[45]=+S[3]*(S[1]*(V[17]*(24*V[18]+12*V[17])+12*S[0]));
C[44]=+S[3]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[43]=+S[3]*(V[17]*(120*V[17]-240*V[18])+120*S[0]);
C[42]=+S[3]*(V[17]*(192*V[17]-384*V[18])+192*S[0]);
C[41]=+S[3]*(V[17]*(160*V[17]-320*V[18])+160*S[0]);
C[40]=+S[3]*(V[17]*(64*V[17]-128*V[18])+64*S[0]);
C[39]=+S[1]*(V[17]*(24*V[18]+12*V[17])+12*S[0]);
C[38]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[37]=+S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[36]=+S[1]*(V[17]*(16*V[18]+8*V[17])+8*S[0]);
C[35]=+V[17]*(120*V[17]-240*V[18])+120*S[0];
C[34]=+V[17]*(192*V[17]-384*V[18])+192*S[0];
C[33]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[32]=+V[17]*(160*V[17]-320*V[18])+160*S[0];
C[31]=+V[17]*(96*V[17]-192*V[18])+96*S[0];
C[30]=+V[17]*(64*V[17]-128*V[18])+64*S[0];
C[29]=+S[3]*(S[1]*(V[17]*(28*V[18]+14*V[17])+14*S[0]));
C[28]=+S[3]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[27]=+S[3]*(S[1]*(V[17]*(20*V[18]+10*V[17])+10*S[0]));
C[26]=+S[3]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[25]=+S[3]*(S[1]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[24]=+S[3]*(V[17]*(36*V[17]-72*V[18])+36*S[0]);
C[23]=+S[3]*(S[1]*(V[17]*(32*V[18]+16*V[17])+16*S[0]));
C[22]=+S[3]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[21]=+S[2]*(S[1]*(V[17]*(6*V[18]+3*V[17])+3*S[0]));
C[20]=+S[2]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
C[19]=+S[3]*(S[1]*(V[17]*(12*V[18]+6*V[17])+6*S[0]));
C[18]=+S[3]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[17]=+S[2]*(S[1]*(V[17]*(2*V[18]+V[17])+S[0]));
C[16]=+S[3]*(S[1]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[15]=+S[2]*(S[1]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[14]=+S[2]*(V[17]*(30*V[17]-60*V[18])+30*S[0]);
C[13]=+S[3]*(S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[12]=+S[3]*(V[17]*(60*V[17]-120*V[18])+60*S[0]);
C[11]=+S[2]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[10]=+S[3]*(V[17]*(96*V[17]-192*V[18])+96*S[0]);
C[9]=+S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[8]=+S[3]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[7]=+S[2]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[6]=+S[3]*(V[17]*(80*V[17]-160*V[18])+80*S[0]);
C[5]=+S[2]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[4]=+S[3]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[3]=+S[2]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[2]=+S[3]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[4]*S[5];
S[6]=V[33]*V[33];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[6]*S[7]*S[8];
}
REAL F382_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  U                 G          
                                    /!==<==============@---1-        
                                    |!  P5             |  P1         
                                    |!                 |             
      G                       n2    |!  n2             |             
    -1---\                 /==>=====+!==>==\          u|-PA          
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
               |              U     |!                               
               \==============<=====/!                               
                              P5     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[67];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C382(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[7]*(DP[0]*(DP[12]*(C[26]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[12]*
 (-DP[8]-DP[9]))+DP[13]*(C[26]*(DP[1]+DP[3])+C[22]*(DP[2]+DP[4])+C[12]*(-
 DP[8]-DP[9]))+S[2]*(C[26]*DP[10]+C[22]*DP[11]-C[12]*DP[14])+DP[5]*(C[12]*
 DP[14]-C[26]*DP[10]-C[22]*DP[11])+C[14]*DP[14]-C[65]*DP[10]-C[59]*DP[11])+
 DP[7]*(DP[12]*(C[24]*(-DP[1]-DP[3])+C[22]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+DP[13]*(C[24]*(-DP[1]-DP[3])+C[22]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+S[2]*(C[6]*DP[14]-C[24]*DP[10]-C[22]*DP[11])+DP[5]*(C[24]*DP[10]+
 C[22]*DP[11]-C[6]*DP[14])+C[63]*DP[10]+C[59]*DP[11]-C[7]*DP[14])+DP[12]*(
 C[27]*(DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[13]*(DP[8]+DP[9]))+DP[13]*(C[27]*
 (DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[13]*(DP[8]+DP[9]))+S[2]*(C[27]*DP[10]+
 C[23]*DP[11]+C[13]*DP[14])+DP[5]*(-C[27]*DP[10]-C[23]*DP[11]-C[13]*DP[14])-
 C[66]*DP[10]-C[60]*DP[11]-C[15]*DP[14])+DP[0]*(DP[0]*(C[18]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))-C[20]*DP[14])+C[19]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[21]*
 DP[14]);
tmp[1]=+S[2]*(DP[12]*(DP[6]*(S[2]*(DP[3]*(C[49]+C[33]*DP[0]+C[56]*DP[6]-
 C[30]*DP[7])+DP[4]*(C[57]+C[56]*DP[0]+C[33]*DP[6]+C[46]*DP[7])+DP[9]*(
 C[37]-C[31]*DP[0]+C[33]*DP[6]+C[34]*DP[7]))+DP[0]*(C[10]*DP[8]-C[2]*DP[1]-
 C[22]*DP[2]-C[8]*DP[3]-C[28]*DP[4]+C[4]*DP[9])+DP[6]*(C[2]*(-DP[2]-DP[8])+
 C[8]*(-DP[4]-DP[9])-C[22]*DP[1]-C[28]*DP[3])+DP[7]*(C[40]*DP[1]-C[8]*DP[2]+
 C[2]*DP[3]-C[22]*DP[4]-C[42]*DP[8]-C[10]*DP[9])-C[23]*DP[1]-C[58]*DP[2]-
 C[25]*DP[3]-C[29]*DP[4]-C[13]*DP[8]-C[16]*DP[9])+DP[7]*(S[2]*(DP[0]*(C[52]*
 DP[3]+C[46]*DP[4]-C[35]*DP[9])+DP[7]*(C[32]*DP[9]-C[48]*DP[3]-C[46]*DP[4])+
 C[53]*DP[3]+C[47]*DP[4]+C[36]*DP[9])+DP[0]*(C[43]*DP[8]-C[54]*DP[1]-C[8]*
 DP[2]-C[26]*DP[3]-C[22]*DP[4]+C[12]*DP[9])+DP[7]*(C[51]*DP[1]+C[8]*DP[2]+
 C[24]*DP[3]+C[22]*DP[4]-C[41]*DP[8]-C[6]*DP[9])-C[55]*DP[1]-C[50]*DP[2]-
 C[27]*DP[3]-C[23]*DP[4]-C[25]*DP[8]-C[13]*DP[9])+DP[0]*(DP[9]*(S[2]*(C[38]*
 DP[0]-C[39])+C[19]-C[18]*DP[0])+DP[8]*(C[45]-C[44]*DP[0])))+DP[13]*(DP[6]*(
 DP[1]*(C[2]*DP[7]-C[25]-C[8]*DP[0]-C[28]*DP[6])+DP[2]*(-C[29]-C[28]*DP[0]-
 C[8]*DP[6]-C[22]*DP[7])+DP[8]*(C[4]*DP[0]-C[16]-C[8]*DP[6]-C[10]*DP[7]))+
 DP[7]*(DP[0]*(C[12]*DP[8]-C[26]*DP[1]-C[22]*DP[2])+DP[7]*(C[24]*DP[1]+
 C[22]*DP[2]-C[6]*DP[8])-C[27]*DP[1]-C[23]*DP[2]-C[13]*DP[8])+DP[0]*(DP[8]*(
 C[19]-C[18]*DP[0]))));
tmp[2]=+DP[5]*(DP[6]*(C[8]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*
 (-DP[2]-DP[4]-DP[8]-DP[9])+S[2]*(-DP[11]-DP[14])+DP[5]*(DP[11]+DP[14]))+
 DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+
 S[2]*(DP[10]-DP[11])+DP[5]*(DP[11]-DP[10])))+DP[7]*(C[4]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[9]*(DP[11]-DP[10])+
 C[5]*DP[14])+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2]))+DP[6]*(C[9]*(DP[11]+DP[14]))+C[64]*DP[10]+C[60]*DP[11])+DP[7]*
 (DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-
 S[2]))+C[3]*DP[14]-C[9]*DP[10])+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[64]*DP[10]+C[60]*DP[11]));
tmp[3]=+DP[0]*(DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[8]*(DP[1]+DP[3])+C[28]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[6]*(C[8]*(DP[2]+DP[4]+DP[8]+DP[9])+C[28]*(
 DP[1]+DP[3]))+DP[7]*(C[2]*(-DP[1]-DP[3])+C[22]*(DP[2]+DP[4])+C[10]*(DP[8]+
 DP[9]))+C[25]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+C[16]*(DP[8]+DP[9]))+
 DP[13]*(DP[0]*(C[8]*(DP[1]+DP[3])+C[28]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+
 DP[6]*(C[8]*(DP[2]+DP[4]+DP[8]+DP[9])+C[28]*(DP[1]+DP[3]))+DP[7]*(C[2]*(-
 DP[1]-DP[3])+C[22]*(DP[2]+DP[4])+C[10]*(DP[8]+DP[9]))+C[25]*(DP[1]+DP[3])+
 C[29]*(DP[2]+DP[4])+C[16]*(DP[8]+DP[9]))+S[2]*(DP[10]*(C[25]+C[8]*DP[0]+
 C[28]*DP[6]-C[2]*DP[7])+DP[11]*(C[29]+C[28]*DP[0]+C[8]*DP[6]+C[22]*DP[7])+
 DP[14]*(C[16]-C[4]*DP[0]+C[8]*DP[6]+C[10]*DP[7]))+DP[5]*(DP[10]*(C[2]*
 DP[7]-C[25]-C[8]*DP[0]-C[28]*DP[6])+DP[11]*(-C[29]-C[28]*DP[0]-C[8]*DP[6]-
 C[22]*DP[7])+DP[14]*(C[4]*DP[0]-C[16]-C[8]*DP[6]-C[10]*DP[7]))+DP[10]*(
 C[3]*DP[7]-C[64]-C[9]*DP[0]-C[61]*DP[6])+DP[11]*(-C[62]-C[61]*DP[0]-C[9]*
 DP[6]-C[59]*DP[7])+DP[14]*(C[5]*DP[0]-C[17]-C[9]*DP[6]-C[11]*DP[7]))+
 tmp[0])+tmp[1]);
R=+DP[7]*(S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(C[33]*(DP[3]-DP[4])-C[31]*
 DP[9])+C[2]*(DP[2]-DP[1])+C[8]*(DP[4]-DP[3])+C[10]*DP[8]+C[4]*DP[9])+DP[6]*
 (S[2]*(C[33]*(-DP[4]-DP[9]))+C[2]*(DP[2]+DP[8])+C[8]*(DP[4]+DP[9]))+S[2]*(-
 C[49]*DP[3]-C[47]*DP[4])+C[23]*(DP[1]+DP[4])+C[50]*DP[2]+C[25]*DP[3])+
 DP[7]*(DP[7]*(S[2]*(C[33]*DP[3]-C[30]*DP[9])+C[2]*(DP[9]-DP[1])+C[40]*
 DP[8]-C[8]*DP[3])+S[2]*(-C[49]*DP[3]-C[47]*DP[4])+C[23]*(DP[1]+DP[4])+
 C[50]*DP[2]+C[25]*DP[3]))+DP[13]*(DP[6]*(C[8]*(DP[2]*(DP[6]+DP[7])+DP[8]*
 DP[6]-DP[7]*DP[1])+C[25]*DP[1]+C[23]*DP[2]+C[4]*DP[8]*DP[7])+DP[7]*(DP[1]*(
 C[25]-C[8]*DP[7])+C[23]*DP[2]+C[2]*DP[8]*DP[7])))+tmp[2])+tmp[3];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*9)/(8);
 }
 return R;
}
