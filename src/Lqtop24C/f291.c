/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F291_out;
static void C291(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[10]*V[10];
S[1]=V[9]*V[9];
S[2]=V[13]*V[13];
S[3]=V[8]*V[8]*V[8]*V[8];
C[136]=+S[3]*(S[1]*(S[0]*(S[2]*(4*(S[0]+S[1])))));
S[4]=V[8]*V[8];
C[135]=+S[4]*(S[1]*(S[0]*(S[2]*(8*(S[0]+S[1]+S[4])))));
S[5]=V[10]*V[10]*V[10]*V[10];
C[134]=+S[3]*(S[2]*(S[1]*(12*S[0]+2*S[1])+2*S[5]));
S[6]=V[9]*V[9]*V[9]*V[9];
C[133]=+S[4]*(S[2]*(4*(S[4]*(S[0]+S[1])+S[5]+S[6])+24*S[0]*S[1]));
C[132]=+S[3]*(S[2]*(4*(S[0]+S[1])));
C[131]=+S[4]*(S[1]*(S[0]*(S[2]*(16*(S[0]+S[1])))));
C[130]=+32*S[2]*S[0]*S[1]*S[4];
C[129]=+S[4]*(S[2]*(S[1]*(48*S[0]+8*S[1])+8*S[5]));
C[128]=+S[4]*(S[2]*(16*(S[0]+S[1])));
C[127]=+S[1]*(S[0]*(S[2]*(16*(S[0]+S[1]+S[4]))));
C[126]=+32*S[2]*S[0]*S[1];
C[125]=+S[2]*(8*(S[4]*(S[0]+S[1])+S[5]+S[6])+48*S[0]*S[1]);
C[124]=+S[2]*(16*(S[0]+S[1]));
C[123]=+S[4]*(S[1]*(S[0]*(S[2]*(8*(S[0]+S[1])))));
C[122]=+S[4]*(S[2]*(S[1]*(24*S[0]+4*S[1])+4*S[5]));
C[121]=+S[4]*(S[1]*(S[2]*(8*S[0]+4*S[4])));
C[120]=+S[4]*(S[4]*(2*(S[1]*(S[2]-S[1])+S[0]*(S[2]+S[0])))+8*S[2]*S[0]*
 S[1]);
C[119]=+S[4]*(4*(S[4]*(S[0]-S[1])+S[2]*(S[0]+S[1])));
C[118]=+16*S[2]*S[1]*S[4];
C[117]=+S[4]*(8*(S[1]*(S[2]-S[1])+S[0]*(S[2]+S[0])));
C[116]=+S[1]*(S[2]*(16*S[0]+8*S[4]));
C[115]=+16*S[2]*S[1];
C[114]=+S[4]*(4*(S[1]*(S[2]-S[1])+S[0]*(S[2]+S[0])))+16*S[2]*S[0]*S[1];
C[113]=+8*(S[1]*(S[2]-S[1])+S[0]*(S[2]+S[0]));
C[112]=+8*(S[4]*(S[0]-S[1])+S[2]*(S[0]+S[1]));
C[111]=+8*S[2]*S[1]*S[4];
C[110]=+S[4]*(4*(S[1]*(S[2]-S[1])+S[0]*(S[2]+S[0])));
C[109]=+S[4]*(S[4]*(2*(S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0])))+8*S[2]*S[0]*
 S[1]);
