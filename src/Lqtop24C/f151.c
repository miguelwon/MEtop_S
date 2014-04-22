/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F151_out;
static void C151(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[13]*V[13];
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
S[4]=V[33]*V[33]*V[33]*V[33];
S[5]=V[25]*V[25];
S[6]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[4]*S[5]*S[6];
}
REAL F151_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         D                 U      !  U                 D             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
          W+|P7         /==>======!==>==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         b  |  t     W+ |  E2     !  E2 |  W+    t  |  b             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C151(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
R=+DP[7]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[1]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1])))+C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[3]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11])+DP[10]*DP[7])-C[8]*DP[10])+S[1]*(DP[12]*(S[1]*(8*(DP[0]*(
 DP[9]-DP[4])+DP[6]*(DP[4]-DP[9])-DP[7]*DP[3])+C[6]*DP[3])+C[5]*(DP[0]*(
 DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+C[2]*(DP[0]*(DP[4]-DP[9])+
 DP[6]*(DP[9]-DP[4])+DP[7]*DP[3])-C[7]*DP[1]-C[4]*DP[3])+DP[13]*(C[2]*(
 DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])-C[4]*DP[1])));
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}