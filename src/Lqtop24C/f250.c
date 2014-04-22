/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F250_out;
static void C250(REAL * C)
{
REAL* V=va_out;
REAL S[8];                                                                  
     
S[0]=V[10]*V[10];
S[1]=V[8]*V[8]*V[8]*V[8];
C[8]=+S[0]*S[1];
S[2]=V[8]*V[8];
C[7]=+4*S[0]*S[2];
C[6]=+4*S[0];
C[5]=+8*S[2];
C[4]=+2*S[0]*S[2];
C[3]=+2*S[1];
C[2]=+4*S[2];
S[3]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[3];
S[4]=V[33]*V[33];
S[5]=V[32]*V[32];
S[6]=V[25]*V[25];
S[7]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[4]*S[5]*S[6]*S[7];
}
REAL F250_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         s     t     W+ |  E2     !  E2 |  W+    t     s             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
          W+|P7   \========>======!==>========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         D  |              U      !  U              |  D             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C250(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
R=+DP[6]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*
 (DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[1]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*
 (-DP[12]-DP[13])+DP[11]*(DP[5]-S[1])))+C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))+C[3]*(DP[0]*(DP[10]-DP[14])+DP[7]*(
 DP[14]-DP[10])+DP[11]*DP[6])-C[8]*DP[11])+S[1]*(DP[12]*(S[1]*(8*(DP[0]*(
 DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])-DP[6]*DP[4])+C[6]*DP[4])+C[5]*(DP[0]*(
 DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[2]*(DP[0]*(DP[3]-DP[9])+
 DP[7]*(DP[9]-DP[3])+DP[6]*DP[4])-C[7]*DP[2]-C[4]*DP[4])+DP[13]*(C[2]*(
 DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])-C[4]*DP[2])));
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
