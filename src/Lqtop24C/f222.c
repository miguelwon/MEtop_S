/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F222_out;
static void C222(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[9]*V[9];
S[1]=V[8]*V[8];
S[2]=V[13]*V[13];
S[3]=V[10]*V[10];
C[136]=+S[1]*(S[3]*(S[2]*(8*S[0]+4*S[1])));
C[135]=+S[1]*(S[3]*(8*(S[2]-S[1])));
S[4]=V[8]*V[8]*V[8]*V[8];
C[134]=+8*S[4];
C[133]=+S[1]*(S[1]*(2*(S[0]*(S[2]-S[0])+S[3]*(S[2]+S[3])))+8*S[2]*S[3]*
 S[0]);
C[132]=+S[1]*(4*(S[1]*(S[3]-S[0])+S[2]*(S[3]+S[0])));
C[131]=+S[4]*(S[0]*(S[3]*(S[2]*(4*(S[3]+S[0])))));
C[130]=+S[1]*(S[0]*(S[3]*(S[2]*(8*(S[3]+S[0]+S[1])))));
S[5]=V[10]*V[10]*V[10]*V[10];
C[129]=+S[4]*(S[2]*(S[0]*(12*S[3]+2*S[0])+2*S[5]));
S[6]=V[9]*V[9]*V[9]*V[9];
C[128]=+S[1]*(S[2]*(4*(S[1]*(S[3]+S[0])+S[5]+S[6])+24*S[3]*S[0]));
C[127]=+S[4]*(S[2]*(4*(S[3]+S[0])));
C[126]=+S[1]*(S[1]*(2*(S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3])))+8*S[2]*S[3]*
 S[0]);
C[125]=+S[1]*(4*(S[1]*(S[2]-S[3]+S[0])+S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3])));
C[124]=+S[1]*(4*(S[1]*(S[0]-S[3])+S[2]*(S[3]+S[0])));
C[123]=+S[1]*(8*(S[3]-S[0]-S[1]));
C[122]=+4*S[2]*S[3]*S[0]*S[4];
C[121]=+S[1]*(S[0]*(S[2]*(8*S[3]+4*S[1])));
C[120]=+S[4]*(S[2]*(2*(S[3]+S[0])));
C[119]=+S[4]*(4*(S[3]-S[0]));
C[118]=+S[1]*(S[0]*(S[3]*(S[2]*(16*(S[3]+S[0])))));
C[117]=+32*S[2]*S[3]*S[0]*S[1];
C[116]=+S[1]*(S[2]*(S[0]*(48*S[3]+8*S[0])+8*S[5]));
C[115]=+S[1]*(S[2]*(16*(S[3]+S[0])));
C[114]=+S[0]*(S[3]*(S[2]*(16*(S[3]+S[0]+S[1]))));
C[113]=+32*S[2]*S[3]*S[0];
C[112]=+S[2]*(8*(S[1]*(S[3]+S[0])+S[5]+S[6])+48*S[3]*S[0]);
C[111]=+S[2]*(16*(S[3]+S[0]));
C[110]=+16*S[2]*S[3]*S[1];
C[109]=+S[1]*(8*(S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3])));
C[108]=+S[1]*(16*(S[2]-S[3]+S[0]));
C[107]=+S[3]*(S[2]*(16*S[0]+8*S[1]));
C[106]=+S[3]*(16*(S[2]-S[1]));
C[105]=+S[1]*(4*(S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3])))+16*S[2]*S[3]*S[0];
C[104]=+8*(S[1]*(S[2]-S[3]+S[0])+S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3]));
C[103]=+16*(S[2]-S[3]+S[0]);
C[102]=+8*(S[1]*(S[0]-S[3])+S[2]*(S[3]+S[0]));
C[101]=+S[1]*(8*(S[0]*(S[2]-S[0])+S[3]*(S[2]+S[3])));
C[100]=+16*S[2]*S[0]*S[1];
C[99]=+S[1]*(4*(S[0]*(S[2]-S[0])+S[3]*(S[2]+S[3])))+16*S[2]*S[3]*S[0];
C[98]=+8*(S[0]*(S[2]-S[0])+S[3]*(S[2]+S[3]));
C[97]=+8*(S[1]*(S[3]-S[0])+S[2]*(S[3]+S[0]));
C[96]=+S[0]*(S[2]*(16*S[3]+8*S[1]));
C[95]=+16*S[2]*S[0];
C[94]=+S[2]*(8*(S[3]+S[0]));
C[93]=+16*(S[3]-S[0]-S[1]);
C[92]=+S[1]*(16*(S[3]-S[0]));
C[91]=+16*(S[3]-S[0]);
C[90]=+S[1]*(S[0]*(S[3]*(8*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-16*S[3]*
 S[0])));
