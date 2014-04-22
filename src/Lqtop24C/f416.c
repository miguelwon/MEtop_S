/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F416_out;
static void C416(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[20]*V[20];
S[3]=V[8]*V[8]*V[8]*V[8];
C[20]=+S[3]*(S[1]*(V[19]*(S[1]*(2*V[20]-V[19])+S[0]*(2*V[20]+V[19]))+S[2]*(
 S[0]-S[1])));
C[19]=+S[3]*(V[19]*(S[1]*(V[19]-2*V[20])+S[0]*(2*V[20]+V[19]))+S[2]*(S[0]+
 S[1]));
S[4]=V[8]*V[8];
C[18]=+S[4]*(S[1]*(V[19]*(S[1]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+
 S[2]*(4*(S[0]-S[1]))));
C[17]=+S[1]*(V[19]*(S[1]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+S[2]*(4*(
 S[0]-S[1])));
C[16]=+S[4]*(V[19]*(S[1]*(4*V[19]-8*V[20])+S[0]*(8*V[20]+4*V[19]))+S[2]*(4*(
 S[0]+S[1])));
C[15]=+V[19]*(S[1]*(4*V[19]-8*V[20])+S[0]*(8*V[20]+4*V[19]))+S[2]*(4*(S[0]+
 S[1]));
C[14]=+S[4]*(S[1]*(V[19]*(16*V[19]-32*V[20])+16*S[2]));
C[13]=+S[4]*(V[19]*(8*V[19]-16*V[20])+8*S[2]);
C[12]=+S[1]*(V[19]*(16*V[19]-32*V[20])+16*S[2]);
C[11]=+S[1]*(V[19]*(8*V[19]-16*V[20])+8*S[2]);
C[10]=+V[19]*(8*V[19]-16*V[20])+8*S[2];
C[9]=+S[4]*(S[1]*(V[19]*(S[1]*(4*V[20]-2*V[19])+S[0]*(4*V[20]+2*V[19]))+
 S[2]*(2*(S[0]-S[1]))));
C[8]=+S[4]*(V[19]*(S[1]*(2*V[19]-4*V[20])+S[0]*(4*V[20]+2*V[19]))+S[2]*(2*(
 S[0]+S[1])));
C[7]=+S[3]*(S[1]*(V[19]*(4*V[19]-8*V[20])+4*S[2]));
C[6]=+S[4]*(S[1]*(V[19]*(8*V[19]-16*V[20])+8*S[2]));
C[5]=+S[3]*(S[1]*(V[19]*(2*V[19]-4*V[20])+2*S[2]));
C[4]=+S[4]*(S[1]*(V[19]*(4*V[19]-8*V[20])+4*S[2]));
C[3]=+S[3]*(V[19]*(2*V[19]-4*V[20])+2*S[2]);
C[2]=+S[4]*(V[19]*(4*V[19]-8*V[20])+4*S[2]);
S[5]=V[14]*V[14];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[5]*S[6];
S[7]=V[33]*V[33];
S[8]=V[16]*V[16];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[7]*S[8]*S[9];
}
REAL F416_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         G     t     W+ |  E2     !  E2 |  W+    t     G             
       -1---@==>==@-3>--@==<======!==<==@-->4-@==>==@---1-           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
           c|P7   \========>======!==>========/    c|-PA             
            |              P6     !  P6             |                
            |                     !                 |                
         G  |              C      !  C              |  G             
       -2---@==============<======!==<==============@---2-           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[21];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C416(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[5]*(DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[2])))+C[8]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[3]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11])+DP[10]*DP[7])+C[19]*DP[10])+DP[0]*(C[4]*(DP[12]*(DP[8]-
 DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+
 DP[5]*(DP[11]-DP[14]))+C[5]*(DP[11]-DP[14]))+DP[6]*(C[6]*(DP[12]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+
 DP[5]*(DP[14]-DP[11]))+C[7]*(DP[14]-DP[11]))+C[9]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[20]*DP[10]);
R=+DP[0]*(S[2]*(DP[12]*(DP[7]*(S[2]*(C[10]*(DP[0]*(DP[9]-DP[4])+DP[6]*(
 DP[4]-DP[9])-DP[7]*DP[3])-C[15]*DP[3])+C[13]*(DP[0]*(DP[2]-DP[8])+DP[6]*(
 DP[8]-DP[2])+DP[7]*DP[1])+C[2]*(DP[0]*(DP[4]-DP[9])+DP[6]*(DP[9]-DP[4])+
 DP[7]*DP[3])+C[16]*DP[1]+C[8]*DP[3])+DP[0]*(S[2]*(C[11]*(DP[9]-DP[4]))+
 C[6]*(DP[2]-DP[8])+C[4]*(DP[4]-DP[9]))+DP[6]*(S[2]*(C[12]*(DP[4]-DP[9]))+
 C[14]*(DP[8]-DP[2])+C[6]*(DP[9]-DP[4]))+DP[3]*(C[9]-C[17]*S[2])+C[18]*
 DP[1])+DP[13]*(DP[7]*(C[2]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*
 DP[1])+C[8]*DP[1])+DP[0]*(C[4]*(DP[2]-DP[8]))+DP[6]*(C[6]*(DP[8]-DP[2]))+
 C[9]*DP[1]))+tmp[0])+DP[6]*(DP[5]*(C[4]*(DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5])))+C[9]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))+C[5]*(DP[6]*(DP[11]-DP[14])-DP[10]*DP[7])-C[20]*DP[10])+S[2]*(
 DP[12]*(DP[6]*(S[2]*(C[11]*(DP[9]-DP[4]))+C[6]*(DP[2]-DP[8])+C[4]*(DP[4]-
 DP[9]))+DP[3]*(S[2]*(C[17]+C[11]*DP[7])-C[9]-C[4]*DP[7])+DP[1]*(-C[18]-
 C[6]*DP[7]))+DP[13]*(C[4]*(DP[6]*(DP[2]-DP[8])-DP[7]*DP[1])-C[9]*DP[1])));
R*=(N/D)*Q2[6]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*81)/(64);
 }
 return R;
}
