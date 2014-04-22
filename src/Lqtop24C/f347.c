/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F347_out;
static void C347(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
S[1]=V[8]*V[8]*V[8]*V[8];
C[43]=+S[0]*S[1];
S[2]=V[13]*V[13];
S[3]=V[8]*V[8];
S[4]=V[13]*V[13]*V[13]*V[13];
C[42]=+S[4]*(S[3]*(2*(S[2]+S[3])));
C[41]=+4*S[0]*S[3];
C[40]=+S[4]*(4*(S[2]+S[3]));
C[39]=+2*S[0]*S[3];
C[38]=+8*S[4];
C[37]=+S[3]*(S[2]*(2*(S[2]-S[3])));
C[36]=+S[3]*(S[2]*(4*(S[2]-S[3])));
C[35]=+4*S[1];
C[34]=+S[2]*(4*(S[2]-S[3]));
C[33]=+S[2]*(8*(S[2]-S[3]));
C[32]=+4*S[4];
C[31]=+S[3]*(4*(S[2]-S[3]));
C[30]=+8*(S[2]-S[3]);
C[29]=+8*S[4]*S[3];
C[28]=+24*S[2]*S[3];
C[27]=+16*S[3];
C[26]=+16*S[2]*S[3];
C[25]=+S[2]*(4*(S[2]+S[3]));
C[24]=+S[2]*(8*S[2]+4*S[3]);
C[23]=+S[2]*(8*(S[2]+S[3]));
C[22]=+S[2]*(8*S[2]+12*S[3]);
C[21]=+24*S[2]+8*S[3];
C[20]=+16*S[2]+8*S[3];
C[19]=+16*S[2];
C[18]=+8*S[2];
C[17]=+S[4]*S[1];
C[16]=+S[3]*(S[2]*(2*(S[2]+S[3])));
C[15]=+2*S[4]*S[3];
C[14]=+S[3]*(S[2]*(4*S[2]+2*S[3]));
C[13]=+S[3]*(S[2]*(4*(S[2]+S[3])));
C[12]=+2*S[4]*S[1];
C[11]=+S[3]*(S[2]*(4*S[2]+6*S[3]));
C[10]=+S[3]*(12*S[2]+4*S[3]);
C[9]=+4*S[4]*S[3];
C[8]=+12*S[2]*S[3];
C[7]=+S[3]*(8*S[2]+4*S[3]);
C[6]=+8*S[3];
C[5]=+4*S[2]*S[1];
C[4]=+2*S[2]*S[1];
C[3]=+8*S[2]*S[3];
C[2]=+4*S[2]*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[5];
S[6]=V[33]*V[33]*V[33]*V[33];
S[7]=V[27]*V[27];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F347_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   B                       n2     !  n2                      B       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  u       
 ==>==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@-->3-@==>==     
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
static REAL C[44];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C347(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[8]*(S[1]*(S[1]*(16*(DP[0]*(DP[13]-DP[4])+DP[10]*(DP[4]-DP[13])-
 DP[11]*DP[3])+C[19]*(DP[13]-DP[4]))+DP[0]*(C[27]*(DP[2]-DP[12])+C[18]*
 DP[3]+C[6]*DP[4]-C[21]*DP[13])+DP[10]*(C[27]*(DP[12]-DP[2])+C[30]*DP[4]-
 C[18]*DP[3]+C[20]*DP[13])+DP[11]*(C[27]*DP[1]-C[30]*DP[3]+C[19]*DP[13])+
 C[26]*(DP[2]-DP[12])-C[33]*DP[4]-C[23]*DP[13])+DP[5]*(C[6]*(DP[0]*(DP[12]-
 DP[2]-DP[4]+DP[13])+DP[10]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[11]*(-DP[1]-
 DP[3]))+C[3]*(DP[12]-DP[2]-DP[4]+DP[13]))+DP[0]*(DP[13]*(C[19]*(DP[0]-
 DP[10])+C[22]-C[18]*DP[11])+C[34]*DP[3]-C[3]*DP[1]+C[32]*DP[4]+C[28]*
 DP[12])+DP[10]*(C[3]*(DP[1]-DP[2]-DP[13])+C[2]*(DP[3]-DP[4])-C[26]*DP[12])+
 DP[11]*(C[3]*(DP[1]-DP[13])+C[2]*DP[3]-C[26]*DP[12])+C[29]*(DP[2]+DP[12])+
 C[9]*(DP[4]+DP[13]));
S[2]=DP[0]*DP[0];
tmp[1]=+DP[5]*(C[2]*(DP[10]*(DP[8]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[9]*(DP[2]-
 DP[1]-DP[3]+DP[4])+DP[5]*(DP[6]-DP[7]))+DP[0]*(DP[1]*(DP[8]+DP[9])+DP[3]*(
 DP[8]+DP[9])-DP[6]*DP[5]-DP[14]*DP[11])+DP[11]*(DP[1]*(-DP[8]-DP[9])+DP[3]*
 (-DP[8]-DP[9])+DP[6]*DP[5]))+C[3]*(DP[10]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(-DP[0]-DP[5]))+DP[11]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*S[2])+C[9]*(DP[8]*(-DP[2]-DP[4]-DP[12]-
 DP[13])+DP[9]*(-DP[2]-DP[4]-DP[12]-DP[13])+DP[5]*(DP[7]+DP[14]))+DP[0]*(
 C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[37]*
 DP[6]+C[15]*DP[7]+C[11]*DP[14])+DP[10]*(C[4]*(DP[6]-DP[7])-C[5]*DP[14])+
 DP[11]*(C[4]*DP[6]-C[5]*DP[14])+C[12]*(DP[7]+DP[14]))+DP[0]*(DP[8]*(DP[12]*
 (C[26]*(DP[10]-DP[0])+C[3]*DP[11]-C[29])+DP[13]*(C[3]*(DP[10]-DP[0])+C[2]*
 DP[11]-C[9])+C[9]*(-DP[1]-DP[2])+C[15]*(-DP[3]-DP[4]))+DP[9]*(DP[12]*(C[3]*
 (DP[10]-DP[0])+C[2]*DP[11]-C[9])+C[15]*(-DP[1]-DP[2])));
tmp[2]=+DP[0]*(DP[8]*(DP[10]*(S[1]*(DP[13]*(C[18]*(-S[1]-DP[10])+C[24]+
 C[19]*DP[0])+DP[4]*(C[25]-C[18]*S[1])+C[3]*(DP[2]+DP[12])+C[32]*DP[3])+
 C[2]*(DP[5]*(-DP[2]-DP[4]-DP[12]-DP[13])+DP[13]*DP[10])+DP[12]*(C[3]*
 DP[10]-C[29]-C[26]*DP[0])+C[9]*(-DP[1]-DP[2]-DP[13])+C[15]*(-DP[3]-DP[4])-
 C[3]*DP[13]*DP[0])+DP[0]*(S[1]*(DP[13]*(C[18]*(S[1]-DP[0])-C[25])+C[38]*(-
 DP[3]-DP[4])-C[3]*DP[12])+DP[12]*(C[9]+C[3]*DP[0]+C[2]*DP[5])+DP[13]*(C[2]*
 (DP[0]+DP[5])+C[15])+C[29]*(DP[1]+DP[2])+C[9]*(DP[3]+DP[4]))+S[1]*(S[1]*(
 C[38]*(DP[3]+DP[4]))+C[29]*(-DP[1]-DP[2])+C[40]*(-DP[3]-DP[4]))+DP[5]*(
 C[9]*(DP[1]+DP[2]+DP[3]+DP[4]))+C[41]*(DP[1]+DP[2])+C[39]*(DP[3]+DP[4]))+
 DP[5]*(C[2]*(DP[10]*(DP[9]*(-DP[2]-DP[4]-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]-
 DP[10])+DP[7]*(DP[5]-S[1]))+DP[0]*(DP[14]*(S[1]-DP[0]-DP[5])+DP[9]*(DP[12]+
 DP[13])))+C[9]*(DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[6]*(S[1]-DP[0]-DP[5])+
 DP[7]*(S[1]-DP[0]-DP[5]))+DP[10]*(DP[14]*(C[14]+C[3]*DP[0])+C[15]*DP[6]+
 C[16]*DP[7])+C[42]*(-DP[6]-DP[7])-C[16]*DP[14]*DP[0])+DP[9]*(DP[10]*(
 DP[12]*(C[2]*(S[1]+DP[10])-C[9]-C[3]*DP[0])+DP[2]*(C[2]*S[1]-C[15])-C[15]*
 DP[1])+DP[0]*(DP[12]*(C[2]*(DP[0]-S[1])+C[15])+C[9]*(DP[1]+DP[2]))+S[1]*(
 C[9]*(-DP[1]-DP[2]))+C[39]*(DP[1]+DP[2])));
