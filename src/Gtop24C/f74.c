/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F74_out;
static void C74(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[62]=+S[3]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(20*V[17]-24*V[18])+20*S[0]));
C[61]=+S[3]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
S[4]=V[9]*V[9]*V[9];
S[5]=V[9]*V[9]*V[9]*V[9];
C[60]=+S[3]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(6*V[18]-3*V[17])-3*S[0])+V[9]*(
 12*(S[0]-S[1])))+S[2]*(V[17]*(4*V[18]+6*V[17])+6*S[0]))+S[4]*(4*(S[1]-
 S[0])))+S[5]*(V[17]*(5*V[17]-10*V[18])+5*S[0]));
C[59]=+S[3]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(2*V[17]-4*V[18])+2*S[0]));
C[58]=+S[3]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[57]=+S[3]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(24*V[18]+12*V[17])+12*S[0]));
C[56]=+S[3]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(3*V[17]-6*V[18])+3*S[0])+V[9]*(
 2*(S[0]-S[1])))+S[2]*(V[17]*(8*V[18]-4*V[17])-4*S[0]))+S[4]*(2*(S[1]-
 S[0])))+S[5]*(V[17]*(V[17]-2*V[18])+S[0]));
C[55]=+S[3]*(V[8]*(V[8]*(V[17]*(20*V[18]-10*V[17])-10*S[0])+V[9]*(4*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[18]+6*V[17])+6*S[0]));
C[54]=+S[3]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[2]*(V[17]*(20*V[18]+14*V[17])+14*S[0]));
C[53]=+S[3]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[52]=+S[3]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(6*V[17]-12*V[18])+6*S[0])+V[9]*(
 10*(S[1]-S[0])))+S[2]*(V[17]*(-20*V[18]-14*V[17])-14*S[0]))+S[4]*(2*(S[0]-
 S[1]))));
C[51]=+S[3]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(32*V[18]+16*V[17])+16*S[0]));
C[50]=+S[3]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[49]=+S[3]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[2]*(V[17]*(8*V[18]+12*V[17])+12*S[0]));
C[48]=+S[3]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(12*(S[0]-
 S[1]))));
C[47]=+S[3]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[6]=V[7]*V[7];
C[46]=+S[6]*(V[8]*(V[8]*(V[17]*(96*V[18]-48*V[17])-48*S[0])+V[9]*(32*(S[0]-
 S[1])))+S[2]*(V[17]*(80*V[17]-96*V[18])+80*S[0]));
C[45]=+S[6]*(V[17]*(64*V[17]-128*V[18])+64*S[0]);
C[44]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+
 V[9]*(48*(S[0]-S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]))+S[4]*(16*(
 S[1]-S[0])))+S[5]*(V[17]*(20*V[17]-40*V[18])+20*S[0]));
C[43]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(64*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]));
C[42]=+S[6]*(V[17]*(96*V[17]-192*V[18])+96*S[0]);
C[41]=+S[6]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(64*(S[1]-
 S[0])))+S[2]*(V[17]*(96*V[18]+48*V[17])+48*S[0]));
C[40]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[17]-24*V[18])+12*S[0])+
 V[9]*(8*(S[0]-S[1])))+S[2]*(V[17]*(32*V[18]-16*V[17])-16*S[0]))+S[4]*(8*(
 S[1]-S[0])))+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]));
C[39]=+S[6]*(V[8]*(V[8]*(V[17]*(80*V[18]-40*V[17])-40*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]));
C[38]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[2]*(V[17]*(80*V[18]+56*V[17])+56*S[0]));
C[37]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(24*V[17]-48*V[18])+24*S[0])+
 V[9]*(40*(S[1]-S[0])))+S[2]*(V[17]*(-80*V[18]-56*V[17])-56*S[0]))+S[4]*(8*(
 S[0]-S[1]))));
C[36]=+S[6]*(V[8]*(V[8]*(V[17]*(128*V[18]-64*V[17])-64*S[0])+V[9]*(32*(S[0]-
 S[1])))+S[2]*(V[17]*(128*V[18]+64*V[17])+64*S[0]));
C[35]=+S[6]*(V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[2]*(V[17]*(32*V[18]+48*V[17])+48*S[0]));
C[34]=+S[6]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(48*(S[0]-
 S[1]))));
C[33]=+V[8]*(V[8]*(V[17]*(96*V[18]-48*V[17])-48*S[0])+V[9]*(32*(S[0]-
 S[1])))+S[2]*(V[17]*(80*V[17]-96*V[18])+80*S[0]);
