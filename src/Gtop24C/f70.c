/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F70_out;
static void C70(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[65]=+S[3]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(4*(S[0]-
 S[1])))+S[2]*(V[17]*(6*V[17]-4*V[18])+6*S[0]));
C[64]=+S[3]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
S[4]=V[9]*V[9]*V[9];
C[63]=+S[3]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(V[17]-2*V[18])+S[0])+V[9]*(5*(
 S[1]-S[0])))+S[2]*(V[17]*(2*V[18]-5*V[17])-5*S[0]))+S[4]*(S[0]-S[1])));
C[62]=+S[3]*(V[8]*(V[8]*(V[17]*(2*V[18]-V[17])-S[0])+V[9]*(6*(S[1]-S[0])))+
 S[2]*(V[17]*(11*V[17]-6*V[18])+11*S[0]));
C[61]=+S[3]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(4*(S[0]-
 S[1])))+S[2]*(V[17]*(4*V[18]+6*V[17])+6*S[0]));
S[5]=V[8]*V[8];
C[60]=+S[3]*(V[17]*(S[5]*(18*V[18]-9*V[17])+S[2]*(6*V[18]+9*V[17]))+S[0]*(9*
 (S[2]-S[5])));
C[59]=+S[3]*(S[5]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(4*(
 S[0]-S[1])))+S[2]*(V[17]*(4*V[18]+6*V[17])+6*S[0])));
C[58]=+S[3]*(V[9]*(V[9]*(V[17]*(8*V[18]+12*V[17])+12*S[0])+V[8]*(4*(S[1]-
 S[0]))));
C[57]=+S[3]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(2*V[18]-V[17])-S[0])+V[9]*(S[1]-
 S[0]))+S[2]*(V[17]*(V[17]-2*V[18])+S[0]))+S[4]*(S[0]-S[1])));
C[56]=+S[3]*(V[8]*(V[8]*(V[17]*(2*V[18]-V[17])-S[0])+V[9]*(6*(S[0]-S[1])))+
 S[2]*(V[17]*(7*V[17]-6*V[18])+7*S[0]));
C[55]=+S[3]*(V[17]*(18*V[17]-36*V[18])+18*S[0]);
C[54]=+S[3]*(S[5]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(4*(
 S[0]-S[1])))+S[2]*(V[17]*(6*V[17]-4*V[18])+6*S[0])));
C[53]=+S[3]*(V[8]*(2*(S[1]*(V[8]-V[9])+S[0]*(V[9]+V[8]))-4*V[18]*V[17]*
 V[8]));
C[52]=+S[3]*(V[9]*(V[9]*(V[17]*(12*V[17]-8*V[18])+12*S[0])+V[8]*(4*(S[1]-
 S[0]))));
C[51]=+S[3]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[50]=+S[3]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
S[6]=V[7]*V[7];
C[49]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(24*V[17]-16*V[18])+24*S[0]));
C[48]=+S[6]*(V[17]*(64*V[17]-128*V[18])+64*S[0]);
C[47]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(
 20*(S[1]-S[0])))+S[2]*(V[17]*(8*V[18]-20*V[17])-20*S[0]))+S[4]*(4*(S[0]-
 S[1]))));
C[46]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(24*(S[1]-
 S[0])))+S[2]*(V[17]*(44*V[17]-24*V[18])+44*S[0]));
C[45]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]));
C[44]=+S[6]*(V[17]*(S[5]*(72*V[18]-36*V[17])+S[2]*(24*V[18]+36*V[17]))+S[0]*
 (36*(S[2]-S[5])));
C[43]=+S[6]*(S[5]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(
 S[0]-S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0])));
C[42]=+S[6]*(V[9]*(V[9]*(V[17]*(32*V[18]+48*V[17])+48*S[0])+V[8]*(16*(S[1]-
 S[0]))));
C[41]=+S[6]*(V[8]*(V[8]*(4*(V[8]*(S[1]*(V[9]-V[8])+S[0]*(-V[9]-V[8]))+S[2]*(
 S[0]+S[1]))+V[17]*(V[18]*(8*(S[5]-S[2]))))+S[4]*(4*(S[0]-S[1]))));
C[40]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[2]*(V[17]*(28*V[17]-24*V[18])+28*S[0]));
C[39]=+S[6]*(V[17]*(72*V[17]-144*V[18])+72*S[0]);
C[38]=+S[6]*(S[5]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(
 S[0]-S[1])))+S[2]*(V[17]*(24*V[17]-16*V[18])+24*S[0])));
