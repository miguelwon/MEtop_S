/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F264_out;
static void C264(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[10]*V[10];
S[1]=V[8]*V[8];
C[43]=+S[1]*(S[0]*(4*(S[0]+S[1])));
C[42]=+S[1]*(8*S[0]+4*S[1]);
C[41]=+S[1]*(S[0]*(4*S[0]+2*S[1]));
C[40]=+S[1]*(S[0]*(4*S[0]+6*S[1]));
C[39]=+S[1]*(12*S[0]+4*S[1]);
S[2]=V[8]*V[8]*V[8]*V[8];
C[38]=+4*S[0]*S[2];
C[37]=+S[1]*(S[0]*(2*(S[0]-S[1])));
C[36]=+S[0]*(8*(S[0]+S[1]));
C[35]=+16*S[0]+8*S[1];
C[34]=+S[0]*(8*S[0]+4*S[1]);
C[33]=+24*S[0]*S[1];
C[32]=+S[0]*(8*S[0]+12*S[1]);
C[31]=+24*S[0]+8*S[1];
C[30]=+S[0]*(4*(S[0]-S[1]));
C[29]=+16*S[0]*S[1];
S[3]=V[10]*V[10]*V[10]*V[10]*V[10]*V[10];
C[28]=+4*S[3]*S[1];
C[27]=+16*S[1];
S[4]=V[10]*V[10]*V[10]*V[10];
C[26]=+8*S[4]*S[1];
C[25]=+S[0]*(8*(S[0]-S[1]));
C[24]=+16*S[0];
C[23]=+8*(S[0]-S[1]);
C[22]=+S[4]*(4*(S[0]+S[1]));
C[21]=+S[0]*(4*(S[0]+S[1]));
C[20]=+8*S[0];
C[19]=+4*S[4];
C[18]=+8*S[4];
C[17]=+12*S[0]*S[1];
C[16]=+S[1]*(S[0]*(4*(S[0]-S[1])));
C[15]=+2*S[0]*S[2];
C[14]=+S[1]*(4*(S[0]-S[1]));
C[13]=+8*S[0]*S[1];
C[12]=+S[3]*S[2];
C[11]=+S[4]*(S[1]*(2*(S[0]+S[1])));
C[10]=+S[1]*(S[0]*(2*(S[0]+S[1])));
C[9]=+2*S[3]*S[1];
C[8]=+4*S[0]*S[1];
C[7]=+S[4]*S[2];
C[6]=+4*S[2];
C[5]=+2*S[4]*S[1];
C[4]=+8*S[1];
C[3]=+2*S[4]*S[2];
C[2]=+4*S[4]*S[1];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[5];
S[6]=V[33]*V[33];
S[7]=V[32]*V[32];
S[8]=V[26]*V[26];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F264_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
         S  |              U      !  U              |  S             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[44];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C264(C);
N=+C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[12]*(S[1]*(S[1]*(16*(DP[0]*(DP[3]-DP[9])+DP[7]*(DP[9]-DP[3])+
 DP[6]*DP[4])+C[24]*(DP[3]-DP[9]))+DP[0]*(C[27]*(DP[8]-DP[1])-C[35]*DP[3]-
 C[20]*DP[4]-C[23]*DP[9])+DP[7]*(C[27]*(DP[1]-DP[8])+C[31]*DP[3]+C[20]*
 DP[4]-C[4]*DP[9])+DP[6]*(C[24]*DP[3]-C[27]*DP[2]+C[23]*DP[4])+C[29]*(DP[8]-
 DP[1])-C[36]*DP[3]-C[25]*DP[9])+DP[5]*(C[4]*(DP[0]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[7]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[6]*(DP[2]+DP[4]))+C[13]*(DP[1]+
 DP[3]-DP[8]-DP[9]))+DP[7]*(DP[3]*(C[24]*(DP[7]-DP[0])+C[20]*DP[6]-C[32])+
 C[30]*DP[4]-C[33]*DP[1]-C[13]*DP[2]-C[19]*DP[9])+DP[0]*(C[13]*(DP[2]+DP[3]+
 DP[8])+C[8]*(DP[4]+DP[9])+C[29]*DP[1])+DP[6]*(C[13]*(-DP[2]-DP[3])-C[29]*
 DP[1]-C[8]*DP[4])+C[26]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9]));