C[89]=+S[1]*(S[0]*(S[3]*(16*(S[2]-S[3]-S[0]))));
C[88]=+S[1]*(S[0]*(S[0]*(4*(S[2]-S[0])-44*S[3])+S[3]*(24*S[2]-44*S[3]))+
 S[5]*(4*(S[2]-S[3])));
C[87]=+S[1]*(8*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-48*S[3]*S[0]);
C[86]=+S[1]*(S[0]*(8*S[2]-64*S[3]-16*S[0])+S[3]*(8*S[2]-16*S[3]));
C[85]=+S[1]*(S[3]*(16*S[3]+48*S[0]));
C[84]=+S[1]*(48*S[3]+16*S[0]);
C[83]=+32*S[3]*S[1];
C[82]=+S[1]*(S[0]*(S[3]*(32*(S[3]+S[0]))));
C[81]=+S[1]*(S[0]*(48*S[3]+16*S[0]));
C[80]=+S[1]*(S[0]*(96*S[3]+16*S[0])+16*S[5]);
C[79]=+S[1]*(16*S[3]+48*S[0]);
C[78]=+64*S[3]*S[0]*S[1];
C[77]=+32*S[1];
C[76]=+S[1]*(32*(S[3]+S[0]));
C[75]=+32*S[0]*S[1];
C[74]=+S[0]*(S[3]*(8*(S[1]*(S[2]-S[3]-S[0])+S[0]*(S[2]-S[0])+S[3]*(S[2]-
 S[3]))-16*S[3]*S[0]));
C[73]=+S[0]*(S[3]*(16*(S[2]-S[3]-S[0])));
C[72]=+S[0]*(S[0]*(4*(S[2]-S[0]-S[1])-44*S[3])+S[3]*(24*(S[2]-S[1])-44*
 S[3])+4*S[2]*S[1])+S[3]*(4*(S[3]*(S[2]-S[3]-S[1])+S[2]*S[1]));
