/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F144_out;
static void C144(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[33]=+S[3]*(V[8]*(V[8]*(V[17]*(V[17]-2*V[18])+S[0])+V[9]*(10*(S[1]-S[0])))+
 S[2]*(V[17]*(2*V[18]+V[17])+S[0]));
C[32]=+S[3]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[31]=+S[3]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[4]=V[8]*V[8];
C[30]=+S[3]*(V[17]*(S[4]*(4*V[18]-2*V[17])+S[2]*(4*V[18]+2*V[17]))+S[0]*(2*(
 S[2]-S[4])));
C[29]=+S[3]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(10*(S[0]-
 S[1]))));
C[28]=+S[3]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
C[27]=+S[3]*(V[17]*(S[4]*(8*V[18]-4*V[17])+S[2]*(8*V[18]+4*V[17]))+S[0]*(4*(
 S[2]-S[4])));
C[26]=+S[3]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[25]=+S[3]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
S[5]=V[7]*V[7];
C[24]=+S[5]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(40*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[23]=+S[5]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[22]=+S[5]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[21]=+S[5]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(40*(S[0]-
 S[1]))));
C[20]=+S[5]*(V[17]*(S[4]*(32*V[18]-16*V[17])+S[2]*(32*V[18]+16*V[17]))+S[0]*
 (16*(S[2]-S[4])));
C[19]=+V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(40*(S[1]-S[0])))+
 S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[18]=+V[17]*(48*V[17]-96*V[18])+48*S[0];
C[17]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[16]=+V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+S[0]*(8*(
 S[2]-S[4]));
C[15]=+V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(40*(S[0]-S[1])));
C[14]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[13]=+V[17]*(S[4]*(32*V[18]-16*V[17])+S[2]*(32*V[18]+16*V[17]))+S[0]*(16*(
 S[2]-S[4]));
C[12]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[11]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[10]=+S[5]*(V[8]*(V[8]*(V[17]*(2*V[17]-4*V[18])+2*S[0])+V[9]*(20*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[9]=+S[5]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[8]=+S[5]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[7]=+S[5]*(V[17]*(S[4]*(8*V[18]-4*V[17])+S[2]*(8*V[18]+4*V[17]))+S[0]*(4*(
 S[2]-S[4])));
C[6]=+S[5]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(20*(S[0]-
 S[1]))));
C[5]=+S[5]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[4]=+S[5]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+S[0]*(8*
 (S[2]-S[4])));
