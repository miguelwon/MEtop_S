/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F91_out;
static void C91(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
S[1]=V[8]*V[8];
C[48]=+4*S[0]*S[1];
S[2]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[47]=+16*S[2]*S[1];
C[46]=+4*S[0];
C[45]=+16*S[2];
C[44]=+8*S[2];
S[3]=V[8]*V[8]*V[8]*V[8];
C[43]=+S[0]*S[3];
S[4]=V[13]*V[13];
C[42]=+S[2]*(S[1]*(2*S[4]+4*S[1]));
S[5]=V[13]*V[13]*V[13]*V[13];
C[41]=+S[5]*(8*S[4]-16*S[1]);
C[40]=+4*S[2]*S[3];
C[39]=+S[5]*(S[1]*(8*(S[4]+S[1])));
C[38]=+2*S[0]*S[1];
C[37]=+S[5]*(8*S[4]+4*S[1]);
C[36]=+S[4]*(16*S[4]+8*S[1]);
C[35]=+S[5]*(S[1]*(4*S[4]+8*S[1]));
C[34]=+S[1]*(S[4]*(16*S[4]+8*S[1]));
C[33]=+S[4]*(8*S[4]-16*S[1]);
C[32]=+S[4]*(16*(S[4]+S[1]));
C[31]=+S[1]*(S[4]*(8*S[4]+16*S[1]));
C[30]=+S[1]*(32*S[4]+16*S[1]);
C[29]=+8*S[2]*S[1];
C[28]=+S[5]*(8*S[4]-4*S[1]);
C[27]=+S[4]*(16*S[4]-8*S[1]);
C[26]=+2*S[2]*S[3];
C[25]=+S[5]*(S[1]*(4*(S[4]+S[1])));
C[24]=+4*S[2]*S[1];
C[23]=+16*S[5];
C[22]=+S[1]*(S[4]*(8*(S[4]+S[1])));
C[21]=+S[1]*(16*(S[4]+S[1]));
C[20]=+16*S[4]-32*S[1];
C[19]=+16*S[5]*S[1];
C[18]=+S[4]*(16*(S[4]-S[1]));
C[17]=+32*S[4];
C[16]=+4*S[5]*S[3];
C[15]=+32*(S[4]-S[1]);
C[14]=+32*S[4]*S[1];
C[13]=+8*S[5]*S[1];
C[12]=+16*S[4]*S[1];
C[11]=+16*(S[4]+S[1]);
C[10]=+8*S[5];
C[9]=+16*S[4];
C[8]=+4*S[5]*S[1];
C[7]=+16*(S[4]-S[1]);
C[6]=+8*S[4]*S[1];
C[5]=+64*S[1];
C[4]=+16*S[3];
C[3]=+16*S[1];
C[2]=+32*S[1];
S[6]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+48*S[6];
S[7]=V[33]*V[33];
S[8]=V[31]*V[31];
S[9]=V[27]*V[27];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8]*S[9]*S[10];
}
REAL F91_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  n2                              
                           n2 /===!==>==\                            
                        /==>==/   !  P3 |                            
                        |  P3     !     |                            
                        |         !  E2 |  W+    t     d             
         d     t     W+ |  E2  /==!==<==@-->4-@==>==@==>==           
       ==>==@==>==@-2>--@==<===/  !  P4   -PC | -PB |  P1            
         P1 |  P8 |  P9    P4     !           |     |                
            |     |               !  b        |     |                
            |     |        b     /!==>========/   W+|-PA             
          W+|P7   \========>====\|!  P5             3                
            1              P6   ||!                 |                
            |                   ||!  b              |  u             
         u  |              b    \+!==>==============@==>==           
       ==>==@==============>=====/!  P6                P2            
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[49];REAL S[3];REAL tmp[6];                                    
     
if(CalcConst) C91(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[5]*(C[3]*(DP[1]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[1])+DP[2]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[2])+DP[3]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[3])+DP[4]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[4]))+C[2]*(DP[14]*(DP[1]*(-DP[2]-DP[3]-DP[4])+DP[2]*(-
 DP[3]-DP[4])+DP[5]*DP[0]-DP[4]*DP[3])+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*
 (-DP[12]-DP[13]))+DP[5]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11])))+
 C[12]*(DP[5]*(DP[6]+DP[7]+DP[10]+DP[11])+DP[0]*(DP[6]+DP[10]))+DP[6]*(
 C[34]-C[30]*DP[10]-C[21]*DP[11])+DP[7]*(C[22]-C[21]*DP[10]-C[4]*DP[11])+
 DP[0]*(C[4]*DP[14]-C[19])+C[34]*DP[10]-C[39]-C[19]*DP[5]+C[22]*DP[11]);
