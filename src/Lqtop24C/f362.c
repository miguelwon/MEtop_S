/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F362_out;
static void C362(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[13]*V[13];
S[1]=V[11]*V[11];
S[2]=V[9]*V[9];
S[3]=V[20]*V[20];
S[4]=V[13]*V[13]*V[13]*V[13];
S[5]=V[8]*V[8]*V[8]*V[8];
C[55]=+S[5]*(S[4]*(V[19]*(V[19]*(V[9]*(-4*V[11]-V[9])+2*S[0]-S[1])+V[20]*(2*
 (S[2]-S[1])-4*S[0]))+S[3]*(V[9]*(4*V[11]-V[9])+2*S[0]-S[1])));
S[6]=V[8]*V[8];
C[54]=+S[4]*(S[6]*(V[19]*(V[19]*(V[9]*(-16*V[11]-4*V[9])+8*S[0]-4*S[1])+
 V[20]*(8*(S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(16*V[11]-4*V[9])+8*S[0]-4*
 S[1])));
C[53]=+S[4]*(V[19]*(V[19]*(V[9]*(-16*V[11]-4*V[9])+8*S[0]-4*S[1])+V[20]*(8*(
 S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(16*V[11]-4*V[9])+8*S[0]-4*S[1]));
C[52]=+S[4]*(S[6]*(V[19]*(V[19]*(V[9]*(-8*V[11]-2*V[9])+4*S[0]-2*S[1])+
 V[20]*(4*(S[2]-S[1])-8*S[0]))+S[3]*(V[9]*(8*V[11]-2*V[9])+4*S[0]-2*S[1])));
C[51]=+S[5]*(S[0]*(V[19]*(V[19]*(V[9]*(-6*V[11]-V[9])+4*S[0]-S[1])+V[20]*(2*
 (S[2]-S[1])-8*S[0]))+S[3]*(V[9]*(6*V[11]-V[9])+4*S[0]-S[1])));
C[50]=+S[6]*(S[0]*(V[19]*(V[19]*(V[9]*(-24*V[11]-4*V[9])+16*S[0]-4*S[1])+
 V[20]*(8*(S[2]-S[1])-32*S[0]))+S[3]*(V[9]*(24*V[11]-4*V[9])+16*S[0]-4*
 S[1])));
C[49]=+S[0]*(V[19]*(V[19]*(V[9]*(-24*V[11]-4*V[9])+16*S[0]-4*S[1])+V[20]*(8*
 (S[2]-S[1])-32*S[0]))+S[3]*(V[9]*(24*V[11]-4*V[9])+16*S[0]-4*S[1]));
C[48]=+S[6]*(S[0]*(V[19]*(V[19]*(V[9]*(-12*V[11]-2*V[9])+8*S[0]-2*S[1])+
 V[20]*(4*(S[2]-S[1])-16*S[0]))+S[3]*(V[9]*(12*V[11]-2*V[9])+8*S[0]-2*
 S[1])));
S[7]=V[19]*V[19];
C[47]=+S[5]*(2*(S[0]*(S[3]+S[7])+V[9]*(V[11]*(S[3]-S[7])))-4*V[20]*V[19]*
 S[0]);
C[46]=+S[6]*(8*(S[0]*(S[3]+S[7])+V[9]*(V[11]*(S[3]-S[7])))-16*V[20]*V[19]*
 S[0]);
C[45]=+8*(S[0]*(S[3]+S[7])+V[9]*(V[11]*(S[3]-S[7])))-16*V[20]*V[19]*S[0];
C[44]=+S[6]*(4*(S[0]*(S[3]+S[7])+V[9]*(V[11]*(S[3]-S[7])))-8*V[20]*V[19]*
 S[0]);
C[43]=+S[5]*(S[4]*(V[19]*(6*V[19]-12*V[20])+6*S[3]));
C[42]=+S[4]*(S[6]*(V[19]*(24*V[19]-48*V[20])+24*S[3]));
C[41]=+S[4]*(V[19]*(24*V[19]-48*V[20])+24*S[3]);
C[40]=+S[4]*(S[6]*(V[19]*(12*V[19]-24*V[20])+12*S[3]));
C[39]=+S[5]*(S[0]*(V[19]*(8*V[19]-16*V[20])+8*S[3]));
C[38]=+S[6]*(S[0]*(V[19]*(32*V[19]-64*V[20])+32*S[3]));
C[37]=+S[0]*(V[19]*(32*V[19]-64*V[20])+32*S[3]);
C[36]=+S[4]*(S[6]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(16*(
 S[3]-S[7])))));
C[35]=+S[6]*(S[0]*(V[19]*(V[19]*(4*(S[1]-S[2])+8*S[0])+V[20]*(8*(S[1]+S[2])-
 16*S[0]))+S[3]*(4*(S[1]-S[2])+8*S[0])));
C[34]=+S[6]*(S[0]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(24*(
 S[3]-S[7])))));
C[33]=+S[6]*(S[0]*(V[19]*(16*V[19]-32*V[20])+16*S[3]));
C[32]=+S[6]*(V[9]*(V[11]*(8*(S[3]-S[7]))));
C[31]=+S[6]*(S[0]*(V[19]*(S[2]*(16*V[20]-8*V[19])+S[1]*(16*V[20]+8*V[19]))+
 S[3]*(8*(S[1]-S[2]))));
C[30]=+S[6]*(V[19]*(S[2]*(8*V[20]-4*V[19])+S[1]*(8*V[20]+4*V[19]))+S[3]*(4*(
 S[1]-S[2])));
C[29]=+S[6]*(V[19]*(8*V[19]-16*V[20])+8*S[3]);
C[28]=+S[4]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(16*(S[3]-
 S[7]))));
