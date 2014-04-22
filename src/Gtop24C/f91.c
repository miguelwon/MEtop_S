/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F91_out;
static void C91(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[22]=+S[2]*(S[1]*(V[15]*(2*V[16]+V[15])+S[0]));
C[21]=+S[2]*(V[15]*(10*V[15]-20*V[16])+10*S[0]);
C[20]=+S[2]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[19]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[18]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[17]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
S[3]=V[7]*V[7];
C[16]=+S[3]*(V[15]*(40*V[15]-80*V[16])+40*S[0]);
C[15]=+S[3]*(S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]));
C[14]=+S[3]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[13]=+S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]);
C[12]=+V[15]*(40*V[15]-80*V[16])+40*S[0];
C[11]=+S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]);
C[10]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[9]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[8]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[7]=+S[3]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[6]=+S[3]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
C[5]=+S[3]*(S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]));
C[4]=+S[3]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[3]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[2]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[6]*S[7]*S[8];
}
REAL F91_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      G                       n2     !  n2                           
    -1---\                 /==>======!==>==\                         
      P1 |                 |  P4     !  P4 |                         
         |                 |         !     |                         
      u  |  u     t     W+ |  E2     !  E2 |  W+    t     G          
    ==>==@==>==@==>==@-3>--@==<======!==<==@-->4-@==>==@---1-        
      P2    P7 |  P8 |  P9    P5     !  P5   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/    u|-PA          
               |              P6     !  P6             |             
               |                     !                 |             
               |              G      !  G              |  u          
               \-------------2-------!---2-------------@==>==        
                              P3     !  P3                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[23];REAL S[4];REAL tmp[3];                                    
     