tmp[1]=+S[1]*(S[1]*(32*(DP[3]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+DP[7])+
 DP[14]*(-DP[1]-DP[2]))+DP[4]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+DP[7])+
 DP[14]*(-DP[1]-DP[2]))+DP[0]*(DP[14]*DP[5]-DP[12]*DP[9]-DP[13]*DP[8]))+
 C[9]*(DP[5]*(-DP[6]-DP[7]-DP[10]-DP[11])+DP[1]*(DP[9]+DP[13])+DP[2]*(DP[9]+
 DP[13])+DP[3]*(-DP[8]-DP[12])+DP[4]*(-DP[8]-DP[12]))+C[23]*DP[5])+DP[2]*(
 C[2]*(DP[14]*(DP[2]+DP[3]+DP[4])+DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-
 DP[7]))+C[9]*(DP[0]*(-DP[9]-DP[13])+DP[3]*(DP[6]+DP[10])+DP[4]*(DP[6]+
 DP[10]))+C[7]*(DP[9]*(DP[10]+DP[11])+DP[13]*(DP[6]+DP[7]))+C[10]*(-DP[9]-
 DP[13])+C[5]*DP[14]*DP[1]-C[23]*DP[3])+DP[1]*(C[2]*(DP[14]*(DP[1]+DP[3]+
 DP[4])+DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7]))+C[9]*(DP[3]*(-DP[7]-
 DP[11])+DP[4]*(-DP[7]-DP[11]))+C[3]*(DP[9]*(-DP[10]-DP[11])+DP[13]*(-DP[6]-
 DP[7]))+C[23]*DP[4])+DP[5]*(DP[0]*(C[9]*(DP[7]+DP[11])-C[23]-C[2]*DP[14])+
 DP[6]*(C[33]+C[2]*DP[10]-C[20]*DP[11])+DP[7]*(C[18]-C[20]*DP[10]-C[15]*
 DP[11])+C[33]*DP[10]-C[41]+C[18]*DP[11])+DP[3]*(DP[8]*(C[11]*(-DP[10]-
 DP[11])+C[10]+C[9]*DP[0])+DP[12]*(C[11]*(-DP[6]-DP[7])+C[10]+C[9]*DP[0]))+
 DP[4]*(C[3]*(DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7])))+DP[0]*(DP[8]*(
 C[5]*DP[12]+C[2]*DP[13])+C[2]*DP[12]*DP[9]));
tmp[2]=+DP[5]*(C[6]*(DP[1]*(DP[7]*(-DP[1]-DP[2]-DP[4]-DP[12]-DP[13])+DP[11]*
 (-DP[1]-DP[2]-DP[4]-DP[8]-DP[9])+DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[6]*(
 DP[2]+DP[4]-DP[12]-DP[13])+DP[10]*(DP[2]+DP[4]-DP[8]-DP[9]))+DP[3]*(DP[7]*
 (-DP[2]-DP[3]-DP[4]-DP[12]-DP[13])+DP[11]*(-DP[2]-DP[3]-DP[4]-DP[8]-DP[9])+
 DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[6]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[10]*
 (DP[2]+DP[4]-DP[8]-DP[9]))+DP[2]*(DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*
 (DP[2]+DP[12]+DP[13])+DP[10]*(DP[2]+DP[8]+DP[9])+DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9]))+DP[4]*(DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*(
 DP[4]+DP[12]+DP[13])+DP[10]*(DP[4]+DP[8]+DP[9])+DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9])))+C[8]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[2]*(-
 DP[8]-DP[9]-DP[12]-DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(-DP[8]-
 DP[9]-DP[12]-DP[13]))+DP[5]*(DP[6]*(C[12]*(DP[11]-DP[0])+C[14]*DP[10]-
 C[19])+DP[10]*(C[12]*(DP[7]-DP[0])-C[19])+C[13]*(-DP[7]-DP[11])+C[29]+
 C[19]*DP[0])+DP[0]*(C[13]*(DP[0]-DP[7]-DP[11])+C[22]*(-DP[6]-DP[10])+
 C[39])+DP[6]*(C[12]*DP[4]*DP[2]-C[35]+C[31]*DP[10]+C[22]*DP[11])+DP[7]*(
 C[22]*DP[10]-C[25]-C[12]*DP[3]*DP[1]+C[13]*DP[11])+DP[10]*(C[12]*DP[4]*
 DP[2]-C[35])+DP[11]*(-C[25]-C[12]*DP[3]*DP[1])+C[42]);