C[32]=+V[17]*(64*V[17]-128*V[18])+64*S[0];
C[31]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+V[9]*(48*(
 S[0]-S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]))+S[4]*(16*(S[1]-
 S[0])))+S[5]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[30]=+V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(64*(S[1]-S[0])))+
 S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[29]=+V[17]*(96*V[17]-192*V[18])+96*S[0];
C[28]=+V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(64*(S[1]-
 S[0])))+S[2]*(V[17]*(96*V[18]+48*V[17])+48*S[0]);
C[27]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[17]-24*V[18])+12*S[0])+V[9]*(8*(
 S[0]-S[1])))+S[2]*(V[17]*(32*V[18]-16*V[17])-16*S[0]))+S[4]*(8*(S[1]-
 S[0])))+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[26]=+V[8]*(V[8]*(V[17]*(80*V[18]-40*V[17])-40*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]);
C[25]=+V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(48*(S[0]-S[1])))+
 S[2]*(V[17]*(80*V[18]+56*V[17])+56*S[0]);
C[24]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[23]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(24*V[17]-48*V[18])+24*S[0])+V[9]*(40*(
 S[1]-S[0])))+S[2]*(V[17]*(-80*V[18]-56*V[17])-56*S[0]))+S[4]*(8*(S[0]-
 S[1])));
C[22]=+V[8]*(V[8]*(V[17]*(128*V[18]-64*V[17])-64*S[0])+V[9]*(32*(S[0]-
 S[1])))+S[2]*(V[17]*(128*V[18]+64*V[17])+64*S[0]);
C[21]=+V[17]*(48*V[17]-96*V[18])+48*S[0];
C[20]=+V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[2]*(V[17]*(32*V[18]+48*V[17])+48*S[0]);
C[19]=+V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(48*(S[0]-
 S[1])));
C[18]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[17]=+S[6]*(V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(40*V[17]-48*V[18])+40*S[0]));
C[16]=+S[6]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[15]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[18]-6*V[17])-6*S[0])+V[9]*(
 24*(S[0]-S[1])))+S[2]*(V[17]*(8*V[18]+12*V[17])+12*S[0]))+S[4]*(8*(S[1]-
 S[0])))+S[5]*(V[17]*(10*V[17]-20*V[18])+10*S[0]));
C[14]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(32*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]));
C[13]=+S[6]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[12]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(32*(S[1]-
 S[0])))+S[2]*(V[17]*(48*V[18]+24*V[17])+24*S[0]));
C[11]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(6*V[17]-12*V[18])+6*S[0])+V[9]*(
 4*(S[0]-S[1])))+S[2]*(V[17]*(16*V[18]-8*V[17])-8*S[0]))+S[4]*(4*(S[1]-
 S[0])))+S[5]*(V[17]*(2*V[17]-4*V[18])+2*S[0]));
C[10]=+S[6]*(V[8]*(V[8]*(V[17]*(40*V[18]-20*V[17])-20*S[0])+V[9]*(8*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+12*V[17])+12*S[0]));
C[9]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[2]*(V[17]*(40*V[18]+28*V[17])+28*S[0]));
C[8]=+S[6]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[7]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[17]-24*V[18])+12*S[0])+V[9]*
 (20*(S[1]-S[0])))+S[2]*(V[17]*(-40*V[18]-28*V[17])-28*S[0]))+S[4]*(4*(S[0]-
 S[1]))));
C[6]=+S[6]*(V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(64*V[18]+32*V[17])+32*S[0]));
C[5]=+S[6]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[4]=+S[6]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]));
C[3]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(24*(S[0]-
 S[1]))));