S[2]=DP[7]*DP[7];
tmp[1]=+DP[5]*(C[8]*(DP[0]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-
 DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+DP[6]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[10]*DP[7]-DP[11]*DP[5])+DP[7]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5]))+C[13]*(DP[0]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-DP[7]))+DP[6]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+DP[10]*S[2])+C[2]*(
 DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(
 DP[10]+DP[14]))+DP[7]*(C[17]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[37]*DP[11]-C[40]*DP[10]-C[5]*DP[14])+DP[0]*(C[15]*(DP[11]+
 DP[14])+C[38]*DP[10])+DP[6]*(-C[38]*DP[10]-C[15]*DP[11])+C[3]*(DP[10]+
 DP[14]))+DP[7]*(DP[12]*(DP[1]*(C[29]*(DP[0]-DP[7])+C[26]-C[13]*DP[6])+
 DP[3]*(C[13]*(DP[0]-DP[7])+C[2]-C[8]*DP[6])+C[2]*(DP[8]-DP[2])+C[5]*(DP[9]-
 DP[4]))+DP[13]*(DP[1]*(C[13]*(DP[0]-DP[7])+C[2]-C[8]*DP[6])+C[5]*(DP[8]-
 DP[2])));
tmp[2]=+DP[7]*(DP[12]*(DP[0]*(S[1]*(DP[3]*(C[20]*(DP[0]-S[1])+C[34]-C[24]*
 DP[7])+DP[9]*(C[21]-C[20]*S[1])+C[13]*(DP[1]+DP[8])-C[19]*DP[4])+C[8]*(
 DP[5]*(-DP[1]-DP[3]-DP[8]-DP[9])-DP[3]*DP[0])+DP[1]*(C[29]*DP[7]-C[26]-
 C[13]*DP[0])+C[2]*(DP[2]-DP[3]-DP[8])+C[5]*(DP[4]-DP[9])+C[13]*DP[7]*
 DP[3])+DP[7]*(S[1]*(DP[3]*(C[20]*(S[1]+DP[7])-C[21])+C[18]*(DP[4]-DP[9])-
 C[13]*DP[1])+DP[1]*(C[2]+C[8]*DP[5]-C[13]*DP[7])+DP[3]*(C[8]*(DP[5]-DP[7])+
 C[5])+C[26]*(DP[8]-DP[2])+C[2]*(DP[9]-DP[4]))+S[1]*(S[1]*(C[18]*(DP[4]-
 DP[9]))+C[26]*(DP[8]-DP[2])+C[22]*(DP[9]-DP[4]))+DP[5]*(C[2]*(DP[2]+DP[4]-
 DP[8]-DP[9]))+C[28]*(DP[2]-DP[8])+C[9]*(DP[4]-DP[9]))+DP[5]*(C[8]*(DP[0]*(
 DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[10]*(DP[0]-S[1]+DP[5])+DP[14]*(DP[5]-
 S[1]))+DP[7]*(DP[10]*(S[1]-DP[5]+DP[7])+DP[13]*(DP[1]+DP[3])))+C[2]*(
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-DP[5]+DP[7])+DP[14]*(DP[5]-
 S[1]-DP[7]))+DP[0]*(DP[10]*(C[41]-C[13]*DP[7])+C[10]*DP[14]-C[5]*DP[11])+
 C[11]*(DP[14]-DP[11])-C[10]*DP[10]*DP[7])+DP[13]*(DP[0]*(DP[1]*(C[8]*(S[1]-
 DP[0])+C[13]*DP[7]-C[2])+DP[8]*(C[8]*S[1]-C[5])+C[5]*DP[2])+DP[7]*(DP[1]*(
 C[8]*(-S[1]-DP[7])+C[5])+C[2]*(DP[8]-DP[2]))+S[1]*(C[2]*(DP[8]-DP[2]))+
 C[9]*(DP[2]-DP[8])));
