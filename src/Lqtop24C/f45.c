/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F45_out;
static void C45(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[18]*V[18];
S[1]=V[8]*V[8]*V[8]*V[8];
C[12]=+S[1]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[2]=V[8]*V[8];
C[11]=+S[2]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[10]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
S[3]=V[11]*V[11];
C[9]=+S[2]*(S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[8]=+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[7]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[6]=+S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[5]=+S[1]*(S[3]*(V[17]*(2*V[18]+V[17])+S[0]));
C[4]=+S[2]*(S[3]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[3]=+S[1]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[2]=+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[4]*S[5];
S[6]=V[33]*V[33];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[6]*S[7]*S[8];
}
REAL F45_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  U                 U          
                                    /!==<==============@==<==        
                                    |!  P5             |  P1         
                                    |!                 |             
      U                       n2    |!  n2             |             
    ==<==\                 /==>=====+!==>==\          G|-PA          
      P1 |                 |  P3    |!  P3 |           3             
         |                 |        |!     |           |             
      u  |  G     t     W+ |  E2    |!  E2 |  W+    t  |  u          
    ==>==@-1---@==>==@-2>--@==<=====+!==<==@-->4-@==>==@==>==        
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
static REAL C[13];REAL S[4];REAL tmp[1];                                    
     
if(CalcConst) C45(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
S[3]=DP[7]*DP[7];
tmp[0]=+DP[5]*(C[2]*(DP[0]*(DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*
 (DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+S[2]*
 (-DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*
 (DP[12]+DP[13])+DP[14]*(S[2]-DP[5])))+DP[6]*(DP[7]*(DP[12]*(DP[1]-DP[2]+
 DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+S[2]*(DP[10]-DP[11])+DP[5]*(
 DP[11]-DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2])))+S[3]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5])))+DP[0]*(DP[6]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[3]*(DP[11]-DP[14])+C[12]*DP[10])+
 C[4]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+
 DP[14]*(C[3]*(DP[7]-DP[0])+C[5])+C[3]*DP[10]*DP[7])+C[4]*(DP[6]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+DP[7]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5])))+DP[6]*(DP[11]*(
 C[3]*(DP[6]+DP[7])+C[5])-C[3]*DP[10]*DP[7])+DP[7]*(DP[10]*(-C[5]-C[3]*
 DP[7])));
R=+DP[7]*(S[2]*(DP[12]*(DP[0]*(DP[6]*(S[2]*(C[7]*(DP[9]-DP[4])-C[10]*DP[3])+
 C[6]*(DP[2]+DP[3]-DP[8])+C[2]*(DP[4]-DP[9])+C[11]*DP[1])+DP[7]*(S[2]*(C[7]*
 (-DP[3]-DP[9]))+C[6]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9]))+DP[9]*(S[2]*(C[7]*
 DP[0]-C[8])+C[4]-C[2]*DP[0])+DP[8]*(C[9]-C[6]*DP[0]))+DP[6]*(DP[4]*(S[2]*(
 C[7]*(-DP[6]-DP[7])-C[8])+C[2]*(DP[6]+DP[7])+C[4])+DP[7]*(DP[3]*(C[7]*S[2]-
 C[2])+C[6]*(DP[2]-DP[1]))+DP[2]*(C[9]+C[6]*DP[6]))+DP[7]*(DP[3]*(S[2]*(
 C[8]+C[7]*DP[7])-C[4]-C[2]*DP[7])+DP[1]*(-C[9]-C[6]*DP[7])))+DP[13]*(C[2]*(
 DP[0]*(DP[8]*(DP[7]-DP[0]-DP[6])+DP[6]*DP[2]+DP[7]*DP[1])+DP[6]*(DP[2]*(
 DP[6]+DP[7])-DP[7]*DP[1])-S[3]*DP[1])+C[4]*(DP[6]*DP[2]-DP[7]*DP[1]+DP[8]*
 DP[0])+C[6]*DP[6]*DP[1]*DP[0]))+tmp[0]);
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
