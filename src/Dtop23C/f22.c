/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F22_out;
static void C22(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[14]*V[14];
S[1]=V[8]*V[8];
S[2]=V[19]*V[19];
S[3]=V[12]*V[12];
C[20]=+S[1]*(S[3]*(V[18]*(S[1]*(-4*V[19]-2*V[18])+S[0]*(4*V[19]+2*V[18]))+
 S[2]*(2*(S[0]-S[1]))));
C[19]=+S[1]*(S[0]*(V[18]*(V[18]*(2*(S[0]-S[1])-4*S[3])+V[19]*(4*(S[1]-S[0])-
 8*S[3]))+S[2]*(2*(S[0]-S[1])-4*S[3]))+S[1]*(S[3]*(V[18]*(4*V[19]+2*V[18])+
 2*S[2])));
C[18]=+S[1]*(V[18]*(V[18]*(4*(S[0]-S[3]-S[1]))+V[19]*(8*(S[1]-S[0]-S[3])))+
 S[2]*(4*(S[0]-S[3]-S[1])));
C[17]=+S[1]*(V[18]*(S[3]*(8*V[19]+4*V[18])+S[0]*(8*V[18]-16*V[19]))+S[2]*(8*
 S[0]+4*S[3]));
C[16]=+S[1]*(S[3]*(S[0]*(V[18]*(S[1]*(-2*V[19]-V[18])+S[0]*(2*V[19]+V[18]))+
 S[2]*(S[0]-S[1]))));
C[15]=+S[3]*(V[18]*(S[1]*(-8*V[19]-4*V[18])+S[0]*(8*V[19]+4*V[18]))+S[2]*(4*
 (S[0]-S[1])));
C[14]=+S[1]*(V[18]*(V[18]*(4*(-S[3]-S[1])+8*S[0])+V[19]*(8*(S[1]-S[3])-16*
 S[0]))+S[2]*(4*(-S[3]-S[1])+8*S[0]));
C[13]=+S[1]*(S[3]*(S[0]*(V[18]*(8*V[19]+4*V[18])+4*S[2])));
C[12]=+S[1]*(V[18]*(16*V[18]-32*V[19])+16*S[2]);
C[11]=+S[1]*(S[0]*(V[18]*(V[18]*(2*(S[0]-S[1])+4*S[3])+V[19]*(4*(S[1]-S[0])+
 8*S[3]))+S[2]*(2*(S[0]-S[1])+4*S[3]))+S[1]*(S[3]*(V[18]*(-4*V[19]-2*V[18])-
 2*S[2])));
C[10]=+V[18]*(S[1]*(16*V[19]-8*V[18])+S[0]*(8*V[18]-16*V[19]))+S[2]*(8*(
 S[0]-S[1]));
C[9]=+S[1]*(S[3]*(V[18]*(16*V[19]+8*V[18])+8*S[2]));
C[8]=+S[1]*(S[3]*(V[18]*(8*V[19]+4*V[18])+4*S[2]));
C[7]=+S[1]*(V[18]*(S[3]*(16*V[19]+8*V[18])+S[0]*(8*V[18]-16*V[19]))+S[2]*(8*
 (S[0]+S[3])));
C[6]=+S[1]*(S[3]*(S[0]*(V[18]*(4*V[19]+2*V[18])+2*S[2])));
C[5]=+S[3]*(V[18]*(16*V[19]+8*V[18])+8*S[2]);
C[4]=+S[1]*(V[18]*(8*V[18]-16*V[19])+8*S[2]);
C[3]=+S[1]*(V[18]*(S[3]*(8*V[19]+4*V[18])+S[0]*(4*V[18]-8*V[19]))+S[2]*(4*(
 S[0]+S[3])));
C[2]=+V[18]*(16*V[18]-32*V[19])+16*S[2];
S[4]=V[15]*V[15];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[4]*S[5];
S[6]=V[28]*V[28];
S[7]=V[16]*V[16];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F22_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
          G                 n2    !  n2                G             
        -1---\           /==>=====!==>==\           /---1-           
          P1 |           |  P3    !  P3 |           |  P1            
             |           |        !     |           |                
          u  |  t     W+ |  E2    !  E2 |  W+    t  |  u             
        ==>==@==>==@-2>--@==<=====!==<==@-->3-@==>==@==>==           
          P2    P6 |  P7    P4    !  P4   -P9 | -P8    P2            
                   |              !           |                      
                   |        b     !  b        |                      
                   \========>=====!==>========/                      
                            P5    !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[21];REAL S[3];                                                
     
if(CalcConst) C22(C);
S[0]=GG*GG;
N=-C[0]*S[0];
S[1]=V[29]*V[29]*V[29]*V[29];
D=+C[1]*S[1];
S[2]=V[29]*V[29];
R=+DP[0]*(DP[0]*(DP[0]*(C[4]*(S[2]*(DP[0]-DP[1]+DP[2]-DP[3]-DP[4])+DP[0]*(
 DP[0]-DP[2]-DP[4])+DP[1]*(DP[1]+DP[2]+DP[4])+DP[3]*(DP[2]+DP[3]+DP[4]))+
 DP[0]*(C[12]*(-DP[1]-DP[3])-C[14])+S[2]*(-C[18]-C[2]*DP[4]*S[2])+DP[1]*(
 C[14]+C[12]*DP[3])+C[9]*(-DP[2]-DP[4])+C[19]+C[14]*DP[3])+S[2]*(DP[4]*(
 S[2]*(C[2]*(DP[3]+DP[4])+C[10])+C[4]*DP[1]-C[8])+DP[3]*(-C[8]-C[5]*S[2]-
 C[4]*DP[2])+C[8]*DP[1]-C[20]-C[17]*DP[2])+C[3]*(DP[2]*(DP[1]+DP[2]+DP[3])+
 DP[4]*(DP[1]+DP[3]+DP[4]))+DP[2]*(C[11]+C[7]*DP[4])+C[16]+C[11]*DP[4])+
 DP[3]*(S[2]*(S[2]*(C[5]*(DP[3]+DP[4])+C[15])+C[8]*DP[2])+C[6]*(DP[2]+DP[3]+
 DP[4])+C[16]+C[13]*DP[1])+DP[1]*(C[6]*(DP[1]+DP[2]+DP[4])+S[2]*(-C[13]-
 C[8]*DP[4])+C[16]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}