C[108]=+S[4]*(4*(S[4]*(S[2]-S[0]+S[1])+S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0])));
C[107]=+S[4]*(4*(S[4]*(S[1]-S[0])+S[2]*(S[0]+S[1])));
C[106]=+4*S[2]*S[0]*S[1]*S[3];
C[105]=+S[4]*(S[0]*(S[2]*(8*S[1]+4*S[4])));
C[104]=+S[4]*(S[0]*(8*(S[2]-S[4])));
C[103]=+S[3]*(S[2]*(2*(S[0]+S[1])));
C[102]=+8*S[3];
C[101]=+S[4]*(8*(S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0])));
C[100]=+S[4]*(16*(S[2]-S[0]+S[1]));
C[99]=+16*S[2]*S[0]*S[1]*S[4];
C[98]=+16*S[2]*S[0]*S[4];
C[97]=+S[4]*(S[2]*(8*(S[0]+S[1])));
C[96]=+S[4]*(4*(S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0])))+16*S[2]*S[0]*S[1];
C[95]=+8*(S[4]*(S[2]-S[0]+S[1])+S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0]));
C[94]=+16*(S[2]-S[0]+S[1]);
C[93]=+8*(S[4]*(S[1]-S[0])+S[2]*(S[0]+S[1]));
C[92]=+S[0]*(S[2]*(16*S[1]+8*S[4]));
C[91]=+S[0]*(16*(S[2]-S[4]));
C[90]=+S[2]*(8*(S[0]+S[1]));
C[89]=+S[4]*(4*(S[1]*(S[2]+S[1])+S[0]*(S[2]-S[0])));
C[88]=+S[4]*(8*(S[2]-S[0]+S[1]));
C[87]=+8*S[2]*S[0]*S[1]*S[4];
C[86]=+8*S[2]*S[0]*S[4];
C[85]=+S[4]*(S[2]*(4*(S[0]+S[1])));
C[84]=+16*(S[0]-S[1]);
C[83]=+S[3]*(4*(S[0]-S[1]));
C[82]=+S[4]*(8*(S[0]-S[1]-S[4]));
C[81]=+S[4]*(16*(S[0]-S[1]));
C[80]=+16*(S[0]-S[1]-S[4]);
C[79]=+S[4]*(8*(S[0]-S[1]));
C[78]=+S[4]*(S[1]*(S[0]*(8*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-16*S[0]*
 S[1])));
C[77]=+S[4]*(S[1]*(S[0]*(16*(S[2]-S[0]-S[1]))));
C[76]=+S[4]*(S[1]*(S[1]*(4*(S[2]-S[1])-44*S[0])+S[0]*(24*S[2]-44*S[0]))+
 S[5]*(4*(S[2]-S[0])));
C[75]=+S[4]*(8*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-48*S[0]*S[1]);
C[74]=+S[4]*(S[1]*(8*S[2]-64*S[0]-16*S[1])+S[0]*(8*S[2]-16*S[0]));
C[73]=+S[4]*(S[1]*(48*S[0]+16*S[1]));
C[72]=+S[4]*(16*S[0]+48*S[1]);
C[71]=+32*S[1]*S[4];
C[70]=+S[4]*(S[1]*(S[0]*(32*(S[0]+S[1]))));
C[69]=+S[4]*(S[0]*(16*S[0]+48*S[1]));
C[68]=+S[4]*(S[1]*(96*S[0]+16*S[1])+16*S[5]);
C[67]=+S[4]*(48*S[0]+16*S[1]);
C[66]=+64*S[0]*S[1]*S[4];
C[65]=+32*S[4];
C[64]=+S[4]*(32*(S[0]+S[1]));
C[63]=+32*S[0]*S[4];
C[62]=+S[1]*(S[0]*(8*(S[4]*(S[2]-S[0]-S[1])+S[1]*(S[2]-S[1])+S[0]*(S[2]-
 S[0]))-16*S[0]*S[1]));
C[61]=+S[1]*(S[0]*(16*(S[2]-S[0]-S[1])));
C[60]=+S[1]*(S[1]*(4*(S[2]-S[1]-S[4])-44*S[0])+S[0]*(24*(S[2]-S[4])-44*
 S[0])+4*S[2]*S[4])+S[0]*(4*(S[0]*(S[2]-S[0]-S[4])+S[2]*S[4]));