C[37]=+S[6]*(V[8]*(8*(S[1]*(V[8]-V[9])+S[0]*(V[9]+V[8]))-16*V[18]*V[17]*
 V[8]));
C[36]=+S[6]*(V[9]*(V[9]*(V[17]*(48*V[17]-32*V[18])+48*S[0])+V[8]*(16*(S[1]-
 S[0]))));
C[35]=+S[6]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[34]=+S[6]*(V[17]*(80*V[17]-160*V[18])+80*S[0]);
C[33]=+V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-S[1])))+
 S[2]*(V[17]*(24*V[17]-16*V[18])+24*S[0]);
C[32]=+V[17]*(64*V[17]-128*V[18])+64*S[0];
C[31]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(20*(
 S[1]-S[0])))+S[2]*(V[17]*(8*V[18]-20*V[17])-20*S[0]))+S[4]*(4*(S[0]-
 S[1])));
C[30]=+V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(24*(S[1]-S[0])))+
 S[2]*(V[17]*(44*V[17]-24*V[18])+44*S[0]);
C[29]=+V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-S[1])))+
 S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]);
C[28]=+V[17]*(S[5]*(72*V[18]-36*V[17])+S[2]*(24*V[18]+36*V[17]))+S[0]*(36*(
 S[2]-S[5]));
C[27]=+S[5]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(16*V[18]+24*V[17])+24*S[0]));
C[26]=+V[9]*(V[9]*(V[17]*(32*V[18]+48*V[17])+48*S[0])+V[8]*(16*(S[1]-
 S[0])));
C[25]=+V[8]*(V[8]*(4*(V[8]*(S[1]*(V[9]-V[8])+S[0]*(-V[9]-V[8]))+S[2]*(S[0]+
 S[1]))+V[17]*(V[18]*(8*(S[5]-S[2]))))+S[4]*(4*(S[0]-S[1])));
C[24]=+V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(24*(S[0]-S[1])))+
 S[2]*(V[17]*(28*V[17]-24*V[18])+28*S[0]);
C[23]=+V[17]*(72*V[17]-144*V[18])+72*S[0];
C[22]=+S[5]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(16*(S[0]-
 S[1])))+S[2]*(V[17]*(24*V[17]-16*V[18])+24*S[0]));
C[21]=+V[8]*(8*(S[1]*(V[8]-V[9])+S[0]*(V[9]+V[8]))-16*V[18]*V[17]*V[8]);
C[20]=+V[9]*(V[9]*(V[17]*(48*V[17]-32*V[18])+48*S[0])+V[8]*(16*(S[1]-
 S[0])));
C[19]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[18]=+V[17]*(80*V[17]-160*V[18])+80*S[0];
C[17]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(12*V[17]-8*V[18])+12*S[0]));
C[16]=+S[6]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[15]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(2*V[17]-4*V[18])+2*S[0])+V[9]*(
 10*(S[1]-S[0])))+S[2]*(V[17]*(4*V[18]-10*V[17])-10*S[0]))+S[4]*(2*(S[0]-
 S[1]))));
C[14]=+S[6]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(12*(S[1]-
 S[0])))+S[2]*(V[17]*(22*V[17]-12*V[18])+22*S[0]));
C[13]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(8*V[18]+12*V[17])+12*S[0]));
C[12]=+S[6]*(V[17]*(S[5]*(36*V[18]-18*V[17])+S[2]*(12*V[18]+18*V[17]))+S[0]*
 (18*(S[2]-S[5])));
C[11]=+S[6]*(S[5]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(8*(
 S[0]-S[1])))+S[2]*(V[17]*(8*V[18]+12*V[17])+12*S[0])));
C[10]=+S[6]*(V[9]*(V[9]*(V[17]*(16*V[18]+24*V[17])+24*S[0])+V[8]*(8*(S[1]-
 S[0]))));
C[9]=+S[6]*(V[8]*(V[8]*(2*(V[8]*(S[1]*(V[9]-V[8])+S[0]*(-V[9]-V[8]))+S[2]*(
 S[0]+S[1]))+V[17]*(V[18]*(4*(S[5]-S[2]))))+S[4]*(2*(S[0]-S[1]))));