tmp[3]=+DP[0]*(DP[5]*(DP[0]*(DP[8]*(DP[12]*(C[3]*(DP[10]+DP[11])-C[15]-C[2]*
 DP[0])+DP[13]*(C[3]*(DP[10]+DP[11])-C[15]-C[2]*DP[0])+C[9]*(-DP[1]-DP[2]-
 DP[3]-DP[4]))+DP[9]*(DP[12]*(C[3]*(DP[10]+DP[11])-C[15]-C[2]*DP[0])+DP[13]*
 (C[3]*(DP[10]+DP[11])-C[15]-C[2]*DP[0])+C[9]*(-DP[1]-DP[2]-DP[3]-DP[4]))+
 DP[14]*(DP[5]*(C[3]*(-DP[10]-DP[11])+C[15]+C[2]*DP[0])+C[5]*(-DP[10]-
 DP[11])+C[17]+C[4]*DP[0])+DP[5]*(C[9]*(DP[6]+DP[7]))+C[12]*(DP[6]+DP[7]))+
 DP[10]*(DP[8]*(C[15]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[9]-C[2]*DP[10]-
 C[3]*DP[11])+DP[13]*(C[9]-C[2]*DP[10]-C[3]*DP[11]))+DP[9]*(C[15]*(DP[1]+
 DP[2]+DP[3]+DP[4])+DP[12]*(C[9]-C[2]*DP[10]-C[3]*DP[11])+DP[13]*(C[9]-C[2]*
 DP[10]-C[3]*DP[11]))+DP[14]*(DP[5]*(C[2]*DP[10]-C[9]+C[3]*DP[11])+C[4]*
 DP[10]-C[12]+C[5]*DP[11])+DP[5]*(C[15]*(-DP[6]-DP[7]))+C[17]*(-DP[6]-
 DP[7]))+DP[11]*(C[15]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*DP[14])+C[9]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[17]*(-DP[6]-DP[7])-C[12]*
 DP[14])+C[39]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[5]*(DP[6]+DP[7]))+C[43]*(DP[6]+DP[7])));