C[59]=+8*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-48*S[0]*S[1];
C[58]=+S[1]*(8*(S[2]-S[4])-64*S[0]-16*S[1])+S[0]*(8*(S[2]-S[4])-16*S[0]);
C[57]=+S[1]*(S[0]*(32*(S[0]+S[1])+24*S[4])+8*S[1]*S[4]);
C[56]=+S[1]*(48*S[0]+16*S[1]);
C[55]=+S[1]*(96*S[0]+16*S[1]+24*S[4])+S[0]*(16*S[0]+8*S[4]);
C[54]=+16*S[0]+48*S[1];
C[53]=+S[1]*(32*S[0]+16*S[4]);
C[52]=+32*S[1];
C[51]=+S[0]*(S[1]*(32*(S[0]+S[1])+24*S[4])+8*S[0]*S[4]);
C[50]=+S[0]*(16*(S[0]+S[4])+48*S[1]);
C[49]=+S[1]*(96*S[0]+16*S[1]+8*S[4])+S[0]*(16*S[0]+24*S[4]);
C[48]=+16*(S[1]+S[4])+48*S[0];
C[47]=+S[4]*(16*(S[0]+S[1]))+64*S[0]*S[1];
C[46]=+32*(S[0]+S[1])+16*S[4];
C[45]=+32*(S[0]+S[1]);
C[44]=+S[0]*(32*S[1]+16*S[4]);
C[43]=+32*S[0];
C[42]=+16*(S[0]+S[1]);
C[41]=+S[3]*(S[1]*(S[0]*(2*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-4*S[0]*
 S[1])));
C[40]=+S[4]*(S[1]*(S[0]*(4*(S[4]*(S[2]-S[0]-S[1])+S[1]*(S[2]-S[1])+S[0]*(
 S[2]-S[0]))-8*S[0]*S[1])));
C[39]=+S[3]*(S[1]*(S[1]*(S[2]-11*S[0]-S[1])+S[0]*(6*S[2]-11*S[0]))+S[5]*(
 S[2]-S[0]));
C[38]=+S[4]*(S[1]*(S[1]*(2*(S[2]-S[1]-S[4])-22*S[0])+S[0]*(12*(S[2]-S[4])-
 22*S[0])+2*S[2]*S[4])+S[0]*(2*(S[0]*(S[2]-S[0]-S[4])+S[2]*S[4])));
C[37]=+S[3]*(S[1]*(2*S[2]-16*S[0]-4*S[1])+S[0]*(2*S[2]-4*S[0]));
C[36]=+S[4]*(S[1]*(4*(S[2]-S[4])-32*S[0]-8*S[1])+S[0]*(4*(S[2]-S[4])-8*
 S[0]));
C[35]=+S[4]*(S[1]*(S[0]*(4*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-8*S[0]*
 S[1])));
C[34]=+S[4]*(S[1]*(S[0]*(8*(S[2]-S[0]-S[1]))));
C[33]=+S[4]*(S[1]*(S[1]*(2*(S[2]-S[1])-22*S[0])+S[0]*(12*S[2]-22*S[0]))+
 S[5]*(2*(S[2]-S[0])));