C[27]=+S[0]*(V[19]*(V[19]*(4*(S[1]-S[2])+8*S[0])+V[20]*(8*(S[1]+S[2])-16*
 S[0]))+S[3]*(4*(S[1]-S[2])+8*S[0]));
C[26]=+S[0]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(24*(S[3]-
 S[7]))));
C[25]=+S[0]*(V[19]*(16*V[19]-32*V[20])+16*S[3]);
C[24]=+V[9]*(V[11]*(8*(S[3]-S[7])));
C[23]=+S[0]*(V[19]*(S[2]*(16*V[20]-8*V[19])+S[1]*(16*V[20]+8*V[19]))+S[3]*(
 8*(S[1]-S[2])));
C[22]=+S[0]*(V[19]*(8*V[19]-16*V[20])+8*S[3]);
C[21]=+V[19]*(S[2]*(8*V[20]-4*V[19])+S[1]*(8*V[20]+4*V[19]))+S[3]*(4*(S[1]-
 S[2]));
C[20]=+V[19]*(8*V[19]-16*V[20])+8*S[3];
C[19]=+S[5]*(S[4]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[3])+V[11]*(4*(
 S[3]-S[7])))));
C[18]=+S[5]*(S[0]*(V[19]*(V[19]*(2*S[0]+S[1]-S[2])+V[20]*(2*(S[1]+S[2])-4*
 S[0]))+S[3]*(2*S[0]+S[1]-S[2])));
C[17]=+S[4]*(S[6]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[3])+V[11]*(8*(
 S[3]-S[7])))));
C[16]=+S[6]*(S[0]*(V[19]*(V[19]*(2*(S[1]-S[2])+4*S[0])+V[20]*(4*(S[1]+S[2])-
 8*S[0]))+S[3]*(2*(S[1]-S[2])+4*S[0])));
C[15]=+S[5]*(S[0]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[3])+V[11]*(6*(
 S[3]-S[7])))));
C[14]=+S[5]*(S[0]*(V[19]*(4*V[19]-8*V[20])+4*S[3]));
C[13]=+S[6]*(S[0]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[3])+V[11]*(12*(
 S[3]-S[7])))));