if(CalcConst) C91(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[2]*(C[2]*(DP[0]*(DP[13]*(DP[3]+DP[5]+DP[6]+DP[8])+DP[14]*(DP[3]+
 DP[5]+DP[6]+DP[8])+S[2]*(DP[10]+DP[12])+DP[9]*(-DP[10]-DP[12]))+DP[2]*(
 DP[13]*(DP[3]+DP[5]+DP[6]+DP[8])+DP[14]*(DP[3]+DP[5]+DP[6]+DP[8])+S[2]*(
 DP[10]+DP[12])+DP[9]*(-DP[10]-DP[12])))+C[3]*(DP[1]*(DP[13]*(DP[3]-DP[5]+
 DP[6]-DP[8])+DP[14]*(DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+DP[9]*(
 DP[12]-DP[10]))+DP[0]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(
 S[2]-DP[9]))+DP[2]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(
 DP[9]-S[2])))+DP[1]*(C[6]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+
 DP[11]*(DP[9]-S[2]))+C[18]*(DP[12]-DP[10])+C[21]*DP[11])+C[7]*(DP[4]*(-
 DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[17]*(DP[0]*(-
 DP[10]-DP[12])+DP[2]*(-DP[10]-DP[12]))+DP[11]*(C[18]*(DP[2]-DP[0])+C[22]));
tmp[1]=+S[2]*(DP[13]*(DP[2]*(S[2]*(DP[7]*(C[9]*(DP[0]-DP[2])-C[13]-C[12]*
 DP[1])+C[8]*(DP[0]*(DP[6]+DP[8])+DP[2]*(DP[6]+DP[8]))+DP[1]*(C[9]*(DP[6]-
 DP[8])))+C[3]*(DP[0]*(-DP[3]-DP[5]-DP[7])+DP[2]*(DP[7]-DP[3]-DP[5])+DP[1]*(
 DP[8]-DP[6]))+DP[1]*(C[4]*(DP[5]-DP[3])+C[16]*DP[4]+C[6]*DP[7])+C[2]*(
 DP[0]*(-DP[6]-DP[8])+DP[2]*(-DP[6]-DP[8]))+DP[4]*(C[4]*(DP[2]-DP[0])+C[5])+
 C[7]*DP[7])+DP[1]*(S[2]*(DP[7]*(C[9]*DP[0]-C[11]-C[10]*DP[1])+DP[8]*(C[10]*
 DP[0]-C[11]-C[9]*DP[1]))+DP[0]*(C[4]*(-DP[4]-DP[8])-C[14]*DP[5]-C[3]*
 DP[7])+DP[1]*(C[4]*(DP[5]+DP[7])+C[14]*DP[4]+C[3]*DP[8])+C[15]*(DP[4]+
 DP[5])+C[5]*(DP[7]+DP[8]))+DP[0]*(DP[8]*(S[2]*(C[11]-C[9]*DP[0])+C[3]*
 DP[0]-C[5])+DP[5]*(C[4]*DP[0]-C[15])))+DP[14]*(DP[2]*(DP[4]*(C[3]*(DP[2]-
 DP[0])+C[7]+C[6]*DP[1])+C[2]*(DP[0]*(-DP[3]-DP[5])+DP[2]*(-DP[3]-DP[5]))+
 DP[1]*(C[3]*(DP[5]-DP[3])))+DP[1]*(DP[4]*(C[5]-C[3]*DP[0]+C[4]*DP[1])+
 DP[5]*(C[5]-C[4]*DP[0]+C[3]*DP[1]))+DP[0]*(DP[5]*(C[3]*DP[0]-C[5]))));
S[3]=DP[2]*DP[2];
tmp[2]=+DP[1]*(DP[2]*(DP[9]*(DP[1]*(C[3]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-
 DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[4]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[18]*DP[10]-C[19]*DP[11])+DP[2]*(C[4]*
 (DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[3]*(
 DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[19]*
 DP[10]-C[18]*DP[11])+C[5]*(DP[13]*(DP[4]-DP[3]-DP[6]+DP[7])+DP[14]*(DP[4]-
 DP[3]-DP[6]+DP[7])+S[2]*(DP[11]-DP[10])+DP[9]*(DP[10]-DP[11]))+C[20]*(
 DP[10]-DP[11]))+S[2]*(DP[13]*(S[2]*(DP[6]*(-C[11]-C[9]*DP[1]-C[10]*DP[2])+
 DP[7]*(C[11]+C[10]*DP[1]+C[9]*DP[2]))+DP[1]*(C[4]*(DP[3]-DP[7])+C[3]*DP[6]-
 C[14]*DP[4])+DP[2]*(C[4]*(DP[6]-DP[4])+C[14]*DP[3]-C[3]*DP[7])+C[15]*(
 DP[3]-DP[4])+C[5]*(DP[6]-DP[7]))+DP[14]*(DP[3]*(C[5]+C[3]*DP[1]+C[4]*
 DP[2])+DP[4]*(-C[5]-C[4]*DP[1]-C[3]*DP[2]))))+DP[1]*(DP[9]*(DP[1]*(C[3]*(
 DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[18]*
 DP[11])+C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))-C[20]*DP[11])+S[2]*(DP[13]*(DP[7]*(S[2]*(C[11]+C[9]*DP[1])-C[5]-
 C[3]*DP[1])+DP[4]*(-C[15]-C[4]*DP[1]))+DP[4]*(DP[14]*(-C[5]-C[3]*
 DP[1])))));
R=+DP[0]*(DP[9]*(DP[1]*(DP[0]*(C[3]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+
 DP[14])+DP[11]*(S[2]-DP[9]))+C[4]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+
 DP[14])+DP[12]*(S[2]-DP[9]))-C[18]*DP[11]-C[19]*DP[12])+DP[1]*(C[4]*(DP[4]*
 (-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[3]*(DP[5]*(-
 DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[19]*DP[11]+
 C[18]*DP[12])+C[5]*(DP[13]*(-DP[4]-DP[5]-DP[7]-DP[8])+DP[14]*(-DP[4]-DP[5]-
 DP[7]-DP[8])+S[2]*(-DP[11]-DP[12])+DP[9]*(DP[11]+DP[12]))+C[20]*(DP[11]+
 DP[12]))+DP[0]*(DP[0]*(C[3]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+
 DP[12]*(DP[9]-S[2]))+C[18]*DP[12])+C[5]*(DP[5]*(DP[13]+DP[14])+DP[8]*(
 DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[20]*DP[12])+tmp[0])+tmp[1])+S[3]*(
 DP[9]*(DP[2]*(C[3]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(
 DP[9]-S[2]))+C[18]*DP[10])+C[5]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[20]*DP[10])+S[2]*(DP[13]*(DP[6]*(S[2]*(-
 C[11]-C[9]*DP[2])+C[5]+C[3]*DP[2])+DP[3]*(C[15]+C[4]*DP[2]))+DP[3]*(DP[14]*
 (C[5]+C[3]*DP[2]))))+tmp[2];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