C[8]=+S[6]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[2]*(V[17]*(14*V[17]-12*V[18])+14*S[0]));
C[7]=+S[6]*(V[17]*(36*V[17]-72*V[18])+36*S[0]);
C[6]=+S[6]*(S[5]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(12*V[17]-8*V[18])+12*S[0])));
C[5]=+S[6]*(V[8]*(4*(S[1]*(V[8]-V[9])+S[0]*(V[9]+V[8]))-8*V[18]*V[17]*
 V[8]));
C[4]=+S[6]*(V[9]*(V[9]*(V[17]*(24*V[17]-16*V[18])+24*S[0])+V[8]*(8*(S[1]-
 S[0]))));
C[3]=+S[6]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[2]=+S[6]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
S[7]=V[12]*V[12];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[7]*S[8];
S[9]=V[22]*V[22];
S[10]=V[14]*V[14];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[9]*S[10]*S[11];
}
REAL F70_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         C                 G      !  G                 C             
       ==<==@-------------1-------!---1-------------@==<==           
         P1 |              P3     !  P3             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           c|P7         /==<======!==<==\          t|-PA             
            |           |  P4     !  P4 |           |                
            |           |         !     |           |                
         G  |  t     W+ |  e2     !  e2 |  W+    t  |  G             
       -2---@==<==@-3<--@==>======!==>==@--<4-@==<==@---2-           
         P2    P8 |  P9    P5     !  P5   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[66];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C70(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[2]*(DP[1]*(DP[13]*(C[7]*(-DP[3]-DP[6])+C[3]*(-DP[4]-DP[7])+C[2]*(
 DP[5]+DP[8]))+DP[14]*(C[7]*(-DP[3]-DP[6])+C[3]*(-DP[4]-DP[7])+C[2]*(DP[5]+
 DP[8]))+S[2]*(C[2]*DP[12]-C[7]*DP[10]-C[3]*DP[11])+DP[9]*(C[7]*DP[10]+C[3]*
 DP[11]-C[2]*DP[12])+C[55]*DP[10]+C[51]*DP[11]-C[50]*DP[12])+DP[13]*(DP[2]*(
 C[3]*(DP[3]+DP[6]))+C[14]*(-DP[3]-DP[6])+C[10]*(-DP[4]-DP[7])+C[4]*(DP[5]+
 DP[8]))+DP[14]*(DP[2]*(C[3]*(DP[3]+DP[6]))+C[14]*(-DP[3]-DP[6])+C[10]*(-
 DP[4]-DP[7])+C[4]*(DP[5]+DP[8]))+DP[10]*(DP[2]*(C[3]*(S[2]-DP[9])-C[51])+
 C[14]*(DP[9]-S[2])+C[62])+DP[11]*(C[10]*(DP[9]-S[2])+C[58])+DP[12]*(C[4]*(
 S[2]-DP[9])-C[52]))+DP[1]*(DP[1]*(C[7]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[55]*DP[11])+C[12]*(DP[4]*(DP[13]+
 DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[60]*DP[11]);
tmp[1]=+S[2]*(DP[13]*(DP[0]*(S[2]*(DP[8]*(C[19]*(DP[0]-DP[2])-C[24]-C[23]*
 DP[1])+DP[6]*(C[33]+C[32]*DP[1]-C[19]*DP[2])+DP[7]*(C[29]-C[19]*DP[1]))+
 DP[1]*(C[35]*DP[4]-C[48]*DP[3]+C[39]*DP[5]-C[16]*DP[6]+C[3]*DP[7]+C[7]*
 DP[8])+DP[2]*(C[35]*(DP[3]+DP[5])+C[3]*(DP[6]+DP[8]))+DP[0]*(-C[35]*DP[5]-
 C[3]*DP[8])+C[40]*DP[5]-C[49]*DP[3]-C[45]*DP[4]-C[17]*DP[6]-C[13]*DP[7]+
 C[8]*DP[8])+DP[2]*(DP[1]*(S[2]*(C[18]*DP[8]-C[23]*DP[6]-C[19]*DP[7])+C[39]*
 DP[3]+C[35]*DP[4]-C[34]*DP[5]+C[7]*DP[6]+C[3]*DP[7]-C[2]*DP[8])+S[2]*(
 DP[6]*(C[19]*DP[2]-C[30])+C[20]*DP[8]-C[26]*DP[7])+DP[2]*(-C[35]*DP[3]-
 C[3]*DP[6])+C[46]*DP[3]+C[42]*DP[4]-C[36]*DP[5]+C[14]*DP[6]+C[10]*DP[7]-
 C[4]*DP[8])+DP[1]*(DP[7]*(S[2]*(C[28]+C[23]*DP[1])-C[12]-C[7]*DP[1])+DP[4]*
 (-C[44]-C[39]*DP[1])))+DP[14]*(DP[0]*(DP[5]*(C[3]*(DP[2]-DP[0])+C[8]+C[7]*
 DP[1])+DP[3]*(C[3]*DP[2]-C[17]-C[16]*DP[1])+DP[4]*(C[3]*DP[1]-C[13]))+
 DP[2]*(DP[1]*(C[7]*DP[3]+C[3]*DP[4]-C[2]*DP[5])+DP[3]*(C[14]-C[3]*DP[2])+
 C[10]*DP[4]-C[4]*DP[5])+DP[1]*(DP[4]*(-C[12]-C[7]*DP[1]))));
tmp[2]=+DP[2]*(DP[9]*(C[5]*(DP[0]*(DP[13]*(-DP[3]-DP[5]-DP[6]-DP[8])+DP[14]*
 (-DP[3]-DP[5]-DP[6]-DP[8])+S[2]*(-DP[10]-DP[12])+DP[9]*(DP[10]+DP[12]))+
 DP[2]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9])))+
 DP[13]*(C[15]*(DP[3]+DP[6])+C[11]*(-DP[4]-DP[7])+C[6]*(DP[5]+DP[8]))+
 DP[14]*(C[15]*(DP[3]+DP[6])+C[11]*(-DP[4]-DP[7])+C[6]*(DP[5]+DP[8]))+
 DP[10]*(C[15]*(S[2]-DP[9])+C[53]*(DP[0]-DP[2])-C[63])+DP[12]*(C[6]*(S[2]-
 DP[9])+C[53]*DP[0]-C[54])+DP[11]*(C[11]*(DP[9]-S[2])+C[59]))+S[2]*(DP[13]*(
 S[2]*(DP[6]*(C[21]*(DP[2]-DP[0])+C[31])+DP[8]*(C[22]-C[21]*DP[0])-C[27]*
 DP[7])+DP[0]*(C[37]*(DP[3]+DP[5])+C[5]*(DP[6]+DP[8]))+DP[2]*(-C[37]*DP[3]-
 C[5]*DP[6])+C[43]*DP[4]-C[47]*DP[3]-C[38]*DP[5]-C[15]*DP[6]+C[11]*DP[7]-
 C[6]*DP[8])+DP[14]*(DP[3]*(C[5]*(DP[0]-DP[2])-C[15])+DP[5]*(C[5]*DP[0]-
 C[6])+C[11]*DP[4])))+DP[0]*(DP[9]*(DP[0]*(C[5]*(DP[5]*(DP[13]+DP[14])+
 DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[53]*DP[12])+C[9]*(DP[5]*(-
 DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[57]*DP[12])+
 S[2]*(DP[13]*(DP[8]*(S[2]*(C[21]*DP[0]-C[25])+C[9]-C[5]*DP[0])+DP[5]*(
 C[41]-C[37]*DP[0]))+DP[5]*(DP[14]*(C[9]-C[5]*DP[0]))));
R=+DP[1]*(DP[9]*(DP[0]*(C[3]*(DP[2]*(DP[13]*(-DP[3]-DP[5]-DP[6]-DP[8])+
 DP[14]*(-DP[3]-DP[5]-DP[6]-DP[8])+S[2]*(-DP[10]-DP[12])+DP[9]*(DP[10]+
 DP[12]))+DP[0]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-
 DP[9]))+DP[1]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-
 S[2])))+DP[1]*(C[16]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(
 S[2]-DP[9]))+C[7]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(
 DP[9]-S[2]))+C[51]*DP[11]-C[64]*DP[10]+C[55]*DP[12])+DP[13]*(C[17]*(DP[3]+
 DP[6])+C[13]*(DP[4]+DP[7])+C[8]*(-DP[5]-DP[8]))+DP[14]*(C[17]*(DP[3]+
 DP[6])+C[13]*(DP[4]+DP[7])+C[8]*(-DP[5]-DP[8]))+DP[12]*(C[8]*(DP[9]-S[2])+
 C[51]*(DP[2]-DP[0])+C[56])+DP[10]*(C[17]*(S[2]-DP[9])+C[51]*DP[2]-C[65])+
 DP[11]*(C[13]*(S[2]-DP[9])-C[61]))+tmp[0])+tmp[1])+tmp[2];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*81)/(64);
 }
 return R;
}