C[12]=+S[6]*(S[0]*(V[19]*(8*V[19]-16*V[20])+8*S[3]));
C[11]=+S[5]*(V[9]*(V[11]*(2*(S[3]-S[7]))));
C[10]=+S[6]*(V[9]*(V[11]*(4*(S[3]-S[7]))));
C[9]=+S[5]*(S[0]*(V[19]*(S[2]*(4*V[20]-2*V[19])+S[1]*(4*V[20]+2*V[19]))+
 S[3]*(2*(S[1]-S[2]))));
C[8]=+S[5]*(S[0]*(V[19]*(2*V[19]-4*V[20])+2*S[3]));
C[7]=+S[6]*(S[0]*(V[19]*(S[2]*(8*V[20]-4*V[19])+S[1]*(8*V[20]+4*V[19]))+
 S[3]*(4*(S[1]-S[2]))));
C[6]=+S[6]*(S[0]*(V[19]*(4*V[19]-8*V[20])+4*S[3]));
C[5]=+S[5]*(V[19]*(S[2]*(2*V[20]-V[19])+S[1]*(2*V[20]+V[19]))+S[3]*(S[1]-
 S[2]));
C[4]=+S[5]*(V[19]*(2*V[19]-4*V[20])+2*S[3]);
C[3]=+S[6]*(V[19]*(S[2]*(4*V[20]-2*V[19])+S[1]*(4*V[20]+2*V[19]))+S[3]*(2*(
 S[1]-S[2])));
C[2]=+S[6]*(V[19]*(4*V[19]-8*V[20])+4*S[3]);
S[8]=V[14]*V[14];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[33]*V[33];
S[11]=V[16]*V[16];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[10]*S[11]*S[12];
}
REAL F362_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         B                 B      !  B                 B             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P6     !  P6             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           G|P7         /==>======!==>==\          G|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         c  |  t     W+ |  E2     !  E2 |  W+    t  |  c             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[56];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C362(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[11]*(C[2]*(DP[10]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[6]+DP[7])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(DP[8]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[6]+
 DP[7])+DP[5]*(-DP[6]-DP[7])))+DP[8]*(C[12]*(-DP[1]-DP[3])+C[33]*(-DP[2]-
 DP[4])+C[3]*(DP[12]+DP[13]))+DP[9]*(C[12]*(-DP[1]-DP[3])+C[33]*(-DP[2]-
 DP[4])+C[3]*(DP[12]+DP[13]))+DP[6]*(C[12]*(DP[5]-S[2])+C[4]*(-DP[10]-
 DP[11])+C[14])+DP[7]*(C[33]*(DP[5]-S[2])+C[4]*(-DP[10]-DP[11])+C[39])+
 DP[14]*(C[3]*(S[2]-DP[5])-C[5]))+DP[10]*(C[10]*(DP[8]*(DP[12]-DP[1]-DP[3]+
 DP[13])+DP[9]*(DP[12]-DP[1]-DP[3]+DP[13])+S[2]*(DP[14]-DP[6])+DP[5]*(DP[6]-
 DP[14]))+C[44]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-
 S[2]))+C[11]*(DP[6]-DP[14])+C[47]*DP[7])+C[13]*(DP[8]*(DP[1]+DP[3]-DP[12]-
 DP[13])+DP[9]*(DP[1]+DP[3]-DP[12]-DP[13])+S[2]*(DP[6]-DP[14])+DP[5]*(
 DP[14]-DP[6]))+C[48]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[2]-
 DP[5]))+C[15]*(DP[14]-DP[6])-C[51]*DP[7];
tmp[1]=+DP[0]*(DP[11]*(C[6]*(DP[8]*(DP[12]-DP[1]-DP[3]+DP[13])+DP[9]*(
 DP[12]-DP[1]-DP[3]+DP[13])+S[2]*(DP[14]-DP[6])+DP[5]*(DP[6]-DP[14]))+C[12]*
 (DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[2]-DP[5]))+C[8]*(DP[6]-
 DP[14])-C[14]*DP[7])+DP[0]*(C[12]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-
 DP[9])+DP[7]*(DP[5]-S[2]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])+DP[14]*(S[2]-DP[5]))+C[14]*DP[7]-C[8]*DP[14])+DP[8]*(C[7]*(-DP[1]-
 DP[3])+C[40]*(-DP[2]-DP[4])+C[16]*(DP[12]+DP[13]))+DP[9]*(C[7]*(-DP[1]-
 DP[3])+C[40]*(-DP[2]-DP[4])+C[16]*(DP[12]+DP[13]))+S[2]*(C[16]*DP[14]-C[7]*
 DP[6]-C[40]*DP[7])+DP[5]*(C[7]*DP[6]+C[40]*DP[7]-C[16]*DP[14])+C[9]*DP[6]+
 C[43]*DP[7]-C[18]*DP[14]);
