/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F20_out;
static void C20(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[13]*V[13];
S[1]=V[8]*V[8]*V[8]*V[8];
C[8]=+S[0]*S[1];
S[2]=V[8]*V[8];
C[7]=+4*S[0]*S[2];
C[6]=+4*S[0];
C[5]=+2*S[0]*S[2];
C[4]=+8*S[2];
C[3]=+2*S[1];
C[2]=+4*S[2];
S[3]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[3];
S[4]=V[33]*V[33]*V[33]*V[33];
S[5]=V[25]*V[25];
S[6]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[4]*S[5]*S[6];
}
REAL F20_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   u                       n2     !  n2                      u       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   D  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  D       
 ==<==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@-->3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P5     !  P5             |                
            |                     !                 |                
            |              B      !  B              |                
            \==============<======!==<==============/                
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C20(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
R=+DP[10]*(DP[5]*(C[2]*(DP[0]*(DP[8]*(DP[12]-DP[1]-DP[3]+DP[13])+DP[9]*(
 DP[12]-DP[1]-DP[3]+DP[13])+S[1]*(DP[14]-DP[6])+DP[5]*(DP[6]-DP[14]))+
 DP[11]*(DP[8]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[9]*(DP[1]+DP[3]-DP[12]-
 DP[13])+S[1]*(DP[6]-DP[14])+DP[5]*(DP[14]-DP[6]))+DP[10]*(DP[2]*(-DP[8]-
 DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[1])))+C[5]*(DP[2]*(DP[8]+DP[9])+
 DP[4]*(DP[8]+DP[9])+DP[7]*(S[1]-DP[5]))+C[3]*(DP[0]*(DP[6]-DP[14])+DP[11]*(
 DP[14]-DP[6])+DP[10]*DP[7])-C[8]*DP[7])+S[1]*(DP[8]*(S[1]*(8*(DP[0]*(
 DP[13]-DP[3])+DP[11]*(DP[3]-DP[13])-DP[10]*DP[4])+C[6]*DP[4])+C[4]*(DP[0]*(
 DP[1]-DP[12])+DP[11]*(DP[12]-DP[1])+DP[10]*DP[2])+C[2]*(DP[0]*(DP[3]-
 DP[13])+DP[11]*(DP[13]-DP[3])+DP[10]*DP[4])-C[7]*DP[2]-C[5]*DP[4])+DP[9]*(
 C[2]*(DP[0]*(DP[1]-DP[12])+DP[11]*(DP[12]-DP[1])+DP[10]*DP[2])-C[5]*
 DP[2])));
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}