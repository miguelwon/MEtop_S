/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F290_out;
static void C290(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9];
S[3]=V[20]*V[20];
S[4]=V[10]*V[10]*V[10]*V[10];
S[5]=V[8]*V[8]*V[8]*V[8];
C[55]=+S[5]*(S[4]*(V[19]*(V[19]*(V[9]*(4*V[11]+V[9])+S[0]-2*S[1])+V[20]*(2*(
 S[0]-S[2])+4*S[1]))+S[3]*(V[9]*(V[9]-4*V[11])+S[0]-2*S[1])));
C[54]=+S[5]*(S[1]*(V[19]*(V[19]*(V[9]*(6*V[11]+V[9])+S[0]-4*S[1])+V[20]*(2*(
 S[0]-S[2])+8*S[1]))+S[3]*(V[9]*(V[9]-6*V[11])+S[0]-4*S[1])));
S[6]=V[19]*V[19];
C[53]=+S[5]*(2*(S[1]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-4*V[20]*V[19]*
 S[1]);
C[52]=+S[5]*(S[4]*(V[19]*(6*V[19]-12*V[20])+6*S[3]));
C[51]=+S[5]*(S[1]*(V[19]*(8*V[19]-16*V[20])+8*S[3]));
S[7]=V[8]*V[8];
C[50]=+S[4]*(S[7]*(V[19]*(V[19]*(V[9]*(16*V[11]+4*V[9])+4*S[0]-8*S[1])+
 V[20]*(8*(S[0]-S[2])+16*S[1]))+S[3]*(V[9]*(4*V[9]-16*V[11])+4*S[0]-8*
 S[1])));
C[49]=+S[4]*(V[19]*(V[19]*(V[9]*(16*V[11]+4*V[9])+4*S[0]-8*S[1])+V[20]*(8*(
 S[0]-S[2])+16*S[1]))+S[3]*(V[9]*(4*V[9]-16*V[11])+4*S[0]-8*S[1]));
C[48]=+S[7]*(S[1]*(V[19]*(V[19]*(V[9]*(24*V[11]+4*V[9])+4*S[0]-16*S[1])+
 V[20]*(8*(S[0]-S[2])+32*S[1]))+S[3]*(V[9]*(4*V[9]-24*V[11])+4*S[0]-16*
 S[1])));
C[47]=+S[1]*(V[19]*(V[19]*(V[9]*(24*V[11]+4*V[9])+4*S[0]-16*S[1])+V[20]*(8*(
 S[0]-S[2])+32*S[1]))+S[3]*(V[9]*(4*V[9]-24*V[11])+4*S[0]-16*S[1]));
C[46]=+S[7]*(8*(S[1]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-16*V[20]*V[19]*
 S[1]);
C[45]=+8*(S[1]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-16*V[20]*V[19]*S[1];
C[44]=+S[4]*(S[7]*(V[19]*(24*V[19]-48*V[20])+24*S[3]));
C[43]=+S[4]*(V[19]*(24*V[19]-48*V[20])+24*S[3]);
C[42]=+S[7]*(S[1]*(V[19]*(32*V[19]-64*V[20])+32*S[3]));
C[41]=+S[1]*(V[19]*(32*V[19]-64*V[20])+32*S[3]);
C[40]=+S[4]*(S[7]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(16*(
 S[3]-S[6])))));
C[39]=+S[7]*(S[1]*(V[19]*(V[19]*(4*(S[0]-S[2])+8*S[1])+V[20]*(8*(S[0]+S[2])-
 16*S[1]))+S[3]*(4*(S[0]-S[2])+8*S[1])));
C[38]=+S[7]*(S[1]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(24*(
 S[3]-S[6])))));
C[37]=+S[7]*(V[9]*(V[11]*(8*(S[3]-S[6]))));
C[36]=+S[7]*(S[1]*(V[19]*(S[2]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+
 S[3]*(8*(S[0]-S[2]))));
C[35]=+S[7]*(V[19]*(S[2]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+S[3]*(4*(
 S[0]-S[2])));
C[34]=+S[7]*(V[19]*(8*V[19]-16*V[20])+8*S[3]);
C[33]=+S[4]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(16*(S[3]-
 S[6]))));