tmp[2]=+DP[10]*(DP[0]*(C[2]*(DP[0]*(DP[8]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[9]*
 (DP[2]+DP[4]-DP[12]-DP[13])+S[2]*(DP[7]-DP[14])+DP[5]*(DP[14]-DP[7]))+
 DP[10]*(DP[8]*(DP[12]-DP[2]-DP[4]+DP[13])+DP[9]*(DP[12]-DP[2]-DP[4]+
 DP[13])+S[2]*(DP[14]-DP[7])+DP[5]*(DP[7]-DP[14]))+DP[11]*(DP[8]*(DP[1]+
 DP[3]-DP[12]-DP[13])+DP[9]*(DP[1]+DP[3]-DP[12]-DP[13])+S[2]*(DP[6]-DP[14])+
 DP[5]*(DP[14]-DP[6])))+DP[8]*(C[3]*(DP[1]+DP[3])+C[33]*(DP[2]+DP[4])+C[12]*
 (-DP[12]-DP[13]))+DP[9]*(C[3]*(DP[1]+DP[3])+C[33]*(DP[2]+DP[4])+C[12]*(-
 DP[12]-DP[13]))+DP[14]*(C[4]*(DP[0]-DP[10]+DP[11])+C[12]*(DP[5]-S[2])+
 C[14])+DP[7]*(C[33]*(S[2]-DP[5])+C[4]*(DP[10]-DP[0])-C[39])+DP[6]*(C[3]*(
 S[2]-DP[5])-C[5]-C[4]*DP[11]))+tmp[0]);