C[32]=+S[4]*(4*(S[1]*(S[2]-S[1])+S[0]*(S[2]-S[0]))-24*S[0]*S[1]);
C[31]=+S[4]*(S[1]*(4*S[2]-32*S[0]-8*S[1])+S[0]*(4*S[2]-8*S[0]));
C[30]=+S[4]*(S[1]*(S[0]*(16*(S[0]+S[1])+12*S[4])+4*S[1]*S[4]));
C[29]=+S[4]*(S[1]*(48*S[0]+8*S[1]+12*S[4])+S[0]*(8*S[0]+4*S[4]));
C[28]=+S[4]*(S[1]*(24*S[0]+8*S[1]));
C[27]=+S[4]*(8*S[0]+24*S[1]);
C[26]=+S[4]*(S[1]*(16*S[0]+8*S[4]));
C[25]=+16*S[1]*S[4];
C[24]=+S[3]*(S[1]*(S[0]*(8*(S[0]+S[1]))));
C[23]=+S[4]*(S[0]*(S[1]*(16*(S[0]+S[1])+12*S[4])+4*S[0]*S[4]));
C[22]=+S[4]*(S[0]*(8*(S[0]+S[4])+24*S[1]));
C[21]=+S[3]*(S[1]*(24*S[0]+4*S[1])+4*S[5]);
C[20]=+S[4]*(S[1]*(48*S[0]+8*S[1]+4*S[4])+S[0]*(8*S[0]+12*S[4]));
C[19]=+S[4]*(8*(S[1]+S[4])+24*S[0]);
C[18]=+S[4]*(S[1]*(S[0]*(16*(S[0]+S[1]))));
C[17]=+S[4]*(S[0]*(8*S[0]+24*S[1]));
C[16]=+S[4]*(S[1]*(48*S[0]+8*S[1])+8*S[5]);
C[15]=+S[4]*(24*S[0]+8*S[1]);
C[14]=+16*S[0]*S[1]*S[3];
C[13]=+S[4]*(S[4]*(8*(S[0]+S[1]))+32*S[0]*S[1]);
C[12]=+S[4]*(16*(S[0]+S[1])+8*S[4]);
C[11]=+S[3]*(8*(S[0]+S[1]));
C[10]=+32*S[0]*S[1]*S[4];
C[9]=+16*S[4];
C[8]=+S[4]*(16*(S[0]+S[1]));
C[7]=+8*S[0]*S[1]*S[3];
C[6]=+S[4]*(S[0]*(16*S[1]+8*S[4]));
C[5]=+S[3]*(4*(S[0]+S[1]));
C[4]=+16*S[0]*S[1]*S[4];
C[3]=+16*S[0]*S[4];
C[2]=+S[4]*(8*(S[0]+S[1]));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[33]*V[33]*V[33]*V[33];
S[9]=V[29]*V[29];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F291_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   S                       n2     !  n2                      S       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   c  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  c       
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
static REAL C[137];REAL S[2];REAL tmp[8];                                   
     
if(CalcConst) C291(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[8]*(C[79]*(DP[10]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[0]*(DP[1]+DP[3])+
 DP[11]*(-DP[1]-DP[3]))+DP[12]*(C[8]*DP[10]-C[17]-C[15]*DP[0]+C[3]*DP[11])+
 DP[13]*(C[8]*DP[10]-C[17]-C[15]*DP[0]+C[3]*DP[11])+C[89]*(-DP[1]-DP[3])+
 C[86]*(-DP[2]-DP[4]))+DP[9]*(C[79]*(DP[10]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[0]*
 (DP[1]+DP[3])+DP[11]*(-DP[1]-DP[3]))+DP[12]*(C[8]*DP[10]-C[17]-C[15]*DP[0]+
 C[3]*DP[11])+DP[13]*(C[8]*DP[10]-C[17]-C[15]*DP[0]+C[3]*DP[11])+C[89]*(-
 DP[1]-DP[3])+C[86]*(-DP[2]-DP[4]))+DP[14]*(DP[0]*(C[8]*(DP[0]-DP[10])+
 C[20]+C[15]*DP[5]-C[2]*DP[11])+DP[5]*(C[17]-C[8]*DP[10]-C[3]*DP[11])+C[23]-
 C[13]*DP[10]-C[6]*DP[11])+DP[6]*(DP[5]*(C[79]*(DP[10]-DP[0]+DP[11])+C[89])+
 C[83]*(DP[10]+DP[11])+C[109]+C[107]*DP[0])+DP[7]*(DP[5]*(C[86]-C[79]*
 DP[10])+C[105]+C[85]*DP[0]-C[83]*DP[10]);
tmp[1]=+DP[10]*(DP[0]*(C[79]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+
 DP[7]*(DP[5]-S[1]))+C[27]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]))+DP[14]*(C[29]+C[8]*DP[0]-C[2]*DP[10])+C[85]*DP[6]+
 C[119]*DP[7])+DP[10]*(C[79]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*
 (S[1]-DP[5]))+C[25]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[1]-DP[5]))-C[83]*DP[7]-C[26]*DP[14])+DP[8]*(C[111]*(-DP[1]-DP[3])+C[110]*
 (-DP[2]-DP[4])+C[28]*(-DP[12]-DP[13]))+DP[9]*(C[111]*(-DP[1]-DP[3])+C[110]*
 (-DP[2]-DP[4])+C[28]*(-DP[12]-DP[13]))+S[1]*(-C[111]*DP[6]-C[110]*DP[7]-
 C[28]*DP[14])+DP[5]*(C[111]*DP[6]+C[110]*DP[7]+C[28]*DP[14])+C[121]*DP[6]+
 C[120]*DP[7]+C[30]*DP[14])+DP[0]*(C[97]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[6]*(S[1]-DP[0]-DP[5])+DP[7]*(S[1]-DP[0]-
 DP[5]))+DP[0]*(C[2]*(DP[14]*(S[1]-DP[0]-DP[5])+DP[8]*(DP[12]+DP[13])+DP[9]*
 (DP[12]+DP[13]))+C[36]*DP[14])+C[32]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[133]*(-DP[6]-DP[7])+C[38]*DP[14])+
 C[99]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[1]*(DP[6]+DP[7])+DP[5]*(-DP[6]-DP[7]))+C[34]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[135]*(-DP[6]-DP[7])+C[40]*
 DP[14];