C[71]=+8*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-48*S[3]*S[0];
C[70]=+S[0]*(8*(S[2]-S[1])-64*S[3]-16*S[0])+S[3]*(8*(S[2]-S[1])-16*S[3]);
C[69]=+S[3]*(S[0]*(32*(S[3]+S[0])+24*S[1])+8*S[3]*S[1]);
C[68]=+S[3]*(16*(S[3]+S[1])+48*S[0]);
C[67]=+S[0]*(96*S[3]+16*S[0]+8*S[1])+S[3]*(16*S[3]+24*S[1]);
C[66]=+16*(S[0]+S[1])+48*S[3];
C[65]=+S[3]*(32*S[0]+16*S[1]);
C[64]=+32*S[3];
C[63]=+S[0]*(S[3]*(32*(S[3]+S[0])+24*S[1])+8*S[0]*S[1]);
C[62]=+S[0]*(48*S[3]+16*S[0]);
C[61]=+S[0]*(96*S[3]+16*S[0]+24*S[1])+S[3]*(16*S[3]+8*S[1]);
C[60]=+16*S[3]+48*S[0];
C[59]=+S[1]*(16*(S[3]+S[0]))+64*S[3]*S[0];
C[58]=+32*(S[3]+S[0])+16*S[1];
C[57]=+32*(S[3]+S[0]);
C[56]=+S[0]*(32*S[3]+16*S[1]);
C[55]=+32*S[0];
C[54]=+16*(S[3]+S[0]);
C[53]=+S[1]*(S[0]*(S[3]*(S[2]*(8*(S[3]+S[0])))));
C[52]=+16*S[2]*S[3]*S[0]*S[1];
C[51]=+S[1]*(S[2]*(S[0]*(24*S[3]+4*S[0])+4*S[5]));
C[50]=+S[1]*(S[2]*(8*(S[3]+S[0])));
C[49]=+8*S[2]*S[3]*S[1];
C[48]=+S[1]*(4*(S[0]*(S[2]+S[0])+S[3]*(S[2]-S[3])));
C[47]=+S[1]*(8*(S[2]-S[3]+S[0]));
C[46]=+S[1]*(4*(S[0]*(S[2]-S[0])+S[3]*(S[2]+S[3])));
C[45]=+8*S[2]*S[3]*S[0]*S[1];
C[44]=+8*S[2]*S[0]*S[1];
C[43]=+S[1]*(S[2]*(4*(S[3]+S[0])));
C[42]=+S[1]*(8*(S[3]-S[0]));
C[41]=+S[4]*(S[0]*(S[3]*(2*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-4*S[3]*
 S[0])));
C[40]=+S[1]*(S[0]*(S[3]*(4*(S[1]*(S[2]-S[3]-S[0])+S[0]*(S[2]-S[0])+S[3]*(
 S[2]-S[3]))-8*S[3]*S[0])));
C[39]=+S[4]*(S[0]*(S[0]*(S[2]-11*S[3]-S[0])+S[3]*(6*S[2]-11*S[3]))+S[5]*(
 S[2]-S[3]));
C[38]=+S[1]*(S[0]*(S[0]*(2*(S[2]-S[0]-S[1])-22*S[3])+S[3]*(12*(S[2]-S[1])-
 22*S[3])+2*S[2]*S[1])+S[3]*(2*(S[3]*(S[2]-S[3]-S[1])+S[2]*S[1])));
C[37]=+S[4]*(S[0]*(2*S[2]-16*S[3]-4*S[0])+S[3]*(2*S[2]-4*S[3]));
C[36]=+S[1]*(S[0]*(4*(S[2]-S[1])-32*S[3]-8*S[0])+S[3]*(4*(S[2]-S[1])-8*
 S[3]));
C[35]=+S[1]*(S[0]*(S[3]*(4*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-8*S[3]*
 S[0])));
C[34]=+S[1]*(S[0]*(S[3]*(8*(S[2]-S[3]-S[0]))));
C[33]=+S[1]*(S[0]*(S[0]*(2*(S[2]-S[0])-22*S[3])+S[3]*(12*S[2]-22*S[3]))+
 S[5]*(2*(S[2]-S[3])));