C[32]=+S[1]*(V[19]*(V[19]*(4*(S[0]-S[2])+8*S[1])+V[20]*(8*(S[0]+S[2])-16*
 S[1]))+S[3]*(4*(S[0]-S[2])+8*S[1]));
C[31]=+S[1]*(V[9]*(V[9]*(V[19]*(16*V[20]-8*V[19])-8*S[3])+V[11]*(24*(S[3]-
 S[6]))));
C[30]=+S[1]*(V[19]*(16*V[19]-32*V[20])+16*S[3]);
C[29]=+V[9]*(V[11]*(8*(S[3]-S[6])));
C[28]=+S[1]*(V[19]*(S[2]*(16*V[20]-8*V[19])+S[0]*(16*V[20]+8*V[19]))+S[3]*(
 8*(S[0]-S[2])));
C[27]=+S[1]*(V[19]*(8*V[19]-16*V[20])+8*S[3]);
C[26]=+V[19]*(S[2]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+S[3]*(4*(S[0]-
 S[2]));
C[25]=+V[19]*(8*V[19]-16*V[20])+8*S[3];
C[24]=+S[4]*(S[7]*(V[19]*(V[19]*(V[9]*(8*V[11]+2*V[9])+2*S[0]-4*S[1])+V[20]*
 (4*(S[0]-S[2])+8*S[1]))+S[3]*(V[9]*(2*V[9]-8*V[11])+2*S[0]-4*S[1])));
C[23]=+S[7]*(S[1]*(V[19]*(V[19]*(V[9]*(12*V[11]+2*V[9])+2*S[0]-8*S[1])+
 V[20]*(4*(S[0]-S[2])+16*S[1]))+S[3]*(V[9]*(2*V[9]-12*V[11])+2*S[0]-8*
 S[1])));
C[22]=+S[7]*(4*(S[1]*(S[3]+S[6])+V[9]*(V[11]*(S[3]-S[6])))-8*V[20]*V[19]*
 S[1]);
C[21]=+S[4]*(S[7]*(V[19]*(12*V[19]-24*V[20])+12*S[3]));
C[20]=+S[7]*(S[1]*(V[19]*(16*V[19]-32*V[20])+16*S[3]));
C[19]=+S[5]*(S[4]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[3])+V[11]*(4*(
 S[3]-S[6])))));
C[18]=+S[5]*(S[1]*(V[19]*(V[19]*(S[0]+2*S[1]-S[2])+V[20]*(2*(S[0]+S[2])-4*
 S[1]))+S[3]*(S[0]+2*S[1]-S[2])));
C[17]=+S[4]*(S[7]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[3])+V[11]*(8*(
 S[3]-S[6])))));
C[16]=+S[7]*(S[1]*(V[19]*(V[19]*(2*(S[0]-S[2])+4*S[1])+V[20]*(4*(S[0]+S[2])-
 8*S[1]))+S[3]*(2*(S[0]-S[2])+4*S[1])));
C[15]=+S[5]*(S[1]*(V[9]*(V[9]*(V[19]*(4*V[20]-2*V[19])-2*S[3])+V[11]*(6*(
 S[3]-S[6])))));
C[14]=+S[5]*(S[1]*(V[19]*(4*V[19]-8*V[20])+4*S[3]));
C[13]=+S[7]*(S[1]*(V[9]*(V[9]*(V[19]*(8*V[20]-4*V[19])-4*S[3])+V[11]*(12*(
 S[3]-S[6])))));
C[12]=+S[7]*(S[1]*(V[19]*(8*V[19]-16*V[20])+8*S[3]));
C[11]=+S[5]*(V[9]*(V[11]*(2*(S[3]-S[6]))));
C[10]=+S[7]*(V[9]*(V[11]*(4*(S[3]-S[6]))));
C[9]=+S[5]*(S[1]*(V[19]*(S[2]*(4*V[20]-2*V[19])+S[0]*(4*V[20]+2*V[19]))+
 S[3]*(2*(S[0]-S[2]))));
C[8]=+S[5]*(S[1]*(V[19]*(2*V[19]-4*V[20])+2*S[3]));
C[7]=+S[7]*(S[1]*(V[19]*(S[2]*(8*V[20]-4*V[19])+S[0]*(8*V[20]+4*V[19]))+
 S[3]*(4*(S[0]-S[2]))));