tmp[2]=+DP[11]*(S[1]*(S[1]*(32*(DP[0]*(DP[13]-DP[4])+DP[10]*(DP[4]-DP[13])-
 DP[11]*DP[3])+C[43]*(DP[13]-DP[4])+C[94]*DP[3])+DP[0]*(C[65]*(DP[2]-
 DP[12])+C[84]*DP[3]+C[9]*DP[4]-C[48]*DP[13])+DP[10]*(C[65]*(DP[12]-DP[2])+
 C[80]*DP[4]-C[84]*DP[3]+C[46]*DP[13])+DP[11]*(C[65]*DP[1]-C[80]*DP[3]+
 C[43]*DP[13])+C[63]*(DP[2]-DP[12])-C[100]*DP[1]-C[95]*DP[3]-C[91]*DP[4]-
 C[50]*DP[13])+DP[0]*(DP[13]*(C[45]*(DP[0]-DP[10])+C[49]-C[42]*DP[11])+
 C[93]*DP[3]-C[81]*DP[1]+C[90]*DP[4]+C[67]*DP[12])+DP[10]*(C[81]*(DP[1]-
 DP[2])+C[79]*(DP[3]-DP[4])-C[64]*DP[12]-C[47]*DP[13])+DP[11]*(C[81]*DP[1]+
 C[79]*DP[3]-C[63]*DP[12]-C[44]*DP[13])+C[101]*DP[1]+C[98]*DP[2]+C[96]*
 DP[3]+C[92]*DP[4]+C[69]*DP[12]+C[51]*DP[13]);
tmp[3]=+DP[0]*(DP[0]*(DP[12]*(C[64]*(-DP[10]-DP[11])+C[8]*DP[0]-C[74])+
 DP[13]*(C[8]*(-DP[10]-DP[11])+C[2]*DP[0]-C[31])+C[128]*(DP[1]+DP[2])+C[97]*
 (DP[3]+DP[4]))+DP[10]*(DP[12]*(C[8]*DP[10]-C[68]+C[64]*DP[11])+DP[13]*(
 C[2]*DP[10]-C[16]+C[8]*DP[11])+C[97]*(-DP[1]-DP[2])+C[85]*(-DP[3]-DP[4]))+
 DP[11]*(DP[11]*(C[8]*DP[12]+C[2]*DP[13])+C[97]*(-DP[1]-DP[2])+C[85]*(-
 DP[3]-DP[4])-C[68]*DP[12]-C[16]*DP[13])+C[129]*(DP[1]+DP[2])+C[122]*(DP[3]+
 DP[4])-C[76]*DP[12]-C[33]*DP[13])+DP[10]*(DP[12]*(C[10]*DP[10]-C[70]+C[66]*
 DP[11])+DP[13]*(C[4]*DP[10]-C[18]+C[10]*DP[11])+C[99]*(-DP[1]-DP[2])+C[87]*
 (-DP[3]-DP[4]))+DP[11]*(DP[11]*(C[10]*DP[12]+C[4]*DP[13])+C[99]*(-DP[1]-
 DP[2])+C[87]*(-DP[3]-DP[4])-C[70]*DP[12]-C[18]*DP[13])+C[131]*(DP[1]+
 DP[2])+C[123]*(DP[3]+DP[4])-C[78]*DP[12]-C[35]*DP[13];