C[2]=+S[6]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[7]=V[12]*V[12];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[7]*S[8];
S[9]=V[22]*V[22];
S[10]=V[14]*V[14];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[9]*S[10]*S[11];
}
REAL F74_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  G                 C          
                                    /!---2-------------@==<==        
                                    |!  P3             |  P1         
                                    |!                 |             
      C                       N2    |!  N2             |             
    ==<==\                 /==<=====+!==<==\          t|-PA          
      P1 |                 |  P4    |!  P4 |           |             
         |                 |        |!     |           |             
      G  |  t     t     W+ |  e2    |!  e2 |  W+    t  |  G          
    -1---@==<==@==<==@-3<--@==>=====+!==>==@--<4-@==<==@---1-        
      P2    P7 |  P8 |  P9    P5    |!  P5   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        B     |!  B        |                   
               |     \========<=====+!==<========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              G     |!                               
               \-------------2------/!                               
                              P3     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[63];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C74(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[1]*(C[8]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+
 DP[10]*(DP[9]-S[2]))+C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))+C[53]*DP[10]-C[50]*DP[11])+DP[2]*(C[5]*(DP[3]*(-
 DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[2]*(DP[4]*(
 DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[50]*DP[10]-
 C[47]*DP[11])+DP[13]*(C[14]*(-DP[3]-DP[6])+C[6]*(DP[4]+DP[7])+C[4]*(-DP[5]-
 DP[8]))+DP[14]*(C[14]*(-DP[3]-DP[6])+C[6]*(DP[4]+DP[7])+C[4]*(-DP[5]-
 DP[8]))+S[2]*(C[6]*DP[11]-C[14]*DP[10]-C[4]*DP[12])+DP[9]*(C[14]*DP[10]-
 C[6]*DP[11]+C[4]*DP[12])+C[59]*DP[10]-C[51]*DP[11]+C[49]*DP[12])+DP[2]*(
 C[3]*(DP[13]*(DP[4]-DP[5]+DP[7]-DP[8])+DP[14]*(DP[4]-DP[5]+DP[7]-DP[8])+
 S[2]*(DP[11]-DP[12])+DP[9]*(DP[12]-DP[11]))+DP[2]*(C[2]*(DP[3]*(-DP[13]-
 DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[47]*DP[10])+C[12]*(
 DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[48]*(
 DP[12]-DP[11])+C[57]*DP[10])+C[7]*(DP[13]*(DP[4]-DP[5]+DP[7]-DP[8])+DP[14]*
 (DP[4]-DP[5]+DP[7]-DP[8])+S[2]*(DP[11]-DP[12])+DP[9]*(DP[12]-DP[11]))+
 C[15]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+
 C[52]*(DP[12]-DP[11])+C[60]*DP[10];
tmp[1]=+S[2]*(DP[13]*(DP[0]*(S[2]*(DP[6]*(C[30]-C[24]*DP[0]+C[29]*DP[1]+
 C[21]*DP[2])+DP[8]*(C[18]*(DP[1]+DP[2])+C[22]-C[21]*DP[0])+DP[7]*(-C[20]-
 C[18]*DP[1]))+DP[1]*(C[8]*(DP[4]-DP[5])+C[2]*(DP[7]-DP[8])-C[42]*DP[3]-
 C[13]*DP[6])+DP[0]*(C[16]*DP[3]+C[13]*DP[5]+C[8]*DP[6]+C[5]*DP[8])+DP[2]*(-
 C[13]*DP[3]-C[8]*DP[5]-C[5]*DP[6]-C[2]*DP[8])+C[35]*DP[4]-C[43]*DP[3]-
 C[36]*DP[5]-C[14]*DP[6]+C[4]*DP[7]-C[6]*DP[8])+DP[1]*(S[2]*(DP[6]*(-C[30]-
 C[24]*DP[1]-C[21]*DP[2])+DP[7]*(C[22]+C[21]*DP[1]+C[18]*DP[2])-C[20]*
 DP[8])+DP[1]*(C[16]*DP[3]-C[13]*DP[4]+C[8]*DP[6]-C[5]*DP[7])+DP[2]*(C[13]*
 DP[3]-C[8]*DP[4]+C[5]*DP[6]-C[2]*DP[7])+C[43]*DP[3]-C[36]*DP[4]+C[35]*
 DP[5]+C[14]*DP[6]-C[6]*DP[7]+C[4]*DP[8])+DP[2]*(S[2]*(DP[6]*(-C[28]-C[18]*
 DP[2])+C[19]*(DP[7]-DP[8]))+DP[2]*(C[8]*DP[3]+C[2]*DP[6])+C[34]*(DP[5]-
 DP[4])+C[3]*(DP[8]-DP[7])+C[41]*DP[3]+C[12]*DP[6])+S[2]*(C[23]*(DP[7]-
 DP[8])-C[31]*DP[6])+C[37]*(DP[5]-DP[4])+C[7]*(DP[8]-DP[7])+C[44]*DP[3]+
 C[15]*DP[6])+DP[14]*(DP[0]*(DP[3]*(C[8]*DP[0]-C[14]-C[13]*DP[1]-C[5]*
 DP[2])+DP[5]*(C[2]*(-DP[1]-DP[2])+C[5]*DP[0]-C[6])+DP[4]*(C[4]+C[2]*
 DP[1]))+DP[1]*(DP[3]*(C[14]+C[8]*DP[1]+C[5]*DP[2])+DP[4]*(-C[6]-C[5]*DP[1]-
 C[2]*DP[2])+C[4]*DP[5])+DP[2]*(DP[3]*(C[12]+C[2]*DP[2])+C[3]*(DP[5]-
 DP[4]))+C[7]*(DP[5]-DP[4])+C[15]*DP[3]));
tmp[2]=+DP[1]*(DP[9]*(DP[0]*(C[16]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[8]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-
 DP[14])+DP[11]*(DP[9]-S[2]))+C[61]*DP[10]+C[53]*DP[11])+DP[1]*(C[16]*(
 DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[8]*(
 DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[53]*
 DP[12]-C[61]*DP[10])+C[9]*(DP[13]*(DP[4]-DP[5]+DP[7]-DP[8])+DP[14]*(DP[4]-
 DP[5]+DP[7]-DP[8])+S[2]*(DP[11]-DP[12])+DP[9]*(DP[12]-DP[11]))+C[17]*(
 DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[54]*(
 DP[12]-DP[11])-C[62]*DP[10])+S[2]*(DP[13]*(S[2]*(DP[6]*(C[32]*(DP[1]-
 DP[0])+C[33])+DP[7]*(C[25]-C[24]*DP[0])+DP[8]*(-C[25]-C[24]*DP[1]))+DP[0]*(
 C[16]*(DP[4]+DP[6])+C[45]*DP[3]+C[8]*DP[7])+DP[1]*(C[16]*(DP[5]-DP[6])+
 C[8]*DP[8]-C[45]*DP[3])+C[38]*(DP[5]-DP[4])+C[9]*(DP[8]-DP[7])-C[46]*DP[3]-
 C[17]*DP[6])+DP[14]*(DP[3]*(C[16]*(DP[0]-DP[1])-C[17])+DP[4]*(C[8]*DP[0]-
 C[9])+DP[5]*(C[9]+C[8]*DP[1]))));
tmp[3]=+DP[0]*(DP[0]*(DP[9]*(DP[0]*(C[8]*(DP[5]*(DP[13]+DP[14])+DP[8]*(
 DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[53]*DP[12])+C[10]*(DP[5]*(-DP[13]-
 DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[55]*DP[12])+S[2]*(
 DP[13]*(DP[8]*(S[2]*(C[24]*DP[0]-C[26])+C[10]-C[8]*DP[0])+DP[5]*(C[39]-
 C[16]*DP[0]))+DP[5]*(DP[14]*(C[10]-C[8]*DP[0]))))+C[11]*(DP[9]*(DP[5]*(
 DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+S[2]*(-DP[13]*
 DP[8]-DP[14]*DP[5]))+S[2]*(DP[13]*(C[27]*DP[8]*S[2]-C[40]*DP[5]))-C[56]*
 DP[12]*DP[9]+tmp[2])+DP[1]*(DP[1]*(DP[9]*(DP[1]*(C[8]*(DP[4]*(DP[13]+
 DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[53]*DP[11])+C[10]*(
 DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[55]*
 DP[11])+S[2]*(DP[13]*(DP[7]*(S[2]*(C[26]+C[24]*DP[1])-C[10]-C[8]*DP[1])+
 DP[4]*(-C[39]-C[16]*DP[1]))+DP[4]*(DP[14]*(-C[10]-C[8]*DP[1]))))+C[11]*(
 DP[9]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+
 S[2]*(-DP[13]*DP[7]-DP[14]*DP[4]))+S[2]*(DP[13]*(C[27]*DP[7]*S[2]-C[40]*
 DP[4]))-C[56]*DP[11]*DP[9]);
R=+DP[2]*(DP[9]*(DP[0]*(DP[1]*(C[2]*(DP[13]*(DP[5]-DP[4]-DP[7]+DP[8])+
 DP[14]*(DP[5]-DP[4]-DP[7]+DP[8])+S[2]*(DP[12]-DP[11])+DP[9]*(DP[11]-
 DP[12]))+C[13]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-
 DP[9]))+C[47]*(DP[11]-DP[12])-C[58]*DP[10])+DP[0]*(C[8]*(DP[3]*(-DP[13]-
 DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[5]*(DP[5]*(-DP[13]-
 DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[53]*DP[10]+C[50]*
 DP[12])+DP[2]*(C[5]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(
 S[2]-DP[9]))+C[2]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(
 S[2]-DP[9]))-C[50]*DP[10]-C[47]*DP[12])+DP[13]*(C[14]*(DP[3]+DP[6])+C[4]*(-
 DP[4]-DP[7])+C[6]*(DP[5]+DP[8]))+DP[14]*(C[14]*(DP[3]+DP[6])+C[4]*(-DP[4]-
 DP[7])+C[6]*(DP[5]+DP[8]))+S[2]*(C[14]*DP[10]-C[4]*DP[11]+C[6]*DP[12])+
 DP[9]*(C[4]*DP[11]-C[14]*DP[10]-C[6]*DP[12])+C[49]*DP[11]-C[59]*DP[10]-
 C[51]*DP[12])+tmp[0])+tmp[1])+tmp[3];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[6];
 if(cb_coeff_out)
 {
 }
 return R;
}
