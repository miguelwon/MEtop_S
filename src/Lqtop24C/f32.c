/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F32_out;
static void C32(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[10]*V[10];
S[2]=V[18]*V[18];
S[3]=V[10]*V[10]*V[10]*V[10];
S[4]=V[8]*V[8]*V[8]*V[8];
C[39]=+S[4]*(S[3]*(V[17]*(S[1]*(4*V[18]-2*V[17])+S[0]*(2*V[18]+V[17]))+S[2]*
 (S[0]-2*S[1])));
C[38]=+S[4]*(S[3]*(V[17]*(6*V[17]-12*V[18])+6*S[2]));
C[37]=+S[4]*(S[1]*(V[17]*(S[1]*(8*V[18]-4*V[17])+S[0]*(2*V[18]+V[17]))+S[2]*
 (S[0]-4*S[1])));
C[36]=+S[4]*(S[1]*(V[17]*(8*V[17]-16*V[18])+8*S[2]));
S[5]=V[8]*V[8];
C[35]=+S[3]*(S[5]*(V[17]*(S[1]*(16*V[18]-8*V[17])+S[0]*(8*V[18]+4*V[17]))+
 S[2]*(4*S[0]-8*S[1])));
C[34]=+S[3]*(V[17]*(S[1]*(16*V[18]-8*V[17])+S[0]*(8*V[18]+4*V[17]))+S[2]*(4*
 S[0]-8*S[1]));
C[33]=+S[3]*(S[5]*(V[17]*(24*V[17]-48*V[18])+24*S[2]));
C[32]=+S[3]*(V[17]*(24*V[17]-48*V[18])+24*S[2]);
C[31]=+S[5]*(S[1]*(V[17]*(S[1]*(32*V[18]-16*V[17])+S[0]*(8*V[18]+4*V[17]))+
 S[2]*(4*S[0]-16*S[1])));
C[30]=+S[1]*(V[17]*(S[1]*(32*V[18]-16*V[17])+S[0]*(8*V[18]+4*V[17]))+S[2]*(
 4*S[0]-16*S[1]));
C[29]=+S[5]*(S[1]*(V[17]*(32*V[17]-64*V[18])+32*S[2]));
C[28]=+S[1]*(V[17]*(32*V[17]-64*V[18])+32*S[2]);
C[27]=+S[5]*(S[1]*(V[17]*(S[1]*(8*V[17]-16*V[18])+S[0]*(8*V[18]+4*V[17]))+
 S[2]*(4*S[0]+8*S[1])));
C[26]=+S[5]*(S[1]*(S[0]*(V[17]*(16*V[18]+8*V[17])+8*S[2])));
C[25]=+S[5]*(S[0]*(V[17]*(8*V[18]+4*V[17])+4*S[2]));
C[24]=+S[5]*(V[17]*(8*V[17]-16*V[18])+8*S[2]);
C[23]=+S[1]*(V[17]*(S[1]*(8*V[17]-16*V[18])+S[0]*(8*V[18]+4*V[17]))+S[2]*(4*
 S[0]+8*S[1]));
C[22]=+S[1]*(S[0]*(V[17]*(16*V[18]+8*V[17])+8*S[2]));
C[21]=+S[1]*(V[17]*(8*V[17]-16*V[18])+8*S[2]);
C[20]=+S[1]*(V[17]*(16*V[17]-32*V[18])+16*S[2]);
C[19]=+S[0]*(V[17]*(8*V[18]+4*V[17])+4*S[2]);
C[18]=+V[17]*(8*V[17]-16*V[18])+8*S[2];
C[17]=+S[3]*(S[5]*(V[17]*(S[1]*(8*V[18]-4*V[17])+S[0]*(4*V[18]+2*V[17]))+
 S[2]*(2*S[0]-4*S[1])));
C[16]=+S[3]*(S[5]*(V[17]*(12*V[17]-24*V[18])+12*S[2]));
C[15]=+S[5]*(S[1]*(V[17]*(S[1]*(16*V[18]-8*V[17])+S[0]*(4*V[18]+2*V[17]))+
 S[2]*(2*S[0]-8*S[1])));
C[14]=+S[5]*(S[1]*(V[17]*(16*V[17]-32*V[18])+16*S[2]));
C[13]=+S[4]*(S[1]*(V[17]*(S[1]*(2*V[17]-4*V[18])+S[0]*(2*V[18]+V[17]))+S[2]*
 (S[0]+2*S[1])));
C[12]=+S[5]*(S[1]*(V[17]*(S[1]*(4*V[17]-8*V[18])+S[0]*(4*V[18]+2*V[17]))+
 S[2]*(2*S[0]+4*S[1])));
C[11]=+S[4]*(S[1]*(S[0]*(V[17]*(4*V[18]+2*V[17])+2*S[2])));
C[10]=+S[4]*(S[1]*(V[17]*(2*V[17]-4*V[18])+2*S[2]));
C[9]=+S[5]*(S[1]*(S[0]*(V[17]*(8*V[18]+4*V[17])+4*S[2])));
C[8]=+S[5]*(S[1]*(V[17]*(4*V[17]-8*V[18])+4*S[2]));
C[7]=+S[4]*(S[1]*(V[17]*(4*V[17]-8*V[18])+4*S[2]));
C[6]=+S[5]*(S[1]*(V[17]*(8*V[17]-16*V[18])+8*S[2]));
C[5]=+S[4]*(S[0]*(V[17]*(2*V[18]+V[17])+S[2]));
C[4]=+S[5]*(S[0]*(V[17]*(4*V[18]+2*V[17])+2*S[2]));
C[3]=+S[4]*(V[17]*(2*V[17]-4*V[18])+2*S[2]);
C[2]=+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[2]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[33]*V[33];
S[9]=V[15]*V[15];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F32_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         u     t     W+ |  E2     !  E2 |  W+    t     u             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
           G|P7   \========>======!==>========/    G|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         S  |              S      !  S              |  S             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[40];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C32(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[6]*(C[2]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+
 DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11])))+DP[12]*(C[14]*(DP[1]+DP[3])+
 C[6]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[14]*(DP[1]+DP[3])+C[6]*(
 DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[10]*(C[14]*(S[2]-DP[5])+C[3]*(DP[6]+
 DP[7])-C[36])+DP[11]*(C[6]*(S[2]-DP[5])+C[3]*(DP[6]+DP[7])-C[7])+DP[14]*(
 C[4]*(DP[5]-S[2])+C[5]))+DP[7]*(C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[2]-DP[5]))-C[10]*DP[10])+C[15]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))-C[37]*DP[10];
