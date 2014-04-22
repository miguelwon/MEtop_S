/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F381_out;
static void C381(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[18]*V[18];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[28]=+S[2]*(S[1]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[27]=+S[2]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
C[26]=+S[2]*(S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[25]=+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[3]=V[8]*V[8];
C[24]=+S[3]*(S[1]*(V[17]*(32*V[18]+16*V[17])+16*S[0]));
C[23]=+S[1]*(V[17]*(16*V[18]+8*V[17])+8*S[0]);
C[22]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[21]=+S[1]*(V[17]*(32*V[18]+16*V[17])+16*S[0]);
C[20]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[19]=+S[3]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[18]=+S[3]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[17]=+S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[16]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[15]=+V[17]*(48*V[17]-96*V[18])+48*S[0];
C[14]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[13]=+S[3]*(S[1]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[12]=+S[3]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[11]=+S[3]*(S[1]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[10]=+S[3]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[9]=+S[2]*(S[1]*(V[17]*(2*V[18]+V[17])+S[0]));
C[8]=+S[2]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[7]=+S[3]*(S[1]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[6]=+S[3]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[5]=+S[2]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[4]=+S[3]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[3]=+S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[2]=+S[3]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[4]*S[5];
S[6]=V[33]*V[33];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[6]*S[7]*S[8];
}
REAL F381_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   G                       n2     !  n2                      G       
 -1---\                 /==>======!==>==\                 /---1-     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   G  |  G     t     W+ |  E2     !  E2 |  W+    t     G  |  G       
 -2---@-3---@==>==@-4>--@==<======!==<==@-->6-@==>==@---5-@---2-     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              U      !  U              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[29];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C381(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[6]*(DP[0]*(DP[12]*(C[6]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4])+C[4]*
 (DP[8]+DP[9]))+DP[13]*(C[6]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4])+C[4]*(
 DP[8]+DP[9]))+S[2]*(C[4]*DP[14]-C[6]*DP[10]-C[12]*DP[11])+DP[5]*(C[6]*
 DP[10]+C[12]*DP[11]-C[4]*DP[14])+C[8]*DP[10]+C[27]*DP[11]-C[5]*DP[14])+
 DP[7]*(C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[25]*(DP[10]+DP[11])+
 C[3]*DP[14])+DP[6]*(C[10]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[2]-DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[3]*DP[14]-C[25]*DP[11])+C[11]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[13]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[26]*DP[10]+C[28]*
 DP[11]);
tmp[1]=+S[2]*(DP[12]*(DP[6]*(S[2]*(DP[4]*(C[20]*(DP[6]-DP[7])-C[23]-C[22]*
 DP[0])+DP[3]*(-C[21]-C[16]*DP[0]-C[20]*DP[7])+DP[9]*(C[14]*(-DP[6]-DP[7])+
 C[15]*DP[0]))+DP[0]*(C[4]*(DP[2]-DP[9])+C[10]*DP[1]+C[6]*DP[3]+C[12]*DP[4]-
 C[19]*DP[8])+DP[7]*(C[2]*(DP[1]+DP[2]+DP[9])+C[10]*(DP[3]+DP[4])+C[18]*
 DP[8])+DP[6]*(C[2]*(DP[9]-DP[2])+C[18]*DP[8]-C[10]*DP[4])+C[11]*(DP[2]+
 DP[3])+C[24]*DP[1]+C[13]*DP[4])+DP[7]*(DP[0]*(S[2]*(C[15]*DP[9]-C[22]*
 DP[3]-C[16]*DP[4])+C[4]*(DP[1]-DP[9])+C[10]*DP[2]+C[12]*DP[3]+C[6]*DP[4]-
 C[19]*DP[8])+DP[7]*(S[2]*(C[20]*DP[3]-C[14]*DP[9])+C[2]*(DP[9]-DP[1])+
 C[18]*DP[8]-C[10]*DP[3])+S[2]*(-C[23]*DP[3]-C[21]*DP[4])+C[11]*(DP[1]+
 DP[4])+C[24]*DP[2]+C[13]*DP[3])+DP[0]*(DP[9]*(S[2]*(C[17]-C[16]*DP[0])+
 C[6]*DP[0]-C[7])+DP[8]*(C[10]*DP[0]-C[13])))+DP[13]*(DP[6]*(DP[2]*(C[10]*(
 DP[7]-DP[6])+C[13]+C[12]*DP[0])+DP[1]*(C[11]+C[6]*DP[0]+C[10]*DP[7])+DP[8]*
 (C[2]*(DP[6]+DP[7])-C[4]*DP[0]))+DP[7]*(DP[0]*(C[12]*DP[1]+C[6]*DP[2]-C[4]*
 DP[8])+DP[1]*(C[13]-C[10]*DP[7])+C[11]*DP[2]+C[2]*DP[8]*DP[7])+DP[0]*(
 DP[8]*(C[6]*DP[0]-C[7]))));
R=+DP[0]*(DP[5]*(DP[7]*(DP[0]*(DP[12]*(C[12]*(-DP[1]-DP[3])+C[6]*(-DP[2]-
 DP[4])+C[4]*(DP[8]+DP[9]))+DP[13]*(C[12]*(-DP[1]-DP[3])+C[6]*(-DP[2]-
 DP[4])+C[4]*(DP[8]+DP[9]))+S[2]*(C[4]*DP[14]-C[12]*DP[10]-C[6]*DP[11])+
 DP[5]*(C[12]*DP[10]+C[6]*DP[11]-C[4]*DP[14])+C[27]*DP[10]+C[8]*DP[11]-C[5]*
 DP[14])+DP[7]*(C[10]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[2]-DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[2]))+C[3]*DP[14]-C[25]*DP[10])+C[13]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[11]*(DP[2]*(-DP[12]-DP[13])+DP[4]*
 (-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[28]*DP[10]+C[26]*DP[11])+DP[0]*(
 DP[0]*(C[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-
 S[2]))+C[8]*DP[14])+C[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5]))-C[9]*DP[14])+tmp[0])+tmp[1]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*-9)/(-16);
  cb_coeff_out[2] += (R*-9)/(-16);
 }
 return R;
}
