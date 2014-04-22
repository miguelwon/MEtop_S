/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F79_out;
static void C79(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[38]=+8*S[0];
S[1]=V[13]*V[13]*V[13]*V[13];
C[37]=+2*S[1]*S[0];
S[2]=V[13]*V[13];
S[3]=V[8]*V[8];
C[36]=+S[3]*(S[2]*(4*(S[2]+S[3])));
C[35]=+S[3]*(8*(S[2]-S[3]));
C[34]=+S[2]*(8*(S[2]+S[3]));
C[33]=+16*(S[2]-S[3]);
S[4]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[32]=+4*S[4]*S[3];
C[31]=+48*S[2]*S[3];
C[30]=+16*S[1]*S[3];
C[29]=+32*S[3];
C[28]=+32*S[2]*S[3];
C[27]=+S[1]*(4*(S[2]+S[3]));
C[26]=+8*S[1];
C[25]=+S[2]*(16*(S[2]+S[3]));
C[24]=+S[2]*(16*S[2]+24*S[3]);
C[23]=+48*S[2]+16*S[3];
C[22]=+S[2]*(16*S[2]+8*S[3]);
C[21]=+32*S[2]+16*S[3];
C[20]=+32*S[2];
C[19]=+16*S[2];
C[18]=+S[4]*S[0];
C[17]=+S[1]*(S[3]*(2*(S[2]+S[3])));
C[16]=+2*S[4]*S[3];
C[15]=+4*S[1]*S[3];
C[14]=+S[3]*(S[2]*(8*(S[2]+S[3])));
C[13]=+S[3]*(S[2]*(8*S[2]+12*S[3]));
C[12]=+S[3]*(24*S[2]+8*S[3]);
C[11]=+24*S[2]*S[3];
C[10]=+4*S[1]*S[0];
C[9]=+S[3]*(S[2]*(8*S[2]+4*S[3]));
C[8]=+8*S[1]*S[3];
C[7]=+S[3]*(16*S[2]+8*S[3]);
C[6]=+8*S[2]*S[0];
C[5]=+16*S[3];
C[4]=+16*S[2]*S[3];
C[3]=+4*S[2]*S[0];
C[2]=+8*S[2]*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[33]*V[33];
S[7]=V[31]*V[31];
S[8]=V[27]*V[27];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F79_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   U                       N2     !  N2                      U       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   b  |  W+    t     W+ |  e2     !  e2 |  W+    t     W+ |  b       
 ==>==@-1<--@==<==@-2<--@==>======!==>==@--<4-@==<==@--<3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              d      !  d              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[39];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C79(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])-
 DP[6]*DP[4])+C[20]*(DP[9]-DP[3])-C[19]*DP[4])+DP[0]*(C[29]*(DP[1]-DP[8])+
 C[5]*DP[3]+C[19]*DP[4]-C[23]*DP[9])+DP[7]*(C[29]*(DP[8]-DP[1])+C[33]*DP[3]-
 C[19]*DP[4]+C[21]*DP[9])+DP[6]*(C[29]*DP[2]-C[33]*DP[4]+C[20]*DP[9])+C[28]*
 (DP[1]-DP[8])+C[4]*(DP[2]+DP[3])+C[34]*DP[4]-C[25]*DP[9])+DP[5]*(C[5]*(
 DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-
 DP[2]-DP[4]))+C[4]*(DP[8]-DP[1]-DP[3]+DP[9])+C[2]*(-DP[2]-DP[4]))+DP[0]*(
 DP[9]*(C[20]*(DP[0]-DP[7])+C[24]-C[19]*DP[6])+C[31]*DP[8]-C[4]*DP[2]-C[2]*
 DP[4])+DP[7]*(C[4]*(DP[2]-DP[1]-DP[9])+C[2]*(DP[4]-DP[3])-C[28]*DP[8])+
 DP[6]*(C[4]*(DP[2]-DP[9])+C[2]*DP[4]-C[28]*DP[8])+C[8]*(DP[9]-DP[2])+C[30]*
 DP[8]-C[15]*DP[4]);
S[2]=DP[0]*DP[0];
tmp[1]=+DP[5]*(C[2]*(DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+DP[0]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5]-DP[14]*DP[6])+DP[6]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+C[4]*(DP[7]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(-DP[0]-DP[5]))+DP[6]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*S[2])+DP[0]*(C[11]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[13]*DP[14]-
 C[3]*DP[11])+C[15]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 DP[7]*(C[3]*(DP[11]-DP[10])-C[6]*DP[14])+DP[6]*(C[3]*DP[11]-C[6]*DP[14])+
 C[10]*DP[14]-C[37]*DP[11])+DP[0]*(DP[8]*(DP[12]*(C[28]*(DP[7]-DP[0])+C[4]*
 DP[6]-C[30])+DP[13]*(C[4]*(DP[7]-DP[0])+C[2]*DP[6]-C[8]))+DP[9]*(DP[12]*(
 C[4]*(DP[7]-DP[0])+C[2]*DP[6]-C[8])));