C[32]=+S[1]*(4*(S[0]*(S[2]-S[0])+S[3]*(S[2]-S[3]))-24*S[3]*S[0]);
C[31]=+S[1]*(S[0]*(4*S[2]-32*S[3]-8*S[0])+S[3]*(4*S[2]-8*S[3]));
C[30]=+S[1]*(S[3]*(S[0]*(16*(S[3]+S[0])+12*S[1])+4*S[3]*S[1]));
C[29]=+S[1]*(S[3]*(8*(S[3]+S[1])+24*S[0]));
C[28]=+S[1]*(S[0]*(48*S[3]+8*S[0]+4*S[1])+S[3]*(8*S[3]+12*S[1]));
C[27]=+S[1]*(8*(S[0]+S[1])+24*S[3]);
C[26]=+S[1]*(S[3]*(8*S[3]+24*S[0]));
C[25]=+S[1]*(24*S[3]+8*S[0]);
C[24]=+S[1]*(S[3]*(16*S[0]+8*S[1]));
C[23]=+16*S[3]*S[1];
C[22]=+S[4]*(S[0]*(S[3]*(8*(S[3]+S[0]))));
C[21]=+S[1]*(S[0]*(S[3]*(16*(S[3]+S[0])+12*S[1])+4*S[0]*S[1]));
C[20]=+S[4]*(S[0]*(24*S[3]+4*S[0])+4*S[5]);
C[19]=+S[1]*(S[0]*(48*S[3]+8*S[0]+12*S[1])+S[3]*(8*S[3]+4*S[1]));
C[18]=+S[1]*(S[0]*(S[3]*(16*(S[3]+S[0]))));
C[17]=+S[1]*(S[0]*(24*S[3]+8*S[0]));
C[16]=+S[1]*(S[0]*(48*S[3]+8*S[0])+8*S[5]);
C[15]=+S[1]*(8*S[3]+24*S[0]);
C[14]=+16*S[3]*S[0]*S[4];
C[13]=+S[1]*(S[1]*(8*(S[3]+S[0]))+32*S[3]*S[0]);
C[12]=+S[1]*(16*(S[3]+S[0])+8*S[1]);
C[11]=+S[4]*(8*(S[3]+S[0]));
C[10]=+32*S[3]*S[0]*S[1];
C[9]=+16*S[1];
C[8]=+S[1]*(16*(S[3]+S[0]));
C[7]=+8*S[3]*S[0]*S[4];
C[6]=+S[1]*(S[0]*(16*S[3]+8*S[1]));
C[5]=+S[4]*(4*(S[3]+S[0]));
C[4]=+16*S[3]*S[0]*S[1];
C[3]=+16*S[0]*S[1];
C[2]=+S[1]*(8*(S[3]+S[0]));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[33]*V[33]*V[33]*V[33];
S[9]=V[29]*V[29];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F222_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   C                       N2     !  N2                      C       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   s  |  W+    t     W+ |  e2     !  e2 |  W+    t     W+ |  s       
 ==>==@-1<--@==<==@-2<--@==>======!==>==@--<4-@==<==@--<3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              b      !  b              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[137];REAL S[2];REAL tmp[7];                                   
     
if(CalcConst) C222(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[12]*(C[42]*(DP[7]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[0]*(DP[2]+DP[4])+
 DP[6]*(-DP[2]-DP[4]))+DP[8]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+
 DP[9]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+C[49]*(-DP[1]-DP[3])+
 C[48]*(-DP[2]-DP[4]))+DP[13]*(C[42]*(DP[7]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[0]*
 (DP[2]+DP[4])+DP[6]*(-DP[2]-DP[4]))+DP[8]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+
 C[8]*DP[7])+DP[9]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+C[49]*(-DP[1]-
 DP[3])+C[48]*(-DP[2]-DP[4]))+DP[14]*(DP[0]*(C[8]*(DP[0]-DP[7])+C[28]+C[25]*
 DP[5]-C[2]*DP[6])+DP[5]*(C[26]-C[23]*DP[6]-C[8]*DP[7])+C[30]-C[24]*DP[6]-
 C[13]*DP[7])+DP[11]*(DP[5]*(C[42]*(DP[6]-DP[0]+DP[7])+C[48])+C[119]*(DP[6]+
 DP[7])+C[126]+C[124]*DP[0])+DP[10]*(DP[5]*(C[49]-C[42]*DP[7])+C[136]+C[43]*
 DP[0]-C[119]*DP[7]);
