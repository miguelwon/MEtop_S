/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F61_out;
static void C61(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[38]=+8*S[0];
S[1]=V[10]*V[10];
S[2]=V[8]*V[8];
C[37]=+S[2]*(S[1]*(8*(S[1]+S[2])));
S[3]=V[10]*V[10]*V[10]*V[10]*V[10]*V[10];
C[36]=+S[3]*S[0];
S[4]=V[10]*V[10]*V[10]*V[10];
C[35]=+S[4]*(S[2]*(2*(S[1]+S[2])));
C[34]=+S[2]*(S[1]*(8*S[1]+12*S[2]));
C[33]=+S[2]*(24*S[1]+8*S[2]);
C[32]=+S[2]*(16*S[1]+8*S[2]);
C[31]=+4*S[4]*S[0];
C[30]=+S[2]*(S[1]*(8*S[1]+4*S[2]));
C[29]=+8*S[1]*S[0];
C[28]=+S[1]*(16*(S[1]+S[2]));
C[27]=+4*S[3]*S[2];
C[26]=+48*S[1]*S[2];
C[25]=+S[4]*(4*(S[1]+S[2]));
C[24]=+S[1]*(16*S[1]+24*S[2]);
C[23]=+48*S[1]+16*S[2];
C[22]=+8*S[4];
C[21]=+32*S[1]+16*S[2];
C[20]=+16*S[4]*S[2];
C[19]=+S[1]*(16*S[1]+8*S[2]);
C[18]=+32*S[1]*S[2];
C[17]=+32*S[1];
C[16]=+32*S[2];
C[15]=+S[1]*(8*(S[1]+S[2]));
C[14]=+16*(S[1]-S[2]);
C[13]=+16*S[1];
C[12]=+2*S[3]*S[2];
C[11]=+24*S[1]*S[2];
C[10]=+8*S[4]*S[2];
C[9]=+16*S[1]*S[2];
C[8]=+2*S[4]*S[0];
C[7]=+S[2]*(S[1]*(4*(S[1]+S[2])));
C[6]=+S[2]*(8*(S[1]-S[2]));
C[5]=+4*S[4]*S[2];
C[4]=+16*S[2];
C[3]=+4*S[1]*S[0];
C[2]=+8*S[1]*S[2];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[33]*V[33];
S[7]=V[31]*V[31];
S[8]=V[26]*V[26];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F61_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 S      !  S                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         D  |  t     W+ |  e2     !  e2 |  W+    t  |  D             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[39];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C61(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[3]*(-DP[6]-DP[7])+DP[4]*(-DP[6]-DP[7])+
 DP[9]*DP[0])+C[17]*(DP[3]+DP[4])-C[13]*DP[9])+DP[6]*(C[16]*(DP[1]+DP[2])+
 C[4]*DP[3]+C[23]*DP[4]-C[13]*DP[9])+DP[7]*(C[16]*(DP[1]+DP[2])+C[21]*DP[4]-
 C[14]*DP[3]-C[13]*DP[9])+DP[0]*(C[14]*DP[9]-C[17]*DP[4]-C[16]*DP[8])+C[18]*
 (-DP[1]-DP[2])+C[9]*(DP[8]-DP[3])+C[15]*DP[9]-C[28]*DP[4])+DP[5]*(C[4]*(
 DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[7]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(
 DP[8]+DP[9]))+C[9]*(DP[1]+DP[2]+DP[3]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[4]*(
 DP[6]*(C[17]*(DP[6]+DP[7])-C[24]-C[13]*DP[0])+C[9]*(DP[0]-DP[7])+C[10])+
 DP[7]*(C[9]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9])-C[18]*DP[2])+DP[0]*(C[18]*
 DP[2]-C[9]*DP[8]-C[2]*DP[9])+DP[6]*(C[9]*DP[8]-C[26]*DP[2]+C[2]*DP[9])+
 C[20]*DP[2]-C[10]*DP[8]-C[5]*DP[9]);
S[2]=DP[6]*DP[6];
tmp[1]=+DP[5]*(C[2]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-
 DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[11]*DP[6]-DP[14]*DP[5])+DP[6]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+C[9]*(DP[7]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(DP[6]-DP[5]))+DP[0]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*S[2])+DP[6]*(
 C[11]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[3]*
 DP[14]-C[34]*DP[11])+C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[5]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[7]*(C[3]*(DP[10]+DP[14])-C[29]*DP[11])+DP[0]*(C[29]*DP[11]-C[3]*
 DP[14])+C[31]*DP[11]-C[8]*DP[14])+DP[6]*(DP[2]*(DP[12]*(C[18]*(-DP[6]-
 DP[7])+C[20]+C[9]*DP[0])+DP[13]*(C[9]*(-DP[6]-DP[7])+C[10]+C[2]*DP[0]))+
 DP[4]*(DP[12]*(C[9]*(-DP[6]-DP[7])+C[10]+C[2]*DP[0])));