tmp[1]=+DP[0]*(DP[6]*(C[8]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+
 DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+C[6]*(DP[1]*
 (-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[10]*(DP[14]-
 DP[11])+C[7]*DP[10])+DP[0]*(C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[2]-DP[5]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[10]*DP[14]-C[7]*DP[10])+DP[12]*(C[16]*(
 DP[1]+DP[3])+C[9]*(DP[2]+DP[4])+C[12]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(DP[1]+
 DP[3])+C[9]*(DP[2]+DP[4])+C[12]*(-DP[8]-DP[9]))+S[2]*(C[16]*DP[10]+C[9]*
 DP[11]-C[12]*DP[14])+DP[5]*(C[12]*DP[14]-C[16]*DP[10]-C[9]*DP[11])+C[13]*
 DP[14]-C[38]*DP[10]-C[11]*DP[11])+DP[6]*(DP[6]*(C[6]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[8]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[7]*DP[10]-C[10]*
 DP[11])+DP[12]*(C[16]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4])+C[9]*(DP[8]+
 DP[9]))+DP[13]*(C[16]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4])+C[9]*(DP[8]+
 DP[9]))+S[2]*(C[9]*DP[14]-C[16]*DP[10]-C[12]*DP[11])+DP[5]*(C[16]*DP[10]+
 C[12]*DP[11]-C[9]*DP[14])+C[38]*DP[10]+C[13]*DP[11]-C[11]*DP[14])+C[17]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[39]*
 DP[10];