tmp[1]=+DP[7]*(DP[0]*(C[42]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[1]))+C[15]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]))+DP[14]*(C[19]+C[8]*DP[0]-C[2]*DP[7])+C[132]*DP[10]+
 C[43]*DP[11])+DP[7]*(C[42]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))-C[119]*DP[10]-C[6]*DP[14])+DP[12]*(C[46]*(-DP[1]-
 DP[3])+C[44]*(-DP[2]-DP[4])+C[17]*(-DP[8]-DP[9]))+DP[13]*(C[46]*(-DP[1]-
 DP[3])+C[44]*(-DP[2]-DP[4])+C[17]*(-DP[8]-DP[9]))+S[1]*(-C[46]*DP[10]-
 C[44]*DP[11]-C[17]*DP[14])+DP[5]*(C[46]*DP[10]+C[44]*DP[11]+C[17]*DP[14])+
 C[133]*DP[10]+C[121]*DP[11]+C[21]*DP[14])+DP[0]*(C[50]*(DP[12]*(DP[1]+
 DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[10]*(S[1]-DP[0]-
 DP[5])+DP[11]*(S[1]-DP[0]-DP[5]))+DP[0]*(C[2]*(DP[14]*(S[1]-DP[0]-DP[5])+
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[36]*DP[14])+C[32]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[128]*(-DP[10]-
 DP[11])+C[38]*DP[14])+C[52]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 C[34]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+
 C[130]*(-DP[10]-DP[11])+C[40]*DP[14];
tmp[2]=+DP[6]*(S[1]*(S[1]*(32*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])-
 DP[6]*DP[4])+C[64]*(DP[9]-DP[3])+C[103]*DP[4])+DP[0]*(C[77]*(DP[1]-DP[8])+
 C[9]*DP[3]+C[91]*DP[4]-C[66]*DP[9])+DP[7]*(C[77]*(DP[8]-DP[1])+C[93]*DP[3]-
 C[91]*DP[4]+C[58]*DP[9])+DP[6]*(C[77]*DP[2]-C[93]*DP[4]+C[64]*DP[9])+C[83]*
 (DP[1]-DP[8])-C[108]*DP[2]-C[106]*DP[3]-C[104]*DP[4]-C[68]*DP[9])+DP[0]*(
 DP[9]*(C[57]*(DP[0]-DP[7])+C[67]-C[54]*DP[6])+C[94]*DP[3]-C[92]*DP[2]+
 C[102]*DP[4]+C[84]*DP[8])+DP[7]*(C[92]*(DP[2]-DP[1])+C[42]*(DP[4]-DP[3])-
 C[76]*DP[8]-C[59]*DP[9])+DP[6]*(C[92]*DP[2]+C[42]*DP[4]-C[83]*DP[8]-C[65]*
 DP[9])+C[110]*DP[1]+C[109]*DP[2]+C[107]*DP[3]+C[105]*DP[4]+C[85]*DP[8]+
 C[69]*DP[9])+DP[0]*(DP[7]*(DP[9]*(C[61]-C[60]*S[1]+C[57]*DP[0]-C[54]*
 DP[7])+DP[3]*(C[97]-C[91]*S[1])+C[92]*DP[1]+C[94]*DP[4]+C[79]*DP[8])+DP[0]*
 (DP[9]*(C[54]*(S[1]-DP[0])+C[70])+C[111]*(-DP[3]-DP[4])-C[8]*DP[8])+S[1]*(
 C[111]*(DP[3]+DP[4])-C[71]*DP[9])+C[115]*(-DP[1]-DP[2])+C[112]*(-DP[3]-
 DP[4])+C[87]*DP[8]+C[72]*DP[9])+DP[7]*(DP[7]*(S[1]*(C[91]*DP[3]+C[55]*
 DP[9])-C[92]*DP[1]-C[42]*DP[3]-C[75]*DP[8]-C[56]*DP[9])+S[1]*(-C[98]*DP[3]-
 C[95]*DP[4]-C[62]*DP[9])+C[101]*DP[1]+C[100]*DP[2]+C[99]*DP[3]+C[96]*DP[4]+
 C[81]*DP[8]+C[63]*DP[9])+S[1]*(C[113]*(DP[3]+DP[4])-C[73]*DP[9])+C[117]*(-
 DP[1]-DP[2])+C[114]*(-DP[3]-DP[4])+C[89]*DP[8]+C[74]*DP[9];