S[2]=DP[4]*DP[4];
tmp[3]=+DP[2]*(S[1]*(DP[3]*(S[1]*(DP[6]*(C[23]-C[17]*DP[10]-C[9]*DP[11])+
 DP[7]*(C[10]-C[9]*DP[10])+C[23]*DP[10]-C[44]+C[10]*DP[11])+DP[6]*(C[32]*
 DP[10]-C[37]+C[23]*DP[11])+DP[7]*(C[23]*DP[10]-C[28]+C[18]*DP[11])+C[46]-
 C[37]*DP[10]-C[28]*DP[11])+DP[6]*(DP[4]*(S[1]*(C[10]-C[17]*DP[10]-C[9]*
 DP[11])+C[14]*DP[10]-C[13]+C[12]*DP[11])+DP[2]*(C[14]*DP[10]-C[13]+C[12]*
 DP[11])+DP[1]*(C[14]*DP[10]-C[13]))+DP[10]*(DP[4]*(S[1]*(C[10]-C[9]*DP[7])+
 C[12]*DP[7]-C[13])+DP[2]*(C[12]*DP[7]-C[13])-C[13]*DP[1])+DP[1]*(DP[7]*(
 C[13]-C[14]*DP[11])+C[13]*DP[11]))+DP[5]*(DP[6]*(DP[10]*(C[12]*(-DP[1]-
 DP[2]-DP[3])-C[14]*DP[4])+C[8]*(DP[1]+DP[2]+DP[3])+DP[4]*(C[13]-C[12]*
 DP[11])-C[6]*DP[11]*DP[2])+C[8]*(DP[1]*(DP[10]-DP[7]-DP[11])+DP[3]*(DP[10]-
 DP[7]-DP[11])+DP[10]*DP[2])+DP[7]*(C[12]*(DP[11]*(DP[1]+DP[3])-DP[10]*
 DP[4])-C[6]*DP[10]*DP[2])+C[13]*DP[10]*DP[4])+DP[1]*(C[29]*(DP[6]+DP[7]+
 DP[10]+DP[11])+C[19]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))-
 C[48])+DP[3]*(C[24]*(DP[6]+DP[7]+DP[10]+DP[11])+C[13]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))-C[38]));
tmp[4]=+DP[1]*(S[1]*(DP[4]*(S[1]*(DP[7]*(C[9]*DP[10]-C[23]+C[17]*DP[11])+
 DP[6]*(C[9]*DP[11]-C[10])+C[44]-C[10]*DP[10]-C[23]*DP[11])+C[8]*(DP[7]-
 DP[6]-DP[10]+DP[11])+C[12]*(DP[10]*DP[6]-DP[11]*DP[7]))+DP[3]*(DP[7]*(S[1]*
 (C[9]*DP[10]-C[10]+C[17]*DP[11])+C[13]-C[12]*DP[10]-C[14]*DP[11])+DP[11]*(
 S[1]*(C[9]*DP[6]-C[10])+C[13]-C[12]*DP[6]))+DP[1]*(DP[7]*(C[13]-C[12]*
 DP[10]-C[14]*DP[11])+DP[11]*(C[13]-C[12]*DP[6])))+DP[5]*(DP[7]*(DP[1]*(
 C[6]*DP[10]-C[8]+C[12]*DP[11])+DP[3]*(C[12]*DP[10]-C[13]+C[14]*DP[11])+
 DP[4]*(C[12]*DP[11]-C[8]))+DP[11]*(DP[1]*(C[6]*DP[6]-C[8])+DP[3]*(C[12]*
 DP[6]-C[13])-C[8]*DP[4])+DP[4]*(DP[6]*(C[8]-C[12]*DP[10])+C[8]*DP[10]))+
 DP[4]*(C[24]*(DP[6]+DP[7]+DP[10]+DP[11])+C[13]*(DP[6]*(-DP[10]-DP[11])+
 DP[7]*(-DP[10]-DP[11]))-C[38]))+DP[5]*(DP[3]*(DP[4]*(C[8]*(DP[6]-DP[7]+
 DP[10]-DP[11])+C[12]*(DP[11]*DP[7]-DP[10]*DP[6]))+DP[3]*(DP[7]*(C[6]*
 DP[10]-C[8]+C[12]*DP[11])+DP[11]*(C[6]*DP[6]-C[8])))+S[2]*(DP[6]*(C[8]-
 C[12]*DP[10]-C[6]*DP[11])+DP[10]*(C[8]-C[6]*DP[7])))+tmp[3];