tmp[2]=+DP[12]*(DP[7]*(DP[0]*(S[2]*(C[18]*(DP[9]*(DP[0]+DP[6]-DP[7])+DP[3]*(
 DP[7]-DP[0])-DP[6]*DP[4])+C[20]*DP[9]-C[28]*DP[3]-C[19]*DP[4])+C[24]*(
 DP[8]*(DP[7]-DP[0]-DP[6])+DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+C[2]*(DP[9]*(
 DP[7]-DP[0]-DP[6])+DP[3]*(DP[0]-DP[7])+DP[6]*DP[4])+C[14]*(DP[3]-DP[8])+
 C[29]*DP[1]+C[25]*DP[2]+C[4]*DP[4]-C[6]*DP[9])+DP[6]*(S[2]*(C[18]*(DP[3]*(-
 DP[6]-DP[7])+DP[4]*(-DP[6]-DP[7]))+C[28]*DP[3]+C[20]*DP[4]-C[19]*DP[9])+
 DP[6]*(C[24]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[7]*(C[24]*(DP[1]+DP[2])+
 C[2]*(DP[3]+DP[4]))+C[14]*(-DP[2]-DP[3])+C[25]*DP[8]-C[29]*DP[1]-C[6]*
 DP[4]+C[4]*DP[9])+DP[3]*(S[2]*(C[30]+C[21]*DP[7])-C[15]-C[8]*DP[7])+DP[1]*
 (-C[31]-C[6]*DP[7]))+DP[0]*(DP[6]*(S[2]*(C[21]*(DP[4]-DP[9])-C[20]*DP[3])+
 C[6]*(DP[3]-DP[2]+DP[8])+C[8]*(DP[9]-DP[4])+C[14]*DP[1])+DP[0]*(S[2]*(
 C[20]*DP[3]-C[21]*DP[9])+C[6]*(DP[8]-DP[3])+C[8]*DP[9]-C[14]*DP[1])+S[2]*(
 C[32]*DP[3]+C[22]*DP[4]-C[23]*DP[9])+C[27]*DP[8]-C[33]*DP[1]-C[26]*DP[2]-
 C[16]*DP[3]-C[9]*DP[4]+C[12]*DP[9])+DP[6]*(DP[6]*(S[2]*(C[20]*DP[3]+C[21]*
 DP[4])+C[6]*(-DP[2]-DP[3])-C[14]*DP[1]-C[8]*DP[4])+S[2]*(C[22]*DP[9]-C[32]*
 DP[3]-C[23]*DP[4])+C[33]*DP[1]+C[27]*DP[2]+C[16]*DP[3]+C[12]*DP[4]-C[26]*
 DP[8]-C[9]*DP[9])+DP[3]*(C[17]-C[34]*S[2])+C[35]*DP[1]);
R=+DP[5]*(DP[7]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-
 DP[14]))+DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10])))+DP[12]*(C[14]*(-DP[1]-DP[3])+C[4]*(-DP[2]-DP[4])+
 C[6]*(DP[8]+DP[9]))+DP[13]*(C[14]*(-DP[1]-DP[3])+C[4]*(-DP[2]-DP[4])+C[6]*(
 DP[8]+DP[9]))+DP[14]*(C[3]*(DP[7]-DP[0]-DP[6])+C[6]*(S[2]-DP[5])-C[7])+
 DP[10]*(C[14]*(DP[5]-S[2])+C[3]*(DP[0]-DP[7])+C[36])+DP[11]*(C[4]*(DP[5]-
 S[2])+C[5]+C[3]*DP[6]))+tmp[0])+tmp[1])+S[2]*(DP[13]*(DP[7]*(C[2]*(DP[0]*(
 DP[8]*(DP[7]-DP[0]-DP[6])+DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+DP[6]*(DP[1]*(
 DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])))+DP[1]*(C[14]*(DP[0]-DP[6])-C[15]-C[8]*
 DP[7])+DP[0]*(C[4]*DP[2]-C[6]*DP[8])+DP[6]*(C[4]*DP[8]-C[6]*DP[2]))+DP[0]*(
 DP[1]*(C[6]*(DP[6]-DP[0])-C[16])+DP[8]*(C[8]*(DP[0]+DP[6])+C[12])+DP[2]*(-
 C[9]-C[8]*DP[6]))+DP[6]*(DP[1]*(C[16]-C[6]*DP[6])+DP[2]*(C[12]-C[8]*DP[6])-
 C[9]*DP[8])+C[17]*DP[1])+tmp[2]);
R*=(N/D)*Q2[4]*Q2[2]*Q2[3];
if(gswidth_out ) R=R*Q0[1];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