tmp[3]=+DP[13]*(S[1]*(DP[6]*(S[1]*(C[9]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-
 DP[1])+DP[6]*DP[2])+C[23]*(DP[1]-DP[8])-C[47]*DP[2])+DP[2]*(C[42]*(DP[6]-
 DP[0]+DP[7])+C[48])+DP[8]*(C[26]+C[25]*DP[0]-C[23]*DP[6]-C[8]*DP[7])+DP[1]*
 (C[49]-C[42]*DP[7]))+DP[7]*(DP[1]*(C[42]*(DP[0]-DP[7])+C[46])+DP[8]*(C[17]+
 C[15]*DP[0]-C[3]*DP[7])+C[44]*DP[2])+DP[0]*(DP[8]*(C[32]-C[2]*DP[0])+C[50]*
 (-DP[1]-DP[2]))+C[52]*(-DP[1]-DP[2])+C[34]*DP[8])+DP[0]*(DP[8]*(DP[0]*(
 C[8]*(-DP[6]-DP[7])+C[2]*DP[0]-C[31])+DP[6]*(C[2]*DP[6]-C[16]+C[8]*DP[7])+
 DP[7]*(C[2]*DP[7]-C[16])-C[33])+DP[1]*(C[43]*(-DP[6]-DP[7])+C[51]+C[50]*
 DP[0])+DP[2]*(C[43]*(-DP[6]-DP[7])+C[51]+C[50]*DP[0]))+DP[8]*(DP[6]*(C[4]*
 DP[6]-C[18]+C[10]*DP[7])+DP[7]*(C[4]*DP[7]-C[18])-C[35])+C[45]*(DP[1]*(-
 DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7]))+C[53]*(DP[1]+DP[2]));
tmp[4]=+DP[12]*(S[1]*tmp[2]+DP[0]*(DP[0]*(DP[8]*(C[76]*(-DP[6]-DP[7])+C[8]*
 DP[0]-C[86])+DP[9]*(C[8]*(-DP[6]-DP[7])+C[2]*DP[0]-C[31])+C[115]*(DP[1]+
 DP[2])+C[50]*(DP[3]+DP[4]))+DP[6]*(DP[8]*(C[8]*DP[6]-C[80]+C[76]*DP[7])+
 DP[9]*(C[2]*DP[6]-C[16]+C[8]*DP[7])+C[50]*(-DP[1]-DP[2])+C[43]*(-DP[3]-
 DP[4]))+DP[7]*(DP[7]*(C[8]*DP[8]+C[2]*DP[9])+C[50]*(-DP[1]-DP[2])+C[43]*(-
 DP[3]-DP[4])-C[80]*DP[8]-C[16]*DP[9])+C[116]*(DP[1]+DP[2])+C[51]*(DP[3]+
 DP[4])-C[88]*DP[8]-C[33]*DP[9])+DP[6]*(DP[8]*(C[10]*DP[6]-C[82]+C[78]*
 DP[7])+DP[9]*(C[4]*DP[6]-C[18]+C[10]*DP[7])+C[52]*(-DP[1]-DP[2])+C[45]*(-
 DP[3]-DP[4]))+DP[7]*(DP[7]*(C[10]*DP[8]+C[4]*DP[9])+C[52]*(-DP[1]-DP[2])+
 C[45]*(-DP[3]-DP[4])-C[82]*DP[8]-C[18]*DP[9])+C[118]*(DP[1]+DP[2])+C[53]*(
 DP[3]+DP[4])-C[90]*DP[8]-C[35]*DP[9])+tmp[3];