tmp[3]=+DP[10]*(DP[0]*(S[2]*(C[20]*(DP[13]*(DP[10]-DP[0]-DP[11])+DP[4]*(
 DP[0]-DP[10])+DP[11]*DP[3])+C[21]*DP[3]+C[37]*DP[4]-C[25]*DP[13])+C[29]*(
 DP[12]*(DP[0]-DP[10]+DP[11])+DP[2]*(DP[10]-DP[0])-DP[11]*DP[1])+C[2]*(
 DP[13]*(DP[0]-DP[10]+DP[11])+DP[4]*(DP[10]-DP[0])-DP[11]*DP[3])+C[33]*(
 DP[12]-DP[4])+C[12]*DP[13]-C[30]*DP[1]-C[38]*DP[2]-C[3]*DP[3])+DP[11]*(
 S[2]*(C[20]*(DP[3]*(DP[10]+DP[11])+DP[4]*(DP[10]+DP[11]))+C[21]*DP[13]-
 C[25]*DP[3]-C[37]*DP[4])+DP[10]*(C[29]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+
 DP[11]*(C[29]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+C[33]*(DP[1]+DP[4])+
 C[38]*DP[2]+C[12]*DP[3]-C[30]*DP[12]-C[3]*DP[13])+DP[10]*(S[2]*(C[24]*(
 DP[13]-DP[3])-C[45]*DP[4])+C[32]*(DP[1]-DP[12])+C[10]*(DP[3]-DP[13])+C[46]*
 DP[2]+C[44]*DP[4])+S[2]*(C[26]*(DP[3]-DP[13])+C[49]*DP[4])+C[34]*(DP[12]-
 DP[1])+C[13]*(DP[13]-DP[3])-C[50]*DP[2]-C[48]*DP[4]);
tmp[4]=+S[2]*(DP[8]*(DP[0]*(DP[11]*(S[2]*(C[22]*(DP[13]-DP[3])+C[25]*DP[4])+
 C[12]*(DP[1]-DP[4]-DP[12])+C[6]*(DP[3]-DP[13])-C[33]*DP[2])+DP[0]*(S[2]*(
 C[22]*DP[13]-C[25]*DP[4])+C[12]*(DP[4]-DP[12])+C[33]*DP[2]-C[6]*DP[13])+
 S[2]*(C[27]*DP[13]-C[23]*DP[3]-C[41]*DP[4])+C[31]*DP[1]+C[42]*DP[2]+C[7]*
 DP[3]+C[40]*DP[4]-C[35]*DP[12]-C[16]*DP[13])+DP[11]*(DP[11]*(S[2]*(-C[22]*
 DP[3]-C[25]*DP[4])+C[12]*(DP[1]+DP[4])+C[33]*DP[2]+C[6]*DP[3])+S[2]*(C[27]*
 DP[3]+C[41]*DP[4]-C[23]*DP[13])+C[31]*DP[12]-C[35]*DP[1]-C[42]*DP[2]-C[16]*
 DP[3]-C[40]*DP[4]+C[7]*DP[13])+S[2]*(C[28]*(DP[13]-DP[3])-C[53]*DP[4])+
 C[36]*(DP[1]-DP[12])+C[17]*(DP[3]-DP[13])+C[54]*DP[2]+C[52]*DP[4]+tmp[3])+
 DP[9]*(DP[10]*(C[2]*(DP[0]*(DP[12]*(DP[0]-DP[10]+DP[11])+DP[2]*(DP[10]-
 DP[0])-DP[11]*DP[1])+DP[11]*(DP[1]*(-DP[10]-DP[11])+DP[2]*(-DP[10]-
 DP[11])))+DP[1]*(C[10]*DP[10]-C[13]-C[3]*DP[0]+C[12]*DP[11])+DP[2]*(C[33]*(
 DP[11]-DP[0])+C[44]*DP[10]-C[48])+DP[12]*(C[13]+C[12]*DP[0]-C[10]*DP[10]-
 C[3]*DP[11]))+DP[0]*(DP[2]*(C[12]*(DP[0]-DP[11])+C[40])+DP[12]*(C[6]*(-
 DP[0]-DP[11])-C[16])+DP[1]*(C[7]+C[6]*DP[11]))+DP[11]*(DP[1]*(C[6]*DP[11]-
 C[16])+DP[2]*(C[12]*DP[11]-C[40])+C[7]*DP[12])+C[17]*(DP[1]-DP[12])+C[52]*
 DP[2]));
R=+DP[5]*(DP[11]*(DP[11]*(C[6]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+
 DP[6]*(DP[5]-S[2]))+C[12]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*
 (DP[5]-S[2]))+C[8]*DP[6]+C[14]*DP[7])+DP[8]*(C[16]*(DP[1]+DP[3])+C[40]*(
 DP[2]+DP[4])+C[7]*(-DP[12]-DP[13]))+DP[9]*(C[16]*(DP[1]+DP[3])+C[40]*(
 DP[2]+DP[4])+C[7]*(-DP[12]-DP[13]))+S[2]*(C[16]*DP[6]+C[40]*DP[7]-C[7]*
 DP[14])+DP[5]*(C[7]*DP[14]-C[16]*DP[6]-C[40]*DP[7])+C[9]*DP[14]-C[18]*
 DP[6]-C[43]*DP[7])+C[17]*(DP[8]*(DP[12]-DP[1]-DP[3]+DP[13])+DP[9]*(DP[12]-
 DP[1]-DP[3]+DP[13])+S[2]*(DP[14]-DP[6])+DP[5]*(DP[6]-DP[14]))+C[52]*(DP[2]*
 (-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[2]))+C[19]*(DP[6]-
 DP[14])+C[55]*DP[7]+tmp[1]+tmp[2])+tmp[4];
R*=(N/D)*Q2[4]*Q2[2]*Q2[3];
if(gswidth_out ) R=R*Q0[1];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