tmp[4]=+DP[9]*(S[1]*(DP[11]*(S[1]*(C[9]*(DP[0]*(DP[2]-DP[12])+DP[10]*(
 DP[12]-DP[2])+DP[11]*DP[1])+C[3]*(DP[2]-DP[12])-C[88]*DP[1])+DP[1]*(C[79]*(
 DP[10]-DP[0]+DP[11])+C[89])+DP[12]*(C[17]+C[15]*DP[0]-C[8]*DP[10]-C[3]*
 DP[11])+DP[2]*(C[86]-C[79]*DP[10]))+DP[10]*(DP[2]*(C[79]*(DP[0]-DP[10])+
 C[110])+DP[12]*(C[28]+C[27]*DP[0]-C[25]*DP[10])+C[111]*DP[1])+DP[0]*(
 DP[12]*(C[32]-C[2]*DP[0])+C[97]*(-DP[1]-DP[2]))+C[99]*(-DP[1]-DP[2])+C[34]*
 DP[12])+DP[0]*(DP[12]*(DP[0]*(C[8]*(-DP[10]-DP[11])+C[2]*DP[0]-C[31])+
 DP[10]*(C[2]*DP[10]-C[16]+C[8]*DP[11])+DP[11]*(C[2]*DP[11]-C[16])-C[33])+
 DP[1]*(C[85]*(-DP[10]-DP[11])+C[122]+C[97]*DP[0])+DP[2]*(C[85]*(-DP[10]-
 DP[11])+C[122]+C[97]*DP[0]))+DP[12]*(DP[10]*(C[4]*DP[10]-C[18]+C[10]*
 DP[11])+DP[11]*(C[4]*DP[11]-C[18])-C[35])+C[87]*(DP[1]*(-DP[10]-DP[11])+
 DP[2]*(-DP[10]-DP[11]))+C[123]*(DP[1]+DP[2]));
tmp[5]=+DP[8]*(S[1]*(DP[0]*(DP[10]*(DP[13]*(C[55]-C[54]*S[1]+C[45]*DP[0]-
 C[42]*DP[10])+DP[4]*(C[112]-C[84]*S[1])+C[81]*DP[2]+C[90]*DP[3]+C[72]*
 DP[12])+DP[0]*(DP[13]*(C[42]*(S[1]-DP[0])+C[58])+C[124]*(-DP[3]-DP[4])-
 C[8]*DP[12])+S[1]*(C[124]*(DP[3]+DP[4])-C[59]*DP[13])+C[128]*(-DP[1]-
 DP[2])+C[125]*(-DP[3]-DP[4])+C[75]*DP[12]+C[60]*DP[13])+DP[10]*(DP[10]*(
 S[1]*(C[84]*DP[4]+C[52]*DP[13])-C[81]*DP[2]-C[79]*DP[4]-C[71]*DP[12]-C[53]*
 DP[13])+S[1]*(-C[115]*DP[3]-C[113]*DP[4]-C[56]*DP[13])+C[118]*DP[1]+C[117]*
 DP[2]+C[116]*DP[3]+C[114]*DP[4]+C[73]*DP[12]+C[57]*DP[13])+S[1]*(C[126]*(
 DP[3]+DP[4])-C[61]*DP[13])+C[130]*(-DP[1]-DP[2])+C[127]*(-DP[3]-DP[4])+
 C[77]*DP[12]+C[62]*DP[13]+tmp[2])+tmp[3])+tmp[4];