tmp[5]=+DP[0]*(DP[0]*(DP[12]*(DP[8]*(C[8]*(DP[6]+DP[7])+C[31]-C[2]*DP[0])+
 DP[9]*(C[8]*(DP[6]+DP[7])+C[31]-C[2]*DP[0])+C[50]*(-DP[1]-DP[2]-DP[3]-
 DP[4]))+DP[13]*(DP[8]*(C[8]*(DP[6]+DP[7])+C[31]-C[2]*DP[0])+DP[9]*(C[8]*(
 DP[6]+DP[7])+C[31]-C[2]*DP[0])+C[50]*(-DP[1]-DP[2]-DP[3]-DP[4]))+DP[14]*(
 DP[5]*(C[8]*(-DP[6]-DP[7])+C[2]*DP[0]-C[31])+C[11]*(-DP[6]-DP[7])+C[5]*
 DP[0]-C[37])+DP[5]*(C[50]*(DP[10]+DP[11]))+C[127]*(DP[10]+DP[11]))+DP[6]*(
 DP[12]*(C[43]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[16]-C[2]*DP[6]-C[8]*
 DP[7])+DP[9]*(C[16]-C[2]*DP[6]-C[8]*DP[7]))+DP[13]*(C[43]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[8]*(C[16]-C[2]*DP[6]-C[8]*DP[7])+DP[9]*(C[16]-C[2]*DP[6]-
 C[8]*DP[7]))+DP[14]*(DP[5]*(C[2]*DP[6]-C[16]+C[8]*DP[7])+C[5]*DP[6]-C[20]+
 C[11]*DP[7])+DP[5]*(C[43]*(-DP[10]-DP[11]))+C[120]*(-DP[10]-DP[11]))+DP[7]*
 (C[43]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[5]*(-DP[10]-DP[11]))+DP[7]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[5]*DP[14])+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])+C[120]*(-DP[10]-DP[11])-C[20]*DP[14])+C[51]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(
 DP[10]+DP[11]))+C[33]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[129]*(DP[10]+DP[11])-C[39]*DP[14]);
tmp[6]=+DP[5]*(DP[6]*(DP[12]*(C[45]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[18]-
 C[4]*DP[6]-C[10]*DP[7])+DP[9]*(C[18]-C[4]*DP[6]-C[10]*DP[7]))+DP[13]*(
 C[45]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[18]-C[4]*DP[6]-C[10]*DP[7])+DP[9]*
 (C[18]-C[4]*DP[6]-C[10]*DP[7]))+DP[14]*(DP[5]*(C[4]*DP[6]-C[18]+C[10]*
 DP[7])+C[7]*DP[6]-C[22]+C[14]*DP[7])+DP[5]*(C[45]*(-DP[10]-DP[11]))+C[122]*
 (-DP[10]-DP[11]))+DP[7]*(C[45]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(C[4]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[7]*DP[14])+C[18]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[122]*(-DP[10]-
 DP[11])-C[22]*DP[14])+C[53]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+C[35]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[131]*(DP[10]+DP[11])-C[41]*
 DP[14]+tmp[5]);
R=+S[1]*(DP[5]*(DP[6]*(S[1]*(C[9]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-
 DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+S[1]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+DP[6]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1])))+C[23]*(DP[12]*(DP[8]-
 DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[14]*(S[1]-DP[5]+
 DP[6])+DP[10]*(DP[5]-S[1]))+DP[11]*(C[47]*(S[1]-DP[5])+C[42]*(DP[0]-DP[7])-
 C[125]-C[123]*DP[6])+C[47]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13]))+
 DP[10]*(C[134]*DP[0]-C[135]+C[123]*DP[7])+DP[14]*(C[12]*DP[7]-C[29]-C[27]*
 DP[0]))+tmp[0])+tmp[1])+tmp[4])+tmp[6];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