C[6]=+S[7]*(S[1]*(V[19]*(4*V[19]-8*V[20])+4*S[3]));
C[5]=+S[5]*(V[19]*(S[2]*(2*V[20]-V[19])+S[0]*(2*V[20]+V[19]))+S[3]*(S[0]-
 S[2]));
C[4]=+S[5]*(V[19]*(2*V[19]-4*V[20])+2*S[3]);
C[3]=+S[7]*(V[19]*(S[2]*(4*V[20]-2*V[19])+S[0]*(4*V[20]+2*V[19]))+S[3]*(2*(
 S[0]-S[2])));
C[2]=+S[7]*(V[19]*(4*V[19]-8*V[20])+4*S[3]);
S[8]=V[14]*V[14];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[33]*V[33];
S[11]=V[16]*V[16];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[10]*S[11]*S[12];
}
REAL F290_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         S                 S      !  S                 S             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
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
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[56];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C290(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[1];
S[2]=V[34]*V[34];
tmp[0]=+DP[7]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(
 DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11])))+DP[12]*(C[12]*(-DP[1]-DP[3])+C[20]*
 (-DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[13]*(C[12]*(-DP[1]-DP[3])+C[20]*(-
 DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[10]*(C[12]*(DP[5]-S[2])+C[4]*(-DP[6]-
 DP[7])+C[14])+DP[11]*(C[20]*(DP[5]-S[2])+C[4]*(-DP[6]-DP[7])+C[51])+DP[14]*
 (C[3]*(S[2]-DP[5])-C[5]))+DP[6]*(C[10]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-
 DP[14]))+C[22]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2]))+C[11]*(DP[10]-DP[14])+C[53]*DP[11])+C[13]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2]))+C[15]*(DP[14]-DP[10])+C[54]*DP[11];
