/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F115_out;
static void C115(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9]*V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[53]=+S[2]*(S[1]*(V[15]*(5*V[15]-10*V[16])+5*S[0]));
S[3]=V[9]*V[9];
C[52]=+S[2]*(S[3]*(V[15]*(24*V[16]+12*V[15])+12*S[0]));
C[51]=+S[2]*(S[3]*(V[15]*(20*V[15]-24*V[16])+20*S[0]));
C[50]=+S[2]*(S[3]*(V[15]*(2*V[15]-4*V[16])+2*S[0]));
C[49]=+S[2]*(V[15]*(24*V[15]-48*V[16])+24*S[0]);
C[48]=+S[2]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[47]=+S[2]*(S[1]*(V[15]*(V[15]-2*V[16])+S[0]));
C[46]=+S[2]*(S[3]*(V[15]*(4*V[16]+6*V[15])+6*S[0]));
C[45]=+S[2]*(S[3]*(V[15]*(32*V[16]+16*V[15])+16*S[0]));
C[44]=+S[2]*(V[15]*(12*V[15]-24*V[16])+12*S[0]);
C[43]=+S[2]*(S[3]*(V[15]*(20*V[16]+14*V[15])+14*S[0]));
C[42]=+S[2]*(S[3]*(V[15]*(8*V[16]+12*V[15])+12*S[0]));
C[41]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[40]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
S[4]=V[7]*V[7];
C[39]=+S[1]*(S[4]*(V[15]*(20*V[15]-40*V[16])+20*S[0]));
C[38]=+S[4]*(S[3]*(V[15]*(96*V[16]+48*V[15])+48*S[0]));
C[37]=+S[4]*(S[3]*(V[15]*(80*V[15]-96*V[16])+80*S[0]));
C[36]=+S[4]*(S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]));
C[35]=+S[4]*(V[15]*(96*V[15]-192*V[16])+96*S[0]);
C[34]=+S[4]*(V[15]*(64*V[15]-128*V[16])+64*S[0]);
C[33]=+S[1]*(S[4]*(V[15]*(4*V[15]-8*V[16])+4*S[0]));
C[32]=+S[4]*(S[3]*(V[15]*(128*V[16]+64*V[15])+64*S[0]));
C[31]=+S[4]*(S[3]*(V[15]*(80*V[16]+56*V[15])+56*S[0]));
C[30]=+S[4]*(S[3]*(V[15]*(32*V[16]+48*V[15])+48*S[0]));
C[29]=+S[1]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
C[28]=+S[3]*(V[15]*(96*V[16]+48*V[15])+48*S[0]);
C[27]=+S[3]*(V[15]*(80*V[15]-96*V[16])+80*S[0]);
C[26]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[25]=+V[15]*(96*V[15]-192*V[16])+96*S[0];
C[24]=+V[15]*(64*V[15]-128*V[16])+64*S[0];
C[23]=+S[1]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[22]=+S[3]*(V[15]*(16*V[16]+24*V[15])+24*S[0]);
C[21]=+S[3]*(V[15]*(128*V[16]+64*V[15])+64*S[0]);
C[20]=+V[15]*(48*V[15]-96*V[16])+48*S[0];
C[19]=+S[3]*(V[15]*(80*V[16]+56*V[15])+56*S[0]);
C[18]=+S[3]*(V[15]*(32*V[16]+48*V[15])+48*S[0]);
C[17]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[16]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[15]=+S[1]*(S[4]*(V[15]*(10*V[15]-20*V[16])+10*S[0]));
C[14]=+S[4]*(S[3]*(V[15]*(48*V[16]+24*V[15])+24*S[0]));
C[13]=+S[4]*(S[3]*(V[15]*(40*V[15]-48*V[16])+40*S[0]));
C[12]=+S[4]*(S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]));
C[11]=+S[4]*(V[15]*(48*V[15]-96*V[16])+48*S[0]);
C[10]=+S[4]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[9]=+S[1]*(S[4]*(V[15]*(2*V[15]-4*V[16])+2*S[0]));
C[8]=+S[4]*(S[3]*(V[15]*(8*V[16]+12*V[15])+12*S[0]));
C[7]=+S[4]*(S[3]*(V[15]*(64*V[16]+32*V[15])+32*S[0]));
C[6]=+S[4]*(V[15]*(24*V[15]-48*V[16])+24*S[0]);
C[5]=+S[4]*(S[3]*(V[15]*(40*V[16]+28*V[15])+28*S[0]));
C[4]=+S[4]*(S[3]*(V[15]*(16*V[16]+24*V[15])+24*S[0]));
C[3]=+S[4]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[2]=+S[4]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
S[5]=V[12]*V[12];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[5]*S[6];
S[7]=V[22]*V[22];
S[8]=V[13]*V[13];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8]*S[9];
}
REAL F115_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                        N2     !  N2                      G          
                     /==<======!==<==\                 /---1-        
                     |  P4     !  P4 |                 |  P1         
                     |         !     |                 |             
      G     t     W+ |  e2     !  e2 |  W+    t     t  |  U          
    -1---@==<==@-3<--@==>======!==>==@--<4-@==<==@==<==@==<==        
      P1 |  P8 |  P9    P5     !  P5   -PC | -PB | -PA    P2         
         |     |               !           |     |                   
         |     |        B      !  B        |     |                   
        t|P7   \========<======!==<========/     |                   
         |              P6     !  P6             |                   
         |                     !                 |                   
      U  |              G      !  G              |                   
    ==<==@-------------2-------!---2-------------/                   
      P2                P3     !  P3                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[54];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C115(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[2]*(C[3]*(DP[13]*(DP[3]-DP[5]+DP[6]-DP[8])+DP[14]*(DP[3]-
 DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+DP[9]*(DP[12]-DP[10]))+C[11]*(
 DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[41]*(
 DP[12]-DP[10])+C[49]*DP[11])+DP[0]*(C[2]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[6]*(DP[5]*(DP[13]+DP[14])+DP[8]*(
 DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[40]*DP[11]-C[44]*DP[12])+DP[1]*(C[6]*
 (DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[3]*(
 DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[44]*
 DP[11]+C[41]*DP[12])+DP[13]*(C[4]*(DP[3]+DP[6])+C[12]*(-DP[4]-DP[7])+C[7]*
 (-DP[5]-DP[8]))+DP[14]*(C[4]*(DP[3]+DP[6])+C[12]*(-DP[4]-DP[7])+C[7]*(-
 DP[5]-DP[8]))+S[2]*(C[4]*DP[10]-C[12]*DP[11]-C[7]*DP[12])+DP[9]*(C[12]*
 DP[11]-C[4]*DP[10]+C[7]*DP[12])+C[50]*DP[11]-C[42]*DP[10]+C[45]*DP[12]);
tmp[1]=+DP[1]*(DP[2]*(DP[1]*(C[3]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[6]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+
 DP[14])+DP[11]*(S[2]-DP[9]))+C[41]*DP[10]-C[44]*DP[11])+DP[2]*(C[6]*(DP[3]*
 (-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[2]*(DP[4]*(
 DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[44]*DP[10]-
 C[40]*DP[11])+DP[13]*(C[7]*(-DP[3]-DP[6])+C[12]*(DP[4]+DP[7])+C[4]*(DP[5]+
 DP[8]))+DP[14]*(C[7]*(-DP[3]-DP[6])+C[12]*(DP[4]+DP[7])+C[4]*(DP[5]+
 DP[8]))+S[2]*(C[12]*DP[11]-C[7]*DP[10]+C[4]*DP[12])+DP[9]*(C[7]*DP[10]-
 C[12]*DP[11]-C[4]*DP[12])+C[45]*DP[10]-C[50]*DP[11]-C[42]*DP[12])+DP[1]*(
 DP[1]*(C[3]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))-C[41]*DP[11])+C[14]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))-C[52]*DP[11])+C[15]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[53]*DP[11])+DP[2]*(DP[2]*(DP[2]*(
 C[2]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+
 C[40]*DP[10])+C[8]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(
 DP[9]-S[2]))+C[46]*DP[10])+C[9]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[47]*DP[10]);
tmp[2]=+DP[0]*(DP[1]*(S[2]*(DP[7]*(C[16]*DP[0]-C[26]-C[20]*DP[1]-C[25]*
 DP[2])+DP[8]*(C[17]*(-DP[1]-DP[2])+C[20]*DP[0]-C[21])+DP[6]*(C[18]+C[17]*
 DP[2]))+DP[2]*(C[2]*(DP[5]-DP[3])+C[3]*(DP[8]-DP[6])+C[35]*DP[4]+C[11]*
 DP[7])+DP[0]*(-C[10]*DP[4]-C[11]*DP[5]-C[2]*DP[7]-C[6]*DP[8])+DP[1]*(C[11]*
 DP[4]+C[2]*DP[5]+C[6]*DP[7]+C[3]*DP[8])+C[36]*DP[4]-C[30]*DP[3]+C[32]*
 DP[5]-C[4]*DP[6]+C[12]*DP[7]+C[7]*DP[8])+DP[2]*(S[2]*(DP[7]*(C[24]*(DP[0]-
 DP[2])-C[27])+DP[6]*(C[16]*DP[0]-C[19])+DP[8]*(C[19]+C[16]*DP[2]))+DP[0]*(
 C[10]*(-DP[3]-DP[7])-C[34]*DP[4]-C[2]*DP[6])+DP[2]*(C[10]*(DP[7]-DP[5])+
 C[34]*DP[4]-C[2]*DP[8])+C[31]*(DP[3]-DP[5])+C[5]*(DP[6]-DP[8])+C[37]*DP[4]+
 C[13]*DP[7])+DP[0]*(DP[8]*(S[2]*(C[22]-C[16]*DP[0])+C[2]*DP[0]-C[8])+DP[5]*
 (C[10]*DP[0]-C[4]))+DP[8]*(C[9]-C[23]*S[2])+C[33]*DP[5]);
tmp[3]=+S[2]*(DP[13]*(DP[1]*(DP[2]*(S[2]*(DP[6]*(-C[21]-C[17]*DP[1]-C[20]*
 DP[2])+DP[7]*(C[26]+C[20]*DP[1]+C[16]*DP[2])+C[18]*DP[8])+DP[1]*(C[2]*
 DP[3]-C[11]*DP[4]+C[3]*DP[6]-C[6]*DP[7])+DP[2]*(C[11]*DP[3]-C[10]*DP[4]+
 C[6]*DP[6]-C[2]*DP[7])+C[32]*DP[3]-C[36]*DP[4]-C[30]*DP[5]+C[7]*DP[6]-
 C[12]*DP[7]-C[4]*DP[8])+DP[1]*(DP[7]*(S[2]*(C[28]+C[17]*DP[1])-C[14]-C[3]*
 DP[1])+DP[4]*(-C[38]-C[2]*DP[1]))+DP[7]*(C[29]*S[2]-C[15])-C[39]*DP[4])+
 DP[2]*(DP[2]*(DP[6]*(S[2]*(-C[22]-C[16]*DP[2])+C[8]+C[2]*DP[2])+DP[3]*(
 C[4]+C[10]*DP[2]))+DP[6]*(C[9]-C[23]*S[2])+C[33]*DP[3])+tmp[2])+DP[14]*(
 DP[0]*(DP[1]*(DP[4]*(C[12]-C[2]*DP[0]+C[6]*DP[1]+C[11]*DP[2])+DP[5]*(C[3]*(
 DP[1]+DP[2])+C[7]-C[6]*DP[0])+DP[3]*(-C[4]-C[3]*DP[2]))+DP[2]*(DP[4]*(
 C[10]*(DP[2]-DP[0])+C[13])+DP[3]*(C[5]-C[2]*DP[0])+DP[5]*(-C[5]-C[2]*
 DP[2]))+DP[5]*(DP[0]*(C[2]*DP[0]-C[8])+C[9]))+DP[1]*(DP[2]*(DP[3]*(C[7]+
 C[3]*DP[1]+C[6]*DP[2])+DP[4]*(-C[12]-C[6]*DP[1]-C[2]*DP[2])-C[4]*DP[5])+
 DP[4]*(DP[1]*(-C[14]-C[3]*DP[1])-C[15]))+DP[2]*(DP[3]*(DP[2]*(C[8]+C[2]*
 DP[2])+C[9]))));
R=+DP[9]*(DP[0]*(DP[2]*(DP[0]*(C[2]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+
 DP[14])+DP[10]*(S[2]-DP[9]))+C[10]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+
 DP[14])+DP[11]*(S[2]-DP[9]))-C[40]*DP[10]-C[48]*DP[11])+DP[2]*(C[10]*(
 DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[2]*(
 DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[48]*
 DP[11]-C[40]*DP[12])+C[5]*(DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(DP[5]-
 DP[3]-DP[6]+DP[8])+S[2]*(DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+C[13]*(
 DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[43]*(
 DP[10]-DP[12])+C[51]*DP[11])+DP[0]*(DP[0]*(C[2]*(DP[5]*(-DP[13]-DP[14])+
 DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[40]*DP[12])+C[8]*(DP[5]*(
 DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[46]*DP[12])+
 C[9]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+
 C[47]*DP[12]+tmp[0])+tmp[1])+tmp[3];
R*=(N/D)*Q1[6]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
