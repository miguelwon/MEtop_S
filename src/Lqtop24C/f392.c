/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F392_out;
static void C392(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[11]*V[11]*V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[25]=+S[2]*(S[1]*(V[17]*(V[17]-2*V[18])+S[0]));
S[3]=V[17]*V[17];
S[4]=V[11]*V[11];
C[24]=+S[2]*(S[4]*(8*(S[0]+S[3])));
C[23]=+S[2]*(S[4]*(V[17]*(6*V[17]-4*V[18])+6*S[0]));
S[5]=V[8]*V[8];
C[22]=+S[1]*(S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]));
C[21]=+S[1]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[20]=+S[5]*(S[4]*(32*(S[0]+S[3])));
C[19]=+S[5]*(S[4]*(V[17]*(24*V[17]-16*V[18])+24*S[0]));
C[18]=+S[4]*(32*(S[0]+S[3]));
C[17]=+S[4]*(V[17]*(24*V[17]-16*V[18])+24*S[0]);
C[16]=+S[5]*(S[4]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[15]=+S[5]*(S[4]*(V[17]*(16*V[17]-32*V[18])+16*S[0]));
C[14]=+S[5]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[13]=+S[4]*(V[17]*(16*V[18]+8*V[17])+8*S[0]);
C[12]=+S[4]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[11]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[10]=+S[1]*(S[5]*(V[17]*(2*V[17]-4*V[18])+2*S[0]));
C[9]=+S[5]*(S[4]*(16*(S[0]+S[3])));
C[8]=+S[5]*(S[4]*(V[17]*(12*V[17]-8*V[18])+12*S[0]));
C[7]=+S[2]*(S[4]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[6]=+S[5]*(S[4]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[5]=+S[2]*(S[4]*(V[17]*(4*V[17]-8*V[18])+4*S[0]));
C[4]=+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[3]=+S[5]*(S[4]*(V[17]*(8*V[17]-16*V[18])+8*S[0]));
C[2]=+S[5]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[6]*S[7];
S[8]=V[33]*V[33];
S[9]=V[15]*V[15];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[8]*S[9]*S[10];
}
REAL F392_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 U      !  U                 G             
       -1---@==============<======!==<==============@---1-           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           t|P7         /==>======!==>==\          t|-PA             
            |           |  P3     !  P3 |           |                
            |           |         !     |           |                
         G  |  t     W+ |  E2     !  E2 |  W+    t  |  G             
       -2---@==>==@-3>--@==<======!==<==@-->4-@==>==@---2-           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[26];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C392(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[6]*(DP[5]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2])))+DP[12]*(C[9]*(DP[1]+DP[3])+
 C[8]*(DP[2]+DP[4])+C[3]*(-DP[8]-DP[9]))+DP[13]*(C[9]*(DP[1]+DP[3])+C[8]*(
 DP[2]+DP[4])+C[3]*(-DP[8]-DP[9]))+DP[10]*(C[9]*(S[2]-DP[5])+C[4]*(-DP[6]-
 DP[7])-C[24])+DP[11]*(C[8]*(S[2]-DP[5])+C[4]*(-DP[6]-DP[7])-C[23])+DP[14]*(
 C[3]*(DP[5]-S[2])+C[5]+C[4]*DP[0]))+S[2]*(DP[12]*(S[2]*(C[11]*(DP[3]*(
 DP[6]+DP[7])+DP[4]*(DP[6]+DP[7])-DP[9]*DP[0])+C[18]*DP[3]+C[17]*DP[4]-
 C[12]*DP[9])+C[14]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+
 C[2]*(DP[3]*(-DP[6]-DP[7])+DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+C[15]*DP[8]-
 C[20]*DP[1]-C[19]*DP[2]-C[9]*DP[3]-C[8]*DP[4]+C[3]*DP[9])+DP[13]*(C[2]*(
 DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[3]*DP[8]-C[9]*
 DP[1]-C[8]*DP[2])));
R=+DP[6]*(DP[5]*(C[6]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*
 (DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5])))+C[10]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[7]*(
 DP[0]*(DP[14]-DP[11])-DP[10]*DP[7])-C[25]*DP[10])+S[2]*(DP[12]*(DP[0]*(
 S[2]*(C[13]*(DP[4]-DP[9]))+C[16]*(DP[8]-DP[2])+C[6]*(DP[9]-DP[4]))+DP[3]*(
 S[2]*(C[21]+C[13]*DP[7])-C[10]-C[6]*DP[7])+DP[1]*(-C[22]-C[16]*DP[7]))+
 DP[13]*(C[6]*(DP[0]*(DP[8]-DP[2])-DP[7]*DP[1])-C[10]*DP[1]))+tmp[0]);
R*=(N/D)*Q2[5]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*81)/(64);
 }
 return R;
}