tmp[2]=+DP[6]*(DP[7]*(DP[12]*(S[1]*(DP[4]*(C[13]*(-S[1]-DP[7])+C[19]-C[17]*
 DP[6])+DP[3]*(C[13]*S[1]-C[2])+C[9]*(DP[2]-DP[1]))+C[2]*(DP[5]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[7]*DP[4])+DP[2]*(C[18]*DP[6]-C[20]+C[9]*DP[7])+DP[4]*
 (C[9]*DP[6]-C[10]))+DP[5]*(C[2]*(DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[11]*(
 DP[5]-S[1]-DP[7])+DP[10]*(S[1]-DP[5]))+DP[11]*(C[30]-C[9]*DP[6])-C[3]*
 DP[10])+DP[13]*(DP[2]*(C[2]*(S[1]+DP[7])+C[9]*DP[6]-C[10])-C[2]*DP[1]*
 S[1]))+DP[6]*(DP[12]*(DP[4]*(S[1]*(C[13]*(-S[1]-DP[6])+C[19])+C[2]*(DP[6]-
 DP[5])-C[10])+DP[2]*(C[9]*(S[1]+DP[6])-C[20]-C[2]*DP[5]))+C[2]*(DP[5]*(
 DP[11]*(DP[5]-S[1]-DP[6])+DP[13]*(-DP[2]-DP[4]))+DP[2]*(DP[13]*(S[1]+
 DP[6])))+C[30]*DP[11]*DP[5]-C[10]*DP[13]*DP[2])+DP[5]*(C[5]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))-C[35]*DP[11])+DP[12]*(
 S[1]*(DP[4]*(C[22]*S[1]-C[25])-C[10]*DP[2])+C[27]*DP[2]+C[12]*DP[4])+DP[2]*
 (DP[13]*(C[12]-C[5]*S[1])))+DP[7]*(DP[5]*(DP[7]*(C[2]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[3]*DP[10])+C[5]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[8]*
 DP[10])+S[1]*(DP[12]*(DP[3]*(S[1]*(C[13]*DP[7]-C[22])+C[5]-C[2]*DP[7])+
 DP[1]*(C[10]-C[9]*DP[7]))+DP[1]*(DP[13]*(C[5]-C[2]*DP[7]))));
tmp[3]=+DP[5]*(DP[6]*(DP[0]*(C[9]*(DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5]))+DP[0]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[3]*DP[11])+C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[29]*(-DP[6]-DP[7])+C[31]))+DP[6]*(
 DP[2]*(DP[12]*(C[10]-C[2]*DP[6]-C[9]*DP[7])+DP[13]*(C[10]-C[2]*DP[6]-C[9]*
 DP[7]))+DP[4]*(DP[12]*(C[10]-C[2]*DP[6]-C[9]*DP[7])+DP[13]*(C[10]-C[2]*
 DP[6]-C[9]*DP[7]))+DP[11]*(DP[5]*(C[2]*DP[6]-C[10]+C[9]*DP[7])+C[3]*DP[6]-
 C[31]+C[29]*DP[7]))+DP[7]*(DP[7]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+C[3]*DP[11])+C[10]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[31]*DP[11])+C[12]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[36]*DP[11]));
R=+S[1]*(DP[0]*(S[1]*(DP[5]*(C[4]*(DP[13]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[7]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+DP[9]))+S[1]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+DP[5]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11])-DP[14]*DP[0]))+C[9]*(DP[13]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[11]*(S[1]-DP[0]-DP[5])+DP[10]*(S[1]-DP[5]))+DP[14]*(C[2]*(DP[5]-
 S[1]-DP[6]-DP[7])+C[7]+C[6]*DP[0])+DP[10]*(C[38]*DP[6]-C[29]-C[6]*DP[7])+
 DP[11]*(C[33]*DP[6]-C[37]+C[32]*DP[7])+DP[13]*(C[2]*(-DP[8]-DP[9])))+
 DP[13]*(S[1]*(C[4]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])-DP[8]*DP[0])+
 C[9]*(-DP[1]-DP[2])+C[2]*DP[8])+DP[2]*(C[9]*(DP[0]-DP[7])+C[10]-C[11]*
 DP[6])+DP[8]*(C[2]*(DP[6]-DP[0]+DP[7])-C[5])+C[2]*DP[7]*DP[1])+tmp[0])+
 tmp[1])+tmp[2])+tmp[3];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