C[3]=+S[5]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[2]=+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[6]=V[12]*V[12];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[6]*S[7];
S[8]=V[22]*V[22];
S[9]=V[14]*V[14];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[8]*S[9]*S[10];
}
REAL F144_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 G      !  G                 G             
       -1---@-------------3-------!---3-------------@---1-           
         P1 |              P3     !  P3             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           G|P7         /==<======!==<==\          G|-PA             
            2           |  P4     !  P4 |           5                
            |           |         !     |           |                
         C  |  t     W+ |  e2     !  e2 |  W+    t  |  C             
       ==<==@==<==@-4<--@==>======!==>==@--<6-@==<==@==<==           
         P2    P8 |  P9    P5     !  P5   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C144(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[2]*(DP[13]*(C[5]*(-DP[3]-DP[6])+C[9]*(-DP[4]-DP[7])+C[2]*(
 DP[5]+DP[8]))+DP[14]*(C[5]*(-DP[3]-DP[6])+C[9]*(-DP[4]-DP[7])+C[2]*(DP[5]+
 DP[8]))+S[2]*(C[2]*DP[12]-C[5]*DP[10]-C[9]*DP[11])+DP[9]*(C[5]*DP[10]+C[9]*
 DP[11]-C[2]*DP[12])+C[28]*DP[10]+C[32]*DP[11]-C[25]*DP[12])+C[6]*(DP[13]*(
 DP[3]-DP[5]+DP[6]-DP[8])+DP[14]*(DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-
 DP[12])+DP[9]*(DP[12]-DP[10]))+DP[1]*(C[2]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-
 DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[25]*DP[11])+C[10]*(DP[4]*(-DP[13]-
 DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[29]*(DP[12]-DP[10])+
 C[33]*DP[11])+DP[2]*(DP[2]*(C[3]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[8]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-
 DP[14])+DP[11]*(DP[9]-S[2]))+C[26]*DP[10]+C[31]*DP[11])+C[7]*(DP[3]*(
 DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[4]*(DP[5]*(-
 DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[27]*DP[12]-
 C[30]*DP[10]);
tmp[1]=+S[2]*(DP[13]*(DP[0]*(S[2]*(DP[8]*(C[12]*(DP[0]+DP[2])+C[16]-C[14]*
 DP[1])+DP[6]*(C[11]*DP[1]-C[13]-C[12]*DP[2])+DP[7]*(C[17]*(DP[2]-DP[0])+
 C[18]*DP[1]))+DP[1]*(C[9]*(DP[5]-DP[7])+C[5]*DP[8]-C[3]*DP[3]-C[23]*DP[4]-
 C[2]*DP[6])+DP[2]*(C[8]*(DP[3]-DP[5]-DP[7])+C[3]*(DP[6]-DP[8])-C[22]*
 DP[4])+DP[0]*(C[8]*(DP[7]-DP[5])+C[22]*DP[4]-C[3]*DP[8])+C[4]*(DP[6]-
 DP[5])+C[20]*DP[3]-C[7]*DP[8])+DP[1]*(DP[2]*(S[2]*(C[11]*DP[8]-C[14]*DP[6]-
 C[18]*DP[7])+C[9]*(DP[3]+DP[7])+C[23]*DP[4]-C[3]*DP[5]+C[5]*DP[6]-C[2]*
 DP[8])+S[2]*(DP[7]*(-C[19]-C[11]*DP[1])+C[15]*(DP[6]-DP[8]))+DP[1]*(C[3]*
 DP[4]+C[2]*DP[7])+C[21]*(DP[5]-DP[3])+C[6]*(DP[8]-DP[6])+C[24]*DP[4]+C[10]*
 DP[7])+DP[2]*(DP[2]*(S[2]*(-C[12]*DP[6]-C[17]*DP[7])+C[8]*(DP[3]+DP[7])+
 C[22]*DP[4]+C[3]*DP[6])+S[2]*(C[16]*DP[6]-C[13]*DP[8])+C[4]*(DP[8]-DP[3])+
 C[20]*DP[5]-C[7]*DP[6]))+DP[14]*(DP[0]*(DP[5]*(C[3]*(-DP[0]-DP[2])+C[5]*
 DP[1]-C[7])+DP[3]*(C[4]-C[2]*DP[1]+C[3]*DP[2])+DP[4]*(C[8]*(DP[0]-DP[2])-
 C[9]*DP[1]))+DP[1]*(DP[2]*(C[5]*DP[3]+C[9]*DP[4]-C[2]*DP[5])+DP[4]*(C[10]+
 C[2]*DP[1])+C[6]*(DP[5]-DP[3]))+DP[2]*(DP[2]*(C[3]*DP[3]+C[8]*DP[4])+C[4]*
 DP[5]-C[7]*DP[3])));
R=+DP[1]*(DP[9]*(DP[0]*(DP[1]*(DP[13]*(C[2]*(DP[3]+DP[6])+C[9]*(DP[4]+
 DP[7])+C[5]*(-DP[5]-DP[8]))+DP[14]*(C[2]*(DP[3]+DP[6])+C[9]*(DP[4]+DP[7])+
 C[5]*(-DP[5]-DP[8]))+S[2]*(C[2]*DP[10]+C[9]*DP[11]-C[5]*DP[12])+DP[9]*(
 C[5]*DP[12]-C[2]*DP[10]-C[9]*DP[11])+C[28]*DP[12]-C[25]*DP[10]-C[32]*
 DP[11])+DP[2]*(C[3]*(DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(DP[5]-DP[3]-
 DP[6]+DP[8])+S[2]*(DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+C[8]*(DP[4]*(
 DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[26]*(DP[10]-
 DP[12])-C[31]*DP[11])+DP[0]*(C[8]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-
 DP[14])+DP[11]*(DP[9]-S[2]))+C[3]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+
 DP[14])+DP[12]*(S[2]-DP[9]))+C[31]*DP[11]-C[26]*DP[12])+C[4]*(DP[3]*(-
 DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[7]*(DP[5]*(
 DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[27]*DP[10]-
 C[30]*DP[12])+tmp[0])+tmp[1]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*-9)/(-16);
  cb_coeff_out[2] += (R*-9)/(-16);
 }
 return R;
}