tmp[1]=+DP[0]*(DP[7]*(C[6]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[12]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[8]*(
 DP[10]-DP[14])-C[14]*DP[11])+DP[0]*(C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))+C[14]*DP[11]-C[8]*DP[14])+DP[12]*(C[7]*
 (-DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[16]*(DP[8]+DP[9]))+DP[13]*(C[7]*(-
 DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[16]*(DP[8]+DP[9]))+S[2]*(C[16]*DP[14]-
 C[7]*DP[10]-C[21]*DP[11])+DP[5]*(C[7]*DP[10]+C[21]*DP[11]-C[16]*DP[14])+
 C[9]*DP[10]+C[52]*DP[11]-C[18]*DP[14]);
tmp[2]=+DP[7]*(DP[7]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+C[8]*DP[10]+C[14]*DP[11])+DP[12]*(C[16]*(DP[1]+DP[3])+
 C[21]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(DP[1]+DP[3])+C[21]*
 (DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+S[2]*(C[16]*DP[10]+C[21]*DP[11]-C[7]*
 DP[14])+DP[5]*(C[7]*DP[14]-C[16]*DP[10]-C[21]*DP[11])+C[9]*DP[14]-C[18]*
 DP[10]-C[52]*DP[11])+C[17]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[24]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[19]*(
 DP[10]-DP[14])-C[55]*DP[11]+tmp[1];
tmp[3]=+DP[6]*(DP[0]*(S[2]*(C[25]*(DP[9]*(DP[6]-DP[0]-DP[7])+DP[4]*(DP[0]-
 DP[6])+DP[7]*DP[3])+C[26]*DP[3]+C[41]*DP[4]-C[30]*DP[9])+C[34]*(DP[8]*(
 DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+C[2]*(DP[9]*(DP[0]-
 DP[6]+DP[7])+DP[4]*(DP[6]-DP[0])-DP[7]*DP[3])+C[20]*(DP[8]-DP[4])+C[12]*
 DP[9]-C[35]*DP[1]-C[42]*DP[2]-C[3]*DP[3])+DP[7]*(S[2]*(C[25]*(DP[3]*(DP[6]+
 DP[7])+DP[4]*(DP[6]+DP[7]))+C[26]*DP[9]-C[30]*DP[3]-C[41]*DP[4])+DP[6]*(
 C[34]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+DP[7]*(C[34]*(-DP[1]-DP[2])+C[2]*
 (-DP[3]-DP[4]))+C[20]*(DP[1]+DP[4])+C[42]*DP[2]+C[12]*DP[3]-C[35]*DP[8]-
 C[3]*DP[9])+DP[6]*(S[2]*(C[29]*(DP[9]-DP[3])-C[45]*DP[4])+C[37]*(DP[1]-
 DP[8])+C[10]*(DP[3]-DP[9])+C[46]*DP[2]+C[22]*DP[4])+S[2]*(C[31]*(DP[3]-
 DP[9])-C[47]*DP[4])+C[38]*(DP[8]-DP[1])+C[13]*(DP[9]-DP[3])+C[48]*DP[2]+
 C[23]*DP[4]);
tmp[4]=+S[2]*(DP[12]*(DP[0]*(DP[7]*(S[2]*(C[27]*(DP[9]-DP[3])+C[30]*DP[4])+
 C[12]*(DP[1]-DP[4]-DP[8])+C[6]*(DP[3]-DP[9])-C[20]*DP[2])+DP[0]*(S[2]*(
 C[27]*DP[9]-C[30]*DP[4])+C[12]*(DP[4]-DP[8])+C[20]*DP[2]-C[6]*DP[9])+S[2]*(
 C[32]*DP[9]-C[28]*DP[3]-C[43]*DP[4])+C[36]*DP[1]+C[44]*DP[2]+C[7]*DP[3]+
 C[21]*DP[4]-C[39]*DP[8]-C[16]*DP[9])+DP[7]*(DP[7]*(S[2]*(-C[27]*DP[3]-
 C[30]*DP[4])+C[12]*(DP[1]+DP[4])+C[20]*DP[2]+C[6]*DP[3])+S[2]*(C[32]*DP[3]+
 C[43]*DP[4]-C[28]*DP[9])+C[36]*DP[8]-C[39]*DP[1]-C[44]*DP[2]-C[16]*DP[3]-
 C[21]*DP[4]+C[7]*DP[9])+S[2]*(C[33]*(DP[9]-DP[3])+C[49]*DP[4])+C[40]*(
 DP[1]-DP[8])+C[17]*(DP[3]-DP[9])-C[50]*DP[2]-C[24]*DP[4]+tmp[3])+DP[13]*(
 DP[6]*(C[2]*(DP[0]*(DP[8]*(DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*
 DP[1])+DP[7]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])))+DP[1]*(C[10]*
 DP[6]-C[13]-C[3]*DP[0]+C[12]*DP[7])+DP[2]*(C[20]*(DP[7]-DP[0])+C[23]+C[22]*
 DP[6])+DP[8]*(C[13]+C[12]*DP[0]-C[10]*DP[6]-C[3]*DP[7]))+DP[0]*(DP[2]*(
 C[12]*(DP[0]-DP[7])+C[21])+DP[8]*(C[6]*(-DP[0]-DP[7])-C[16])+DP[1]*(C[7]+
 C[6]*DP[7]))+DP[7]*(DP[1]*(C[6]*DP[7]-C[16])+DP[2]*(C[12]*DP[7]-C[21])+
 C[7]*DP[8])+C[17]*(DP[1]-DP[8])-C[24]*DP[2]));
R=+DP[5]*(DP[6]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10])))+DP[12]*(C[3]*(DP[1]+DP[3])+C[20]*(DP[2]+DP[4])+
 C[12]*(-DP[8]-DP[9]))+DP[13]*(C[3]*(DP[1]+DP[3])+C[20]*(DP[2]+DP[4])+C[12]*
 (-DP[8]-DP[9]))+DP[14]*(C[4]*(DP[0]-DP[6]+DP[7])+C[12]*(DP[5]-S[2])+C[14])+
 DP[11]*(C[20]*(S[2]-DP[5])+C[4]*(DP[6]-DP[0])-C[51])+DP[10]*(C[3]*(S[2]-
 DP[5])-C[5]-C[4]*DP[7]))+tmp[0])+tmp[2])+tmp[4];
R*=(N/D)*Q2[4]*Q2[2]*Q2[3];
if(gswidth_out ) R=R*Q0[1];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
