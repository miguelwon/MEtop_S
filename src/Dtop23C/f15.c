/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F15_out;
static void C15(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[10]*V[10];
S[2]=V[14]*V[14];
S[3]=V[11]*V[11];
S[4]=V[21]*V[21];
S[5]=V[14]*V[14]*V[14]*V[14];
C[32]=+S[1]*(S[1]*(V[20]*(S[1]*(V[20]*(2*(S[0]+S[1])-3*S[2]-S[3])+V[21]*(4*(
 S[0]-S[1])+6*S[2]+2*S[3]))+S[3]*(S[3]*(V[20]-2*V[21])+S[0]*(-2*V[21]-
 V[20]))+S[2]*(S[0]*(-6*V[21]-3*V[20])+S[2]*(V[20]-2*V[21])))+S[4]*(S[1]*(2*
 (S[0]+S[1])-3*S[2]-S[3])+S[3]*(S[3]-S[0])+S[2]*(S[2]-3*S[0])))+S[3]*(S[3]*(
 V[20]*(S[0]*(2*V[21]+V[20])+S[2]*(2*V[21]-V[20]))+S[4]*(S[0]-S[2]))+S[5]*(
 V[20]*(V[20]-2*V[21])+S[4]))+S[5]*(S[0]*(V[20]*(2*V[21]+V[20])+S[4])))+
 S[3]*(S[0]*(S[2]*(V[20]*(S[3]*(-2*V[21]-V[20])+S[2]*(2*V[21]+V[20]))+S[4]*(
 S[2]-S[3]))));
C[31]=+S[1]*(V[20]*(S[1]*(V[20]*(2*(S[2]+S[3])+4*(-S[0]-S[1]))+V[21]*(4*(-
 S[2]-S[3])+8*(S[1]-S[0])))+S[3]*(V[20]*(2*(S[2]+S[0]-S[3]))+V[21]*(4*(S[0]-
 S[2]+S[3])))+S[0]*(S[2]*(4*V[21]+2*V[20])))+S[4]*(2*(S[3]*(S[2]+S[0]-S[3]+
 S[1])+S[2]*(S[0]+S[1]))+S[1]*(4*(-S[0]-S[1]))))+S[3]*(S[0]*(V[20]*(S[3]*(-
 4*V[21]-2*V[20])+S[2]*(4*V[21]+2*V[20]))+S[4]*(2*(S[2]-S[3]))));
S[6]=V[11]*V[11]*V[11]*V[11];
C[30]=+S[1]*(V[20]*(S[1]*(V[20]*(10*(S[1]-S[2])+6*S[0]-2*S[3])+V[21]*(20*(
 S[2]-S[1])+12*S[0]+4*S[3]))+S[2]*(V[20]*(4*(-S[0]-S[3])+2*S[2])+V[21]*(8*(
 S[3]-S[0])-4*S[2]))+S[6]*(4*V[20]-8*V[21]))+S[4]*(S[1]*(10*(S[1]-S[2])+6*
 S[0]-2*S[3])+S[2]*(4*(-S[0]-S[3])+2*S[2])+4*S[6]))+S[3]*(S[2]*(V[20]*(
 V[20]*(2*(S[2]-S[3])-4*S[0])+V[21]*(4*(S[3]-S[2])-8*S[0]))+S[4]*(2*(S[2]-
 S[3])-4*S[0]))+S[3]*(S[0]*(V[20]*(4*V[21]+2*V[20])+2*S[4])));
S[7]=V[10]*V[10]*V[10]*V[10];
C[29]=+V[20]*(S[1]*(V[20]*(4*(S[2]-S[0])-12*S[1])+V[21]*(8*(-S[2]-S[0])+24*
 S[1]))+S[3]*(V[20]*(4*(S[2]-S[0]-S[3]))+V[21]*(8*(S[3]-S[2]-S[0]))))+S[4]*(
 4*(S[3]*(S[2]-S[0]-S[3])+S[1]*(S[2]-S[0]))-12*S[7]);
C[28]=+V[20]*(S[1]*(V[20]*(4*(-S[0]-S[3])+8*S[2]-16*S[1])+V[21]*(8*(S[3]-
 S[0])+32*S[1]-16*S[2]))+S[3]*(V[20]*(4*(-S[0]-S[3])+8*S[2])+V[21]*(8*(S[3]-
 S[0])-16*S[2])))+S[4]*(S[1]*(4*(-S[0]-S[3])+8*S[2]-16*S[1])+S[3]*(4*(-S[0]-
 S[3])+8*S[2]));
C[27]=+V[20]*(S[1]*(V[20]*(4*(S[0]-S[3]+S[1]))+V[21]*(8*(S[0]+S[3]-S[1])))+
 S[3]*(S[0]*(8*V[21]+4*V[20])+S[2]*(8*V[20]-16*V[21])))+S[4]*(4*(S[1]*(S[0]-
 S[3]+S[1])+S[0]*S[3])+8*S[2]*S[3]);
C[26]=+S[3]*(S[1]*(V[20]*(V[20]*(4*(S[1]-S[2]-S[0]))+V[21]*(8*(S[2]-S[0]-
 S[1])))+S[4]*(4*(S[1]-S[2]-S[0])))+S[0]*(S[2]*(V[20]*(8*V[21]+4*V[20])+4*
 S[4])));
C[25]=+S[1]*(V[20]*(V[20]*(4*(-S[0]-S[1])-12*S[3])+V[21]*(8*(S[1]-S[0])+24*
 S[3]))+S[4]*(4*(-S[0]-S[1])-12*S[3]))+S[3]*(S[0]*(V[20]*(8*V[21]+4*V[20])+
 4*S[4]));
C[24]=+V[20]*(S[1]*(S[1]*(V[20]*(2*(-S[2]-S[3]-S[1])-6*S[0])+V[21]*(4*(S[2]+
 S[3]+S[1])-12*S[0]))+S[2]*(V[20]*(4*(S[0]+S[3])+2*S[2])+V[21]*(8*(S[0]-
 S[3])-4*S[2])))+S[3]*(S[2]*(V[20]*(2*(S[2]-S[3])+4*S[0])+V[21]*(4*(S[3]-
 S[2])+8*S[0]))+S[3]*(S[0]*(-4*V[21]-2*V[20]))))+S[4]*(S[1]*(S[1]*(2*(-S[2]-
 S[3]-S[1])-6*S[0])+S[2]*(4*(S[0]+S[3])+2*S[2]))+S[3]*(S[2]*(2*(S[2]-S[3])+
 4*S[0])-2*S[0]*S[3]));
C[23]=+S[1]*(V[20]*(V[20]*(4*(S[0]+S[3]-S[1])+8*S[2])+V[21]*(8*(S[0]-S[3]+
 S[1])-16*S[2]))+S[4]*(4*(S[0]+S[3]-S[1])+8*S[2]))+S[3]*(S[0]*(V[20]*(8*
 V[21]+4*V[20])+4*S[4]));
C[22]=+V[20]*(S[3]*(16*V[21]-8*V[20])+S[2]*(8*V[20]-16*V[21]))+S[4]*(8*(
 S[2]-S[3]));
C[21]=+S[1]*(V[20]*(V[20]*(8*(S[0]+S[3]+S[1]))+V[21]*(16*(S[0]-S[3]-S[1])))+
 S[4]*(8*(S[0]+S[3]+S[1])))+S[3]*(S[0]*(V[20]*(16*V[21]+8*V[20])+8*S[4]));
C[20]=+V[20]*(S[1]*(S[0]*(16*V[21]+8*V[20])+S[2]*(8*V[20]-16*V[21]))+S[3]*(
 S[0]*(16*V[21]+8*V[20])+S[2]*(8*V[20]-16*V[21])))+S[4]*(8*(S[1]*(S[2]+
 S[0])+S[3]*(S[2]+S[0])));
C[19]=+V[20]*(S[1]*(S[0]*(8*V[21]+4*V[20])+S[2]*(4*V[20]-8*V[21]))+S[3]*(
 S[0]*(8*V[21]+4*V[20])+S[2]*(4*V[20]-8*V[21])))+S[4]*(4*(S[1]*(S[2]+S[0])+
 S[3]*(S[2]+S[0])));
C[18]=+S[1]*(S[1]*(V[20]*(S[1]*(V[20]*(2*(S[0]-S[1])+3*S[2]+S[3])+V[21]*(4*(
 S[0]+S[1])-6*S[2]-2*S[3]))+S[3]*(S[3]*(2*V[21]-V[20])+S[0]*(-2*V[21]-
 V[20]))+S[2]*(S[0]*(-6*V[21]-3*V[20])+S[2]*(2*V[21]-V[20])))+S[4]*(S[1]*(2*
 (S[0]-S[1])+3*S[2]+S[3])+S[3]*(-S[0]-S[3])+S[2]*(-S[2]-3*S[0])))+S[3]*(
 S[3]*(V[20]*(S[0]*(2*V[21]+V[20])+S[2]*(V[20]-2*V[21]))+S[4]*(S[2]+S[0]))+
 S[5]*(V[20]*(2*V[21]-V[20])-S[4]))+S[5]*(S[0]*(V[20]*(2*V[21]+V[20])+
 S[4])))+S[3]*(S[0]*(S[2]*(V[20]*(S[3]*(-2*V[21]-V[20])+S[2]*(2*V[21]+
 V[20]))+S[4]*(S[2]-S[3]))));
C[17]=+S[1]*(S[1]*(V[20]*(V[20]*(4*(S[1]-S[2]-S[0]))+V[21]*(8*(S[2]-S[0]-
 S[1])))+S[4]*(4*(S[1]-S[2]-S[0])))+S[0]*(S[2]*(V[20]*(8*V[21]+4*V[20])+4*
 S[4])));
C[16]=+V[20]*(S[1]*(S[3]*(4*V[20]-8*V[21])+S[2]*(8*V[21]-4*V[20]))+S[0]*(
 S[3]*(-8*V[21]-4*V[20])+S[2]*(8*V[21]+4*V[20])))+S[4]*(4*(S[1]*(S[3]-S[2])+
 S[0]*(S[2]-S[3])));
C[15]=+S[1]*(V[20]*(S[1]*(S[1]*(24*V[21]-12*V[20])+S[2]*(8*V[20]-16*V[21]))+
 S[3]*(S[3]*(8*V[21]-4*V[20])+S[2]*(8*V[20]-16*V[21])))+S[4]*(S[1]*(8*S[2]-
 12*S[1])+S[3]*(8*S[2]-4*S[3])));
C[14]=+S[1]*(V[20]*(V[20]*(4*(S[3]-S[0])+12*S[1])+V[21]*(8*(-S[0]-S[3])-24*
 S[1]))+S[4]*(4*(S[3]-S[0])+12*S[1]))+S[3]*(S[0]*(V[20]*(8*V[21]+4*V[20])+4*
 S[4]));
C[13]=+V[20]*(S[1]*(V[20]*(8*S[2]-4*S[0]-12*S[3]-24*S[1])+V[21]*(24*S[3]-16*
 S[2]-8*S[0]+48*S[1]))+S[3]*(V[20]*(4*(-S[0]-S[3])+8*S[2])+V[21]*(8*(S[3]-
 S[0])-16*S[2])))+S[4]*(S[1]*(8*S[2]-4*S[0]-12*S[3]-24*S[1])+S[3]*(4*(-S[0]-
 S[3])+8*S[2]));
C[12]=+S[1]*(V[20]*(V[20]*(4*(S[1]-S[0]-S[3]))+V[21]*(8*(S[3]-S[0]-S[1])))+
 S[4]*(4*(S[1]-S[0]-S[3])))+S[3]*(S[0]*(V[20]*(8*V[21]+4*V[20])+4*S[4]));
C[11]=+V[20]*(S[1]*(16*V[21]-8*V[20])+S[3]*(8*V[20]-16*V[21]))+S[4]*(8*(
 S[3]-S[1]));
C[10]=+S[1]*(V[20]*(S[1]*(V[20]*(4*(S[3]-S[2]-S[0]+S[1]))+V[21]*(8*(S[2]-
 S[0]-S[3]-S[1])))+S[3]*(S[0]*(-8*V[21]-4*V[20])+S[2]*(8*V[21]-4*V[20]))+
 S[0]*(S[2]*(8*V[21]+4*V[20])))+S[4]*(4*(S[1]*(S[3]-S[2]-S[0]+S[1])+S[3]*(-
 S[2]-S[0])+S[2]*S[0])))+S[3]*(S[0]*(S[2]*(V[20]*(8*V[21]+4*V[20])+4*
 S[4])));
C[9]=+S[1]*(V[20]*(S[1]*(16*V[20]-32*V[21])+S[3]*(16*V[20]-32*V[21]))+S[4]*(
 16*(S[3]+S[1])));
C[8]=+V[20]*(S[1]*(16*V[20]-32*V[21])+S[3]*(16*V[20]-32*V[21]))+S[4]*(16*(
 S[3]+S[1]));
C[7]=+S[1]*(V[20]*(V[20]*(4*(S[2]+S[0])+8*(S[3]+S[1]))+V[21]*(8*(S[0]-S[2])+
 16*(-S[3]-S[1])))+S[4]*(4*(S[2]+S[0])+8*(S[3]+S[1])))+S[3]*(V[20]*(S[0]*(8*
 V[21]+4*V[20])+S[2]*(4*V[20]-8*V[21]))+S[4]*(4*(S[2]+S[0])));
C[6]=+V[20]*(16*V[20]-32*V[21])+16*S[4];
C[5]=+S[1]*(V[20]*(S[1]*(V[20]*(2*(S[3]-S[2]-S[0]+S[1]))+V[21]*(4*(S[2]-
 S[0]-S[3]-S[1])))+S[3]*(S[0]*(-4*V[21]-2*V[20])+S[2]*(4*V[21]-2*V[20]))+
 S[0]*(S[2]*(4*V[21]+2*V[20])))+S[4]*(2*(S[1]*(S[3]-S[2]-S[0]+S[1])+S[3]*(-
 S[2]-S[0])+S[2]*S[0])))+S[3]*(S[0]*(S[2]*(V[20]*(4*V[21]+2*V[20])+2*
 S[4])));
C[4]=+V[20]*(S[1]*(16*V[21]-8*V[20])+S[0]*(16*V[21]+8*V[20]))+S[4]*(8*(S[0]-
 S[1]));
C[3]=+S[1]*(V[20]*(S[1]*(8*V[20]-16*V[21])+S[3]*(8*V[20]-16*V[21]))+S[4]*(8*
 (S[3]+S[1])));
C[2]=+V[20]*(S[1]*(8*V[20]-16*V[21])+S[3]*(8*V[20]-16*V[21]))+S[4]*(8*(S[3]+
 S[1]));
S[8]=V[15]*V[15];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[8]*S[9];
S[10]=V[28]*V[28];
S[11]=V[27]*V[27];
S[12]=V[17]*V[17];
S[13]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[10]*S[11]*S[12]*S[13];
}
REAL F15_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
          c                 c     !  c                 c             
        ==>==\           /==>=====!==>==\           /==>==           
          P1 |           |  P3    !  P3 |           |  P1            
             |           |        !     |           |                
          G  |  t     W+ |  S     !  S  |  W+    t  |  G             
        -1---@==>==@-2>--@==<=====!==<==@-->3-@==>==@---1-           
          P2    P6 |  P7    P4    !  P4   -P9 | -P8    P2            
                   |              !           |                      
                   |        b     !  b        |                      
                   \========>=====!==>========/                      
                            P5    !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[33];REAL S[3];                                                
     