tmp[2]=+DP[0]*(DP[7]*(DP[12]*(S[1]*(DP[9]*(C[19]*(-S[1]-DP[7])+C[22]+C[20]*
 DP[0])+DP[3]*(C[2]-C[19]*S[1])+C[4]*(DP[1]+DP[8]))+C[2]*(DP[5]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[9]*DP[7])+DP[8]*(C[4]*DP[7]-C[30]-C[28]*DP[0])+DP[9]*
 (-C[8]-C[4]*DP[0]))+DP[5]*(C[2]*(DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[14]*(
 DP[5]-S[1]-DP[7])+DP[10]*(DP[5]-S[1]))+DP[14]*(C[9]+C[4]*DP[0])+C[3]*
 DP[10])+DP[13]*(DP[8]*(C[2]*(S[1]+DP[7])-C[8]-C[4]*DP[0])+C[2]*DP[1]*
 S[1]))+DP[0]*(DP[12]*(DP[9]*(S[1]*(C[19]*(S[1]-DP[0])-C[22])+C[2]*(DP[0]+
 DP[5])+C[8])+DP[8]*(C[4]*(DP[0]-S[1])+C[30]+C[2]*DP[5]))+C[2]*(DP[5]*(
 DP[14]*(S[1]-DP[0]-DP[5])+DP[13]*(DP[8]+DP[9]))+DP[8]*(DP[13]*(DP[0]-
 S[1])))+C[8]*DP[13]*DP[8]-C[9]*DP[14]*DP[5])+DP[5]*(C[15]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-C[17]*DP[14])+DP[12]*(
 S[1]*(DP[9]*(C[26]*S[1]-C[27])-C[8]*DP[8])+C[32]*DP[8]+C[16]*DP[9])+DP[8]*(
 DP[13]*(C[16]-C[15]*S[1])))+DP[7]*(DP[5]*(DP[7]*(C[2]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[3]*DP[10])+C[15]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[37]*
 DP[10])+S[1]*(DP[12]*(DP[3]*(S[1]*(C[19]*DP[7]-C[26])+C[15]-C[2]*DP[7])+
 DP[1]*(C[8]-C[4]*DP[7]))+DP[1]*(DP[13]*(C[15]-C[2]*DP[7]))));
tmp[3]=+DP[0]*(DP[5]*(DP[0]*(C[4]*(DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])+DP[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5]))+DP[0]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[3]*DP[14])+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+DP[14]*(C[6]*(-DP[6]-DP[7])+C[10]))+DP[6]*(
 DP[6]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[3]*DP[14])+DP[7]*(C[4]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[6]*DP[14])+C[8]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])-C[10]*DP[14])+DP[7]*(DP[7]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14])+C[8]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[10]*DP[14])+C[16]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[18]*DP[14]));
R=+S[1]*(DP[6]*(S[1]*(DP[5]*(C[5]*(DP[13]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[2]-DP[4]))+S[1]*(DP[0]*(DP[14]-
 DP[10])+DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[5]*(DP[0]*(DP[10]-DP[14])+
 DP[7]*(DP[14]-DP[10])+DP[11]*DP[6]))+C[4]*(DP[13]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[14]*(S[1]-DP[5]+DP[6])+DP[10]*(DP[5]-S[1]))+DP[11]*(C[2]*(DP[0]-
 S[1]+DP[5]-DP[7])+C[36]-C[35]*DP[6])+DP[10]*(C[6]+C[38]*DP[0]+C[35]*DP[7])+
 DP[14]*(C[7]*DP[7]-C[14]-C[12]*DP[0])+DP[13]*(C[2]*(-DP[2]-DP[4])))+DP[13]*
 (S[1]*(C[5]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[4]*(
 DP[1]-DP[8])+C[2]*DP[2])+DP[2]*(C[2]*(DP[6]-DP[0]+DP[7])-C[15])+DP[8]*(
 C[4]*(-DP[6]-DP[7])+C[8]+C[11]*DP[0])-C[2]*DP[7]*DP[1])+tmp[0])+tmp[1])+
 tmp[2])+tmp[3];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