tmp[6]=+DP[0]*(DP[0]*(DP[8]*(DP[12]*(C[8]*(DP[10]+DP[11])+C[31]-C[2]*DP[0])+
 DP[13]*(C[8]*(DP[10]+DP[11])+C[31]-C[2]*DP[0])+C[97]*(-DP[1]-DP[2]-DP[3]-
 DP[4]))+DP[9]*(DP[12]*(C[8]*(DP[10]+DP[11])+C[31]-C[2]*DP[0])+DP[13]*(C[8]*
 (DP[10]+DP[11])+C[31]-C[2]*DP[0])+C[97]*(-DP[1]-DP[2]-DP[3]-DP[4]))+DP[14]*
 (DP[5]*(C[8]*(-DP[10]-DP[11])+C[2]*DP[0]-C[31])+C[11]*(-DP[10]-DP[11])+
 C[5]*DP[0]-C[37])+DP[5]*(C[97]*(DP[6]+DP[7]))+C[132]*(DP[6]+DP[7]))+DP[10]*
 (DP[8]*(C[85]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[16]-C[2]*DP[10]-C[8]*
 DP[11])+DP[13]*(C[16]-C[2]*DP[10]-C[8]*DP[11]))+DP[9]*(C[85]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[12]*(C[16]-C[2]*DP[10]-C[8]*DP[11])+DP[13]*(C[16]-C[2]*
 DP[10]-C[8]*DP[11]))+DP[14]*(DP[5]*(C[2]*DP[10]-C[16]+C[8]*DP[11])+C[5]*
 DP[10]-C[21]+C[11]*DP[11])+DP[5]*(C[85]*(-DP[6]-DP[7]))+C[103]*(-DP[6]-
 DP[7]))+DP[11]*(C[85]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[14])+C[16]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[103]*(-DP[6]-DP[7])-C[21]*
 DP[14])+C[122]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[5]*(DP[6]+DP[7]))+C[33]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+C[134]*(DP[6]+DP[7])-C[39]*DP[14]);
tmp[7]=+DP[5]*(DP[10]*(DP[8]*(C[87]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[18]-
 C[4]*DP[10]-C[10]*DP[11])+DP[13]*(C[18]-C[4]*DP[10]-C[10]*DP[11]))+DP[9]*(
 C[87]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[18]-C[4]*DP[10]-C[10]*DP[11])+
 DP[13]*(C[18]-C[4]*DP[10]-C[10]*DP[11]))+DP[14]*(DP[5]*(C[4]*DP[10]-C[18]+
 C[10]*DP[11])+C[7]*DP[10]-C[24]+C[14]*DP[11])+DP[5]*(C[87]*(-DP[6]-DP[7]))+
 C[106]*(-DP[6]-DP[7]))+DP[11]*(C[87]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(C[4]*(DP[8]*
 (-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[7]*DP[14])+C[18]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[106]*(-DP[6]-
 DP[7])-C[24]*DP[14])+C[123]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[6]+DP[7]))+C[35]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[136]*(DP[6]+DP[7])-C[41]*DP[14]+
 tmp[6]);
R=+S[1]*(DP[5]*(DP[11]*(S[1]*(C[9]*(DP[0]*(DP[8]*(DP[12]-DP[2]-DP[4]+
 DP[13])+DP[9]*(DP[12]-DP[2]-DP[4]+DP[13])+S[1]*(DP[14]-DP[7])+DP[5]*(DP[7]-
 DP[14]))+DP[10]*(DP[8]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[9]*(DP[2]+DP[4]-
 DP[12]-DP[13])+S[1]*(DP[7]-DP[14])+DP[5]*(DP[14]-DP[7]))+DP[11]*(DP[1]*(-
 DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*(DP[5]-S[1])))+C[3]*(DP[8]*(DP[12]-
 DP[2]-DP[4]+DP[13])+DP[9]*(DP[12]-DP[2]-DP[4]+DP[13])+DP[14]*(S[1]-DP[5]+
 DP[11])+DP[7]*(DP[5]-S[1]))+DP[6]*(C[88]*(S[1]-DP[5])+C[79]*(DP[0]-DP[10])-
 C[108]-C[82]*DP[11])+C[88]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+DP[9]))+DP[7]*
 (C[102]*DP[0]-C[104]+C[82]*DP[10])+DP[14]*(C[12]*DP[10]-C[22]-C[19]*
 DP[0]))+tmp[0])+tmp[1])+tmp[5])+tmp[7];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
