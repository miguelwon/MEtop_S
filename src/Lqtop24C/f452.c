/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F452_out;
static void C452(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[20]*V[20];
S[1]=V[19]*V[19];
S[2]=V[8]*V[8]*V[8]*V[8];
C[51]=+S[2]*(V[9]*(V[11]*(V[19]*(18*V[19]-12*V[20])+18*S[0])+V[9]*(10*(S[0]-
 S[1]))));
S[3]=V[11]*V[11];
C[50]=+S[2]*(V[9]*(V[11]*(12*(V[19]*(V[19]-V[20])+S[0]))+V[9]*(11*(S[0]-
 S[1])))+S[3]*(S[0]-S[1]));
S[4]=V[9]*V[9];
C[49]=+S[2]*(S[4]*(4*(S[4]*(S[1]-S[0])+S[3]*(S[0]-S[1]))+16*V[20]*V[19]*
 V[11]*V[9]));
C[48]=+S[2]*(V[9]*(V[11]*(V[19]*(12*V[20]+18*V[19])+18*S[0])+V[9]*(2*(S[0]-
 S[1]))));
C[47]=+S[2]*(V[9]*(V[9]*(3*(S[0]-S[1]))-28*V[20]*V[19]*V[11])+S[3]*(5*(S[0]-
 S[1])));
C[46]=+S[2]*(V[9]*(V[11]*(V[19]*(16*V[20]+12*V[19])+12*S[0])+V[9]*(4*(S[0]-
 S[1]))));
C[45]=+S[2]*(6*(S[0]-S[1]));
C[44]=+S[2]*(4*(S[0]-S[1]));
S[5]=V[8]*V[8];
C[43]=+S[5]*(V[9]*(V[11]*(V[19]*(72*V[19]-48*V[20])+72*S[0])+V[9]*(40*(S[0]-
 S[1]))));
C[42]=+S[5]*(S[4]*(16*(S[4]*(S[1]-S[0])+S[3]*(S[0]-S[1]))+64*V[20]*V[19]*
 V[11]*V[9]));
C[41]=+S[5]*(V[9]*(V[11]*(V[19]*(48*V[20]+72*V[19])+72*S[0])+V[9]*(8*(S[0]-
 S[1]))));
C[40]=+V[9]*(V[11]*(V[19]*(72*V[19]-48*V[20])+72*S[0])+V[9]*(40*(S[0]-
 S[1])));
C[39]=+S[4]*(16*(S[4]*(S[1]-S[0])+S[3]*(S[0]-S[1]))+64*V[20]*V[19]*V[11]*
 V[9]);
C[38]=+V[9]*(V[11]*(V[19]*(48*V[20]+72*V[19])+72*S[0])+V[9]*(8*(S[0]-
 S[1])));
C[37]=+S[5]*(V[9]*(V[9]*(12*(S[0]-S[1]))-112*V[20]*V[19]*V[11])+S[3]*(20*(
 S[0]-S[1])));
C[36]=+V[9]*(V[9]*(12*(S[0]-S[1]))-112*V[20]*V[19]*V[11])+S[3]*(20*(S[0]-
 S[1]));
C[35]=+S[5]*(V[9]*(V[11]*(48*(V[19]*(V[19]-V[20])+S[0]))+V[9]*(44*(S[0]-
 S[1])))+S[3]*(4*(S[0]-S[1])));
C[34]=+S[5]*(V[9]*(V[11]*(V[19]*(64*V[20]+48*V[19])+48*S[0])+V[9]*(16*(S[0]-
 S[1]))));
C[33]=+V[9]*(V[11]*(48*(V[19]*(V[19]-V[20])+S[0]))+V[9]*(44*(S[0]-S[1])))+
 S[3]*(4*(S[0]-S[1]));
C[32]=+V[9]*(V[11]*(V[19]*(64*V[20]+48*V[19])+48*S[0])+V[9]*(16*(S[0]-
 S[1])));
C[31]=+S[5]*(24*(S[0]-S[1]));
C[30]=+24*(S[0]-S[1]);
C[29]=+16*(S[0]-S[1]);
C[28]=+S[5]*(V[9]*(V[11]*(V[19]*(72*V[19]-64*V[20])+72*S[0])+V[9]*(36*(S[0]-
 S[1])))+S[3]*(4*(S[0]-S[1])));
C[27]=+S[5]*(40*(S[0]-S[1]));
C[26]=+S[5]*(V[9]*(V[11]*(V[19]*(48*V[19]-64*V[20])+48*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[3]*(8*(S[0]-S[1])));
C[25]=+S[5]*(32*(S[0]-S[1]));
C[24]=+V[9]*(V[11]*(V[19]*(72*V[19]-64*V[20])+72*S[0])+V[9]*(36*(S[0]-
 S[1])))+S[3]*(4*(S[0]-S[1]));
C[23]=+40*(S[0]-S[1]);
C[22]=+V[9]*(V[11]*(V[19]*(48*V[19]-64*V[20])+48*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[3]*(8*(S[0]-S[1]));
C[21]=+8*(S[0]-S[1]);
C[20]=+32*(S[0]-S[1]);
C[19]=+S[5]*(V[9]*(V[11]*(V[19]*(36*V[19]-24*V[20])+36*S[0])+V[9]*(20*(S[0]-
 S[1]))));
C[18]=+S[5]*(S[4]*(8*(S[4]*(S[1]-S[0])+S[3]*(S[0]-S[1]))+32*V[20]*V[19]*
 V[11]*V[9]));
C[17]=+S[5]*(V[9]*(V[11]*(V[19]*(24*V[20]+36*V[19])+36*S[0])+V[9]*(4*(S[0]-
 S[1]))));
C[16]=+S[5]*(V[9]*(V[9]*(6*(S[0]-S[1]))-56*V[20]*V[19]*V[11])+S[3]*(10*(
 S[0]-S[1])));
C[15]=+S[5]*(V[9]*(V[11]*(24*(V[19]*(V[19]-V[20])+S[0]))+V[9]*(22*(S[0]-
 S[1])))+S[3]*(2*(S[0]-S[1])));
C[14]=+S[5]*(V[9]*(V[11]*(V[19]*(32*V[20]+24*V[19])+24*S[0])+V[9]*(8*(S[0]-
 S[1]))));
C[13]=+S[5]*(12*(S[0]-S[1]));
C[12]=+S[5]*(8*(S[0]-S[1]));
C[11]=+S[2]*(V[9]*(V[11]*(V[19]*(18*V[19]-16*V[20])+18*S[0])+V[9]*(9*(S[0]-
 S[1])))+S[3]*(S[0]-S[1]));
C[10]=+S[5]*(V[9]*(V[11]*(V[19]*(36*V[19]-32*V[20])+36*S[0])+V[9]*(18*(S[0]-
 S[1])))+S[3]*(2*(S[0]-S[1])));
C[9]=+S[2]*(10*(S[0]-S[1]));
C[8]=+S[5]*(20*(S[0]-S[1]));
C[7]=+S[2]*(V[9]*(V[11]*(V[19]*(12*V[19]-16*V[20])+12*S[0])+V[9]*(10*(S[0]-
 S[1])))+S[3]*(2*(S[0]-S[1])));
C[6]=+S[2]*(2*(S[0]-S[1]));
C[5]=+S[5]*(V[9]*(V[11]*(V[19]*(24*V[19]-32*V[20])+24*S[0])+V[9]*(20*(S[0]-
 S[1])))+S[3]*(4*(S[0]-S[1])));
C[4]=+S[5]*(4*(S[0]-S[1]));
C[3]=+S[2]*(8*(S[0]-S[1]));
C[2]=+S[5]*(16*(S[0]-S[1]));
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[6]*S[7];
S[8]=V[33]*V[33];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[8]*S[9]*S[10];
}
REAL F452_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      G                 c      !                                     
    -1---@==============>==\   !                                     
      P1 |              P5 |   !                                     
         |                 |   !                                     
         |              N2 |   !  N2                      G          
        c|P7         /==<==+===!==<==\                 /---1-        
         |           |  P3 |   !  P3 |                 |  P1         
         |           |     |   !     |                 |             
      G  |  t     W+ |  e2 |   !  e2 |  W+    t    ~03 |  G          
    -2---@==<==@-3<--@==>==+===!==>==@--<5-@==<==@---4-@---2-        
      P2    P8 |  P9    P4 |   !  P4   -PC | -PB | -PA    P2         
               |           |   !           |     |                   
               |        B  |   !  B        |     |                   
               \========<==+===!==<========/     |                   
                        P6 |   !  P6             |                   
                           |   !                 |                   
                           |   !  c              |                   
                           \===!==>==============/                   
                               !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[52];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C452(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[0]*(DP[6]*(DP[12]*(C[2]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[8]*(
 DP[8]+DP[9]))+DP[13]*(C[2]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[8]*(DP[8]+
 DP[9]))+S[2]*(C[4]*DP[11]-C[2]*DP[10]+C[8]*DP[14])+DP[5]*(C[2]*DP[10]-C[4]*
 DP[11]-C[8]*DP[14])+C[3]*DP[10]-C[6]*DP[11]-C[9]*DP[14])+DP[12]*(DP[0]*(
 C[4]*(-DP[8]-DP[9]))+C[19]*(-DP[1]-DP[3])+C[17]*(-DP[2]-DP[4])+C[10]*(
 DP[8]+DP[9]))+DP[13]*(DP[0]*(C[4]*(-DP[8]-DP[9]))+C[19]*(-DP[1]-DP[3])+
 C[17]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[14]*(DP[0]*(C[4]*(DP[5]-S[2])+
 C[6])+C[10]*(S[2]-DP[5])-C[11])+DP[10]*(C[19]*(DP[5]-S[2])+C[51])+DP[11]*(
 C[17]*(DP[5]-S[2])+C[48]))+DP[6]*(DP[6]*(C[8]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[9]*DP[11])+C[16]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[47]*DP[11])+
 C[18]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+
 C[49]*DP[11];
tmp[1]=+S[2]*(DP[12]*(DP[7]*(S[2]*(DP[3]*(C[21]*(DP[0]-DP[7])+C[33]+C[30]*
 DP[6])+DP[4]*(C[29]*(DP[0]-DP[7])+C[32]-C[30]*DP[6])+DP[9]*(C[21]*DP[0]-
 C[22]-C[20]*DP[6]))+DP[0]*(C[12]*(-DP[1]-DP[4]-DP[8])+C[4]*(-DP[3]-DP[9])-
 C[2]*DP[2])+DP[6]*(C[31]*(DP[2]-DP[1])+C[13]*(DP[4]-DP[3])+C[25]*DP[8]+
 C[2]*DP[9])+DP[7]*(C[12]*(DP[1]+DP[4])+C[2]*DP[2]+C[4]*DP[3])+C[26]*DP[8]-
 C[35]*DP[1]-C[34]*DP[2]-C[15]*DP[3]-C[14]*DP[4]+C[5]*DP[9])+DP[0]*(DP[6]*(
 S[2]*(C[21]*DP[4]-C[20]*DP[3]+C[23]*DP[9])+C[25]*DP[1]-C[12]*DP[2]+C[2]*
 DP[3]-C[4]*DP[4]-C[27]*DP[8]-C[8]*DP[9])+S[2]*(DP[9]*(C[24]-C[21]*DP[0])-
 C[40]*DP[3]-C[38]*DP[4])+DP[0]*(C[12]*DP[8]+C[4]*DP[9])+C[43]*DP[1]+C[41]*
 DP[2]+C[19]*DP[3]+C[17]*DP[4]-C[28]*DP[8]-C[10]*DP[9])+DP[4]*(DP[6]*(S[2]*
 (-C[36]-C[23]*DP[6])+C[16]+C[8]*DP[6])+C[18]-C[39]*S[2])+DP[2]*(DP[6]*(
 C[37]+C[27]*DP[6])+C[42]))+DP[13]*(DP[7]*(DP[1]*(C[4]*(DP[7]-DP[0])-C[15]-
 C[13]*DP[6])+DP[2]*(C[12]*(DP[7]-DP[0])+C[13]*DP[6]-C[14])+DP[8]*(C[5]-
 C[4]*DP[0]+C[2]*DP[6]))+DP[0]*(DP[6]*(C[2]*DP[1]-C[4]*DP[2]-C[8]*DP[8])+
 DP[8]*(C[4]*DP[0]-C[10])+C[19]*DP[1]+C[17]*DP[2])+DP[2]*(DP[6]*(C[16]+C[8]*
 DP[6])+C[18])));
R=+DP[0]*(DP[5]*(DP[7]*(DP[12]*(DP[0]*(C[4]*(DP[1]+DP[3]+DP[8]+DP[9])+C[12]*
 (DP[2]+DP[4]))+DP[6]*(C[13]*(DP[1]-DP[2]+DP[3]-DP[4])+C[2]*(-DP[8]-DP[9]))+
 DP[7]*(C[4]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4]))+C[15]*(DP[1]+DP[3])+C[14]*
 (DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[4]*(DP[1]+DP[3]+DP[8]+
 DP[9])+C[12]*(DP[2]+DP[4]))+DP[6]*(C[13]*(DP[1]-DP[2]+DP[3]-DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[7]*(C[4]*(-DP[1]-DP[3])+C[12]*(-DP[2]-DP[4]))+C[15]*(
 DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[10]*(S[2]*(C[4]*(
 DP[0]-DP[7])+C[15]+C[13]*DP[6])+DP[5]*(C[4]*(DP[7]-DP[0])-C[15]-C[13]*
 DP[6])+C[6]*(DP[7]-DP[0])-C[50]-C[45]*DP[6])+DP[11]*(S[2]*(C[12]*(DP[0]-
 DP[7])+C[14]-C[13]*DP[6])+DP[5]*(C[12]*(DP[7]-DP[0])+C[13]*DP[6]-C[14])+
 C[44]*(DP[7]-DP[0])+C[45]*DP[6]-C[46])+DP[14]*(S[2]*(C[4]*DP[0]-C[5]-C[2]*
 DP[6])+DP[5]*(C[5]-C[4]*DP[0]+C[2]*DP[6])+C[7]-C[6]*DP[0]+C[3]*DP[6]))+
 tmp[0])+tmp[1]);
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