R=+S[1]*(DP[11]*(S[1]*(DP[5]*(C[6]*(DP[9]*(DP[0]*(DP[12]-DP[2]-DP[4]+
 DP[13])+DP[10]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[11]*(-DP[1]-DP[3]))+S[1]*(
 DP[0]*(DP[14]-DP[7])+DP[10]*(DP[7]-DP[14])-DP[11]*DP[6])+DP[5]*(DP[0]*(
 DP[7]-DP[14])+DP[10]*(DP[14]-DP[7])+DP[11]*DP[6]))+C[3]*(DP[9]*(DP[12]-
 DP[2]-DP[4]+DP[13])+DP[14]*(S[1]-DP[5]+DP[11])+DP[7]*(DP[5]-S[1]))+DP[0]*(
 C[2]*DP[6]+C[35]*DP[7]-C[10]*DP[14])+DP[10]*(C[31]*DP[7]-C[2]*DP[6]+C[7]*
 DP[14])-C[36]*DP[7]-C[31]*DP[11]*DP[6]-C[13]*DP[14])+DP[9]*(S[1]*(C[6]*(
 DP[0]*(DP[2]-DP[12])+DP[10]*(DP[12]-DP[2])+DP[11]*DP[1])+C[3]*(DP[2]-
 DP[12]))+DP[12]*(C[3]*(-DP[10]-DP[11])+C[9]+C[8]*DP[0])+C[2]*(DP[1]*(
 DP[10]-DP[0]+DP[11])-DP[10]*DP[2])+C[9]*DP[2])+tmp[0])+tmp[1])+DP[10]*(
 DP[5]*(DP[10]*(C[2]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[1]-
 DP[5]))-C[4]*DP[7])+C[9]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(
 DP[5]-S[1]))+C[12]*DP[7])+S[1]*(DP[8]*(DP[4]*(S[1]*(C[18]*DP[10]-C[38])+
 C[9]-C[2]*DP[10])+DP[2]*(C[29]-C[3]*DP[10]))+DP[2]*(DP[9]*(C[9]-C[2]*
 DP[10]))))+tmp[2])+tmp[3];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