tmp[5]=+S[1]*(DP[0]*(S[1]*(DP[2]*(C[12]*(DP[1]*(DP[7]-DP[6]-DP[10]+DP[11])+
 DP[6]*(-DP[2]-DP[4]-DP[12])+DP[8]*(DP[0]-DP[10]-DP[11])+DP[10]*(-DP[2]-
 DP[4])+DP[12]*(DP[0]-DP[7]))+DP[3]*(C[36]*(-DP[6]-DP[10])+C[27]*(-DP[7]-
 DP[11])+C[45]+C[23]*DP[0])+C[6]*(DP[9]*(DP[0]-DP[10]-DP[11])+DP[13]*(DP[0]-
 DP[6]-DP[7]))+C[13]*(DP[8]+DP[12])+C[8]*(DP[9]+DP[13]))+DP[1]*(C[6]*(DP[4]*
 (DP[7]-DP[6]-DP[10]+DP[11])+DP[9]*(DP[10]-DP[0]+DP[11])+DP[13]*(DP[6]-
 DP[0]+DP[7]))+C[12]*(DP[7]*(DP[1]+DP[3]+DP[12])+DP[8]*(DP[10]-DP[0]+
 DP[11])+DP[11]*(DP[1]+DP[3])+DP[12]*(DP[6]-DP[0]))+C[13]*(-DP[8]-DP[12])+
 C[8]*(-DP[9]-DP[13]))+C[6]*(DP[3]*(DP[8]*(DP[10]-DP[0]+DP[11])+DP[12]*(
 DP[6]-DP[0]+DP[7]))+DP[4]*(DP[8]*(DP[0]-DP[10]-DP[11])+DP[12]*(DP[0]-DP[6]-
 DP[7])))+C[8]*(DP[3]*(-DP[8]-DP[12])+DP[4]*(DP[8]+DP[12]))+tmp[0]+tmp[1])+
 DP[1]*(DP[2]*(C[19]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[47])+DP[4]*(C[13]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[29]))+DP[2]*(DP[3]*(C[13]*(DP[6]-DP[0]+
 DP[7]+DP[10]+DP[11])-C[29]))+tmp[2])+tmp[4]);
R=+DP[5]*(DP[0]*(C[13]*(DP[1]*(DP[2]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+
 DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[3]*(DP[2]*(DP[0]-DP[6]-DP[7]-
 DP[10]-DP[11])+DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[5]*(DP[0]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-
 DP[11])))+C[16]*(DP[0]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))+DP[5]*(C[24]*(DP[6]+DP[7]+DP[10]+DP[11])-
 C[38]-C[29]*DP[0])+C[29]*(DP[1]*(DP[2]+DP[4])+DP[3]*(DP[2]+DP[4]))+C[26]*(
 DP[6]+DP[7]+DP[10]+DP[11])-C[43]-C[40]*DP[0])+DP[1]*(DP[2]*(C[24]*(-DP[6]-
 DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+
 C[38])+DP[4]*(C[24]*(-DP[6]-DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+C[38]))+DP[3]*(DP[2]*(C[24]*(-DP[6]-DP[7]-
 DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[38])+
 DP[4]*(C[24]*(-DP[6]-DP[7]-DP[10]-DP[11])+C[13]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11]))+C[38])))+tmp[5];
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