tmp[3]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[13]*(-DP[6]-DP[7])+C[2]+C[8]*
 DP[0])+DP[3]*(C[13]*(-DP[6]-DP[7])+C[2]+C[8]*DP[0])+C[5]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[13]*(DP[1]*(C[13]*(-DP[6]-DP[7])+C[2]+C[8]*DP[0])+DP[3]*(
 C[13]*(-DP[6]-DP[7])+C[2]+C[8]*DP[0])+C[5]*(DP[8]-DP[2]-DP[4]+DP[9]))+
 DP[10]*(DP[5]*(C[13]*(DP[6]+DP[7])-C[2]-C[8]*DP[0])+C[38]*(DP[6]+DP[7])-
 C[3]-C[15]*DP[0])+DP[5]*(C[5]*(DP[11]-DP[14]))+C[7]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(C[5]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[8]*DP[6]-C[2]+C[13]*
 DP[7])+DP[3]*(C[8]*DP[6]-C[2]+C[13]*DP[7]))+DP[13]*(C[5]*(DP[2]+DP[4]-
 DP[8]-DP[9])+DP[1]*(C[8]*DP[6]-C[2]+C[13]*DP[7])+DP[3]*(C[8]*DP[6]-C[2]+
 C[13]*DP[7]))+DP[10]*(DP[5]*(C[2]-C[8]*DP[6]-C[13]*DP[7])+C[3]-C[15]*DP[6]-
 C[38]*DP[7])+DP[5]*(C[5]*(DP[14]-DP[11]))+C[7]*(DP[14]-DP[11]))+DP[7]*(
 C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[5]*(DP[14]-DP[11]))+DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])-C[15]*DP[10])+C[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[3]*(DP[14]-DP[11])+C[7]*DP[10])+C[9]*(
 DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(
 DP[11]-DP[14]))+C[12]*(DP[11]-DP[14])));
R=+S[1]*(DP[6]*(S[1]*(DP[5]*(C[4]*(DP[13]*(DP[0]*(DP[1]+DP[3]-DP[8]-DP[9])+
 DP[7]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[6]*(DP[2]+DP[4]))+S[1]*(DP[0]*(DP[10]-
 DP[14])+DP[7]*(DP[14]-DP[10])+DP[11]*DP[6])+DP[5]*(DP[0]*(DP[14]-DP[10])+
 DP[7]*(DP[10]-DP[14])-DP[11]*DP[6]))+C[13]*(DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[10]*(S[1]-DP[5]+DP[6])+DP[14]*(DP[5]-S[1]))+DP[0]*(-C[42]*DP[10]-
 C[8]*DP[11]-C[14]*DP[14])+DP[7]*(C[39]*DP[10]+C[8]*DP[11]-C[6]*DP[14])+
 C[14]*DP[11]*DP[6]-C[43]*DP[10]-C[16]*DP[14])+DP[13]*(S[1]*(C[4]*(DP[0]*(
 DP[8]-DP[1])+DP[7]*(DP[1]-DP[8])-DP[6]*DP[2])+C[13]*(DP[8]-DP[1]))+DP[1]*(
 C[13]*(DP[0]-DP[6])+C[2]-C[17]*DP[7])+C[8]*(DP[2]*(DP[0]-DP[6]-DP[7])+
 DP[8]*DP[0])+C[2]*DP[8])+tmp[0])+tmp[1])+DP[0]*(DP[5]*(DP[0]*(C[8]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-C[15]*DP[14])+
 C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-
 C[3]*DP[14])+S[1]*(DP[12]*(DP[9]*(S[1]*(C[18]+C[20]*DP[0])-C[2]-C[8]*
 DP[0])+DP[8]*(-C[26]-C[13]*DP[0]))+DP[8]*(DP[13]*(-C[2]-C[8]*DP[0]))))+
 tmp[2])+tmp[3];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