if(CalcConst) C15(C);
S[0]=GG*GG;
N=-C[0]*S[0];
S[1]=V[29]*V[29]*V[29]*V[29];
D=+C[1]*S[1];
S[2]=V[29]*V[29];
R=+DP[0]*(DP[0]*(DP[0]*(C[2]*(DP[0]*(S[2]+DP[0]-DP[1]-DP[3])+DP[2]*(DP[1]-
 S[2]+DP[2]+DP[3])+DP[4]*(DP[1]-S[2]+DP[3]+DP[4]))+S[2]*(DP[3]*(-C[11]-C[6]*
 S[2])+C[11]*DP[1]-C[29])+DP[0]*(C[8]*(-DP[2]-DP[4])-C[28])+DP[2]*(C[13]+
 C[8]*DP[4])+C[21]*(-DP[1]-DP[3])+C[30]+C[13]*DP[4])+S[2]*(DP[3]*(S[2]*(
 C[6]*(DP[3]+DP[4])+C[22])+C[11]*DP[2]-C[23])+DP[4]*(-C[14]-C[4]*S[2]-C[11]*
 DP[1])+C[25]*DP[2]-C[31]-C[27]*DP[1])+DP[1]*(C[7]*(DP[2]+DP[4])+C[24]+
 C[19]*DP[1]+C[20]*DP[3])+DP[2]*(C[15]+C[3]*DP[2]+C[7]*DP[3]+C[9]*DP[4])+
 DP[3]*(C[24]+C[19]*DP[3]+C[7]*DP[4])+DP[4]*(C[15]+C[3]*DP[4])+C[32])+DP[4]*
 (S[2]*(S[2]*(C[4]*(DP[3]+DP[4])+C[16])+C[12]*DP[1]-C[17])+C[5]*(DP[1]+
 DP[3]+DP[4])+C[18]+C[10]*DP[2])+DP[2]*(C[5]*(DP[1]+DP[2]+DP[3])+S[2]*(-
 C[26]-C[12]*DP[3])+C[18]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
