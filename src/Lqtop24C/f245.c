/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F245_out;
static void C245(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
S[1]=V[8]*V[8];
C[87]=+4*S[0]*S[1];
S[2]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[86]=+16*S[2]*S[1];
C[85]=+4*S[0];
C[84]=+16*S[2];
C[83]=+8*S[2];
S[3]=V[10]*V[10];
C[82]=+8*S[2]*S[3];
S[4]=V[8]*V[8]*V[8]*V[8];
C[81]=+S[0]*S[4];
S[5]=V[13]*V[13];
C[80]=+S[2]*(S[1]*(2*S[5]+4*S[1]));
S[6]=V[13]*V[13]*V[13]*V[13];
C[79]=+S[6]*(8*S[5]-16*S[1]);
C[78]=+4*S[2]*S[4];
C[77]=+S[6]*(S[1]*(8*(S[5]+S[1])));
C[76]=+8*S[2]*S[3]*S[1];
C[75]=+2*S[0]*S[1];
C[74]=+8*S[2]*S[1];
C[73]=+S[6]*(8*S[5]+4*S[1]);
C[72]=+S[5]*(16*S[5]+8*S[1]);
C[71]=+S[6]*(4*S[3]-8*S[1]);
C[70]=+2*S[2]*S[4];
C[69]=+S[6]*(S[1]*(4*S[5]+8*S[1]));
C[68]=+S[1]*(S[5]*(16*S[5]+8*S[1]));
C[67]=+S[5]*(8*S[5]-16*S[1]);
C[66]=+4*S[2]*S[1];
C[65]=+S[5]*(16*(S[5]+S[1]));
C[64]=+S[1]*(S[5]*(8*S[5]+16*S[1]));
C[63]=+S[1]*(32*S[5]+16*S[1]);
C[62]=+S[6]*(S[1]*(8*S[5]-4*S[3]));
C[61]=+S[6]*(4*(-S[3]-S[1])+8*S[5]);
C[60]=+S[5]*(16*S[5]-8*S[1]);
C[59]=+S[2]*S[3]*S[4];
C[58]=+S[6]*(S[1]*(S[3]*(2*S[5]+4*S[1])));
C[57]=+S[4]*(S[6]*(2*(S[5]-S[3])));
C[56]=+S[1]*(S[5]*(4*(S[5]*(S[5]-S[3]+S[1])-S[3]*S[1])));
C[55]=+S[1]*(S[5]*(8*(S[5]-S[3]+S[1])));
C[54]=+S[5]*(16*(S[5]-S[1])+8*S[3]);
C[53]=+S[6]*(S[1]*(4*S[5]-2*S[3]));
C[52]=+S[6]*(S[1]*(4*(S[5]-S[3])));
C[51]=+S[1]*(S[5]*(8*(S[5]-S[3])));
C[50]=+16*S[6];
C[49]=+S[1]*(S[5]*(8*(S[5]+S[1])));
C[48]=+S[1]*(16*(S[5]+S[1]));
C[47]=+16*S[5]-32*S[1];
C[46]=+16*S[6]*S[1];
C[45]=+S[5]*(16*(S[5]-S[1]));
C[44]=+32*S[5];
C[43]=+4*S[6]*S[3]*S[4];
C[42]=+S[1]*(S[3]*(S[5]*(8*(S[5]+S[1]))));
C[41]=+4*S[6]*S[4];
C[40]=+32*(S[5]-S[1]);
C[39]=+32*S[5]*S[1];
C[38]=+8*S[6]*S[1];
C[37]=+4*S[2]*S[3]*S[1];
C[36]=+S[1]*(S[5]*(8*S[5]+16*S[3]));
C[35]=+8*S[6];
C[34]=+8*S[6]*S[3]*S[1];
C[33]=+16*S[5]*S[1];
C[32]=+16*(S[5]+S[1]);
C[31]=+32*S[3]*S[1];
C[30]=+S[6]*(S[3]*(4*(S[5]+S[1])));
C[29]=+S[5]*(S[1]*(4*S[5]+8*S[3])+4*S[5]*S[3]);
C[28]=+S[5]*(8*(S[5]+S[3]));
C[27]=+16*S[5];
C[26]=+4*S[6]*S[1];
C[25]=+2*S[2]*S[3]*S[1];
C[24]=+S[1]*(S[5]*(4*S[5]+8*S[3]));
C[23]=+S[3]*(S[5]*(4*(S[5]+S[1])));
C[22]=+8*S[6]*S[3];
C[21]=+16*(S[5]-S[1]);
C[20]=+4*S[5]*S[3]*S[1];
C[19]=+8*S[5]*S[1];
C[18]=+4*S[6]*S[3]*S[1];
C[17]=+64*S[1];
C[16]=+S[3]*(S[5]*(4*S[5]+8*S[1]));
C[15]=+8*S[5]*S[3];
C[14]=+16*S[5]*S[3];
C[13]=+S[6]*S[3]*S[4];
C[12]=+S[1]*(S[3]*(S[5]*(2*S[5]+4*S[1])));
C[11]=+S[1]*(S[3]*(8*(S[5]+S[1])));
C[10]=+S[3]*(8*S[5]+16*S[1]);
C[9]=+16*S[3];
C[8]=+16*S[4];
C[7]=+16*S[5]*S[3]*S[1];
C[6]=+16*S[1];
C[5]=+2*S[6]*S[3]*S[1];
C[4]=+8*S[5]*S[3]*S[1];
C[3]=+16*S[3]*S[1];
C[2]=+32*S[1];
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+48*S[7];
S[8]=V[33]*V[33];
S[9]=V[32]*V[32];
S[10]=V[27]*V[27];
S[11]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10]*S[11];
}
REAL F245_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  n2                              
                           n2 /===!==>==\                            
                        /==>==/   !  P3 |                            
                        |  P3     !     |                            
                        |         !  E2 |  W+    t     s             
         s     t     W+ |  E2  /==!==<==@-->4-@==>==@==>==           
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
static REAL C[88];REAL S[2];REAL tmp[9];                                    
     
if(CalcConst) C245(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[2]*(C[2]*(DP[14]*(DP[2]+DP[3]+DP[4])+DP[8]*(-DP[10]-DP[11])+
 DP[12]*(-DP[6]-DP[7]))+C[27]*(DP[0]*(-DP[9]-DP[13])+DP[3]*(DP[6]+DP[10])+
 DP[4]*(DP[6]+DP[10]))+C[21]*(DP[9]*(DP[10]+DP[11])+DP[13]*(DP[6]+DP[7]))+
 C[28]*(-DP[9]-DP[13])+C[17]*DP[14]*DP[1]-C[50]*DP[3])+DP[1]*(C[2]*(DP[14]*(
 DP[1]+DP[3]+DP[4])+DP[8]*(-DP[10]-DP[11])+DP[12]*(-DP[6]-DP[7]))+C[27]*(
 DP[3]*(-DP[7]-DP[11])+DP[4]*(-DP[7]-DP[11]))+C[6]*(DP[9]*(-DP[10]-DP[11])+
 DP[13]*(-DP[6]-DP[7]))+C[50]*DP[4])+DP[5]*(DP[0]*(C[27]*(DP[7]+DP[11])-
 C[50]-C[2]*DP[14])+DP[6]*(C[67]+C[2]*DP[10]-C[47]*DP[11])+DP[7]*(C[54]-
 C[47]*DP[10]-C[40]*DP[11])+C[67]*DP[10]-C[79]+C[54]*DP[11]-C[10]*DP[14])+
 DP[8]*(DP[3]*(C[32]*(-DP[10]-DP[11])+C[35]+C[27]*DP[0])+DP[4]*(C[6]*(-
 DP[10]-DP[11])-C[15])+DP[0]*(C[17]*DP[12]+C[2]*DP[13])+C[31]*DP[12]+C[10]*
 DP[13])+DP[12]*(DP[3]*(C[32]*(-DP[6]-DP[7])+C[35]+C[27]*DP[0])+DP[4]*(C[6]*
 (-DP[6]-DP[7])-C[15])+DP[9]*(C[10]+C[2]*DP[0]));
tmp[1]=+DP[5]*(C[6]*(DP[1]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[1])+DP[2]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[2])+DP[3]*(DP[6]*(DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+
 DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+DP[11])-DP[14]*DP[3])+DP[4]*(DP[6]*(
 DP[12]+DP[13])+DP[7]*(DP[12]+DP[13])+DP[8]*(DP[10]+DP[11])+DP[9]*(DP[10]+
 DP[11])-DP[14]*DP[4]))+C[2]*(DP[14]*(DP[1]*(-DP[2]-DP[3]-DP[4])+DP[2]*(-
 DP[3]-DP[4])+DP[5]*DP[0]-DP[4]*DP[3])+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*
 (-DP[12]-DP[13]))+DP[5]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11])))+
 DP[5]*(C[33]*(DP[6]+DP[7]+DP[10]+DP[11])+C[3]*DP[14]-C[46])+DP[0]*(C[33]*(
 DP[6]+DP[10])+C[8]*DP[14]-C[46])+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13]))+DP[6]*(C[68]-C[63]*DP[10]-C[48]*DP[11])+DP[7]*(C[55]-C[48]*
 DP[10]-C[8]*DP[11])+C[68]*DP[10]-C[77]+C[55]*DP[11]+C[11]*DP[14]);
tmp[2]=+C[19]*(DP[1]*(DP[7]*(-DP[1]-DP[2]-DP[4]-DP[12]-DP[13])+DP[11]*(-
 DP[1]-DP[2]-DP[4]-DP[8]-DP[9])+DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[6]*(
 DP[2]+DP[4]-DP[12]-DP[13])+DP[10]*(DP[2]+DP[4]-DP[8]-DP[9]))+DP[3]*(DP[7]*
 (-DP[2]-DP[3]-DP[4]-DP[12]-DP[13])+DP[11]*(-DP[2]-DP[3]-DP[4]-DP[8]-DP[9])+
 DP[0]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[6]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[10]*
 (DP[2]+DP[4]-DP[8]-DP[9]))+DP[2]*(DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*
 (DP[2]+DP[12]+DP[13])+DP[10]*(DP[2]+DP[8]+DP[9])+DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9]))+DP[4]*(DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[6]*(
 DP[4]+DP[12]+DP[13])+DP[10]*(DP[4]+DP[8]+DP[9])+DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9])))+DP[5]*(DP[6]*(C[33]*(DP[11]-DP[0])+C[39]*DP[10]-
 C[46])+DP[10]*(C[33]*(DP[7]-DP[0])-C[46])+C[51]*(-DP[7]-DP[11])+C[74]+
 C[46]*DP[0]-C[4]*DP[14])+C[26]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(
 DP[8]+DP[9]+DP[12]+DP[13]))+C[24]*(DP[2]*(-DP[8]-DP[9]-DP[12]-DP[13])+
 DP[4]*(-DP[8]-DP[9]-DP[12]-DP[13]))+DP[0]*(C[38]*(DP[0]-DP[7]-DP[11])+
 C[49]*(-DP[6]-DP[10])+C[77])+DP[6]*(C[33]*DP[4]*DP[2]-C[69]+C[64]*DP[10]+
 C[49]*DP[11])+DP[7]*(C[49]*DP[10]-C[56]-C[33]*DP[3]*DP[1]+C[38]*DP[11])+
 C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+DP[10]*(C[33]*DP[4]*
 DP[2]-C[69])+DP[11]*(-C[56]-C[33]*DP[3]*DP[1])+C[80]-C[12]*DP[14];
tmp[3]=+S[1]*(S[1]*(S[1]*(32*(DP[3]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+
 DP[7])+DP[14]*(-DP[1]-DP[2]))+DP[4]*(DP[8]*(DP[10]+DP[11])+DP[12]*(DP[6]+
 DP[7])+DP[14]*(-DP[1]-DP[2]))+DP[0]*(DP[14]*DP[5]-DP[12]*DP[9]-DP[13]*
 DP[8]))+C[27]*(DP[5]*(-DP[6]-DP[7]-DP[10]-DP[11])+DP[1]*(DP[9]+DP[13])+
 DP[2]*(DP[9]+DP[13])+DP[3]*(-DP[8]-DP[12])+DP[4]*(-DP[8]-DP[12]))+C[9]*(
 DP[14]*DP[5]-DP[12]*DP[9]-DP[13]*DP[8])+C[50]*DP[5])+tmp[0])+DP[2]*(C[33]*(
 DP[1]*(DP[7]-DP[6]-DP[10]+DP[11])+DP[6]*(-DP[2]-DP[4]-DP[12])+DP[8]*(DP[0]-
 DP[10]-DP[11])+DP[10]*(-DP[2]-DP[4])+DP[12]*(DP[0]-DP[7]))+DP[3]*(C[72]*(-
 DP[6]-DP[10])+C[60]*(-DP[7]-DP[11])+C[84]+C[50]*DP[0])+C[19]*(DP[9]*(DP[0]-
 DP[10]-DP[11])+DP[13]*(DP[0]-DP[6]-DP[7]))+C[36]*(DP[8]+DP[12])+C[29]*(
 DP[9]+DP[13])-C[22]*DP[4])+DP[1]*(C[19]*(DP[4]*(DP[7]-DP[6]-DP[10]+DP[11])+
 DP[9]*(DP[10]-DP[0]+DP[11])+DP[13]*(DP[6]-DP[0]+DP[7]))+C[33]*(DP[7]*(
 DP[1]+DP[3]+DP[12])+DP[8]*(DP[10]-DP[0]+DP[11])+DP[11]*(DP[1]+DP[3])+
 DP[12]*(DP[6]-DP[0]))+C[38]*(-DP[8]-DP[12])+C[26]*(-DP[9]-DP[13]))+C[19]*(
 DP[3]*(DP[8]*(DP[10]-DP[0]+DP[11])+DP[12]*(DP[6]-DP[0]+DP[7]))+DP[4]*(
 DP[8]*(DP[0]-DP[10]-DP[11])+DP[12]*(DP[0]-DP[6]-DP[7])))+DP[8]*(C[24]*
 DP[4]-C[26]*DP[3]-C[7]*DP[12]-C[4]*DP[13])+DP[12]*(C[24]*DP[4]-C[26]*DP[3]-
 C[4]*DP[9])+tmp[1]);
tmp[4]=+DP[5]*(DP[6]*(DP[10]*(C[33]*(-DP[1]-DP[2]-DP[3])-C[39]*DP[4])+C[26]*
 (DP[1]+DP[2]+DP[3])+DP[4]*(C[38]-C[33]*DP[11])+C[20]*(DP[12]+DP[13])-C[19]*
 DP[11]*DP[2])+DP[10]*(C[26]*(DP[1]+DP[2]+DP[3])+DP[4]*(C[38]-C[33]*DP[7])+
 C[20]*(DP[8]+DP[9])-C[19]*DP[7]*DP[2])+DP[1]*(DP[7]*(C[33]*DP[11]-C[26])+
 C[4]*DP[14]-C[26]*DP[11])+DP[3]*(DP[7]*(C[33]*DP[11]-C[26])+C[4]*DP[14]-
 C[26]*DP[11])+C[18]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[14]*(C[4]*DP[2]+C[7]*
 DP[4]))+DP[1]*(C[46]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+C[74]*
 (DP[6]+DP[10])+C[62]*(DP[7]+DP[11])+C[18]*DP[14]-C[87])+DP[3]*(C[38]*(
 DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+C[66]*(DP[6]+DP[10])+C[53]*(
 DP[7]+DP[11])+C[5]*DP[14]-C[75])+C[18]*(DP[6]*(DP[12]-DP[2]-DP[4])+DP[10]*(
 DP[8]-DP[2]-DP[4])+DP[11]*DP[9]+DP[13]*DP[7])+C[34]*(DP[7]*(DP[12]-DP[2]-
 DP[4])+DP[11]*(DP[8]-DP[2]-DP[4]))+DP[9]*(C[5]*DP[10]-C[25])+DP[13]*(C[5]*
 DP[6]-C[25])+C[76]*(DP[2]+DP[4])+C[37]*(-DP[8]-DP[12]);
tmp[5]=+DP[1]*(S[1]*(DP[7]*(S[1]*(DP[3]*(C[27]*DP[10]-C[35]+C[44]*DP[11])+
 DP[4]*(C[27]*DP[10]-C[50]+C[44]*DP[11])-C[15]*DP[13])+DP[1]*(C[38]-C[33]*
 DP[10]-C[39]*DP[11])+DP[3]*(C[38]-C[33]*DP[10]-C[39]*DP[11])+DP[4]*(C[26]-
 C[33]*DP[11])+C[4]*DP[12]+C[20]*DP[13])+DP[11]*(S[1]*(DP[3]*(C[27]*DP[6]-
 C[35])+DP[4]*(C[27]*DP[6]-C[50])-C[15]*DP[9])+DP[1]*(C[38]-C[33]*DP[6])+
 DP[3]*(C[38]-C[33]*DP[6])+C[26]*DP[4]+C[4]*DP[8]+C[20]*DP[9])+DP[4]*(S[1]*(
 C[35]*(-DP[6]-DP[10])+C[83]+C[15]*DP[14])+DP[6]*(C[33]*DP[10]-C[26])-C[26]*
 DP[10]-C[4]*DP[14]))+DP[5]*(DP[7]*(DP[1]*(C[19]*DP[10]-C[26]+C[33]*DP[11])+
 DP[3]*(C[33]*DP[10]-C[38]+C[39]*DP[11])+DP[4]*(C[33]*DP[11]-C[26])+C[20]*(-
 DP[12]-DP[13]))+DP[11]*(DP[1]*(C[19]*DP[6]-C[26])+DP[3]*(C[33]*DP[6]-
 C[38])+C[20]*(-DP[8]-DP[9])-C[26]*DP[4])+DP[4]*(DP[6]*(C[26]-C[33]*DP[10])+
 C[26]*DP[10]+C[4]*DP[14]))+DP[4]*(C[38]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-
 DP[10]-DP[11]))+C[66]*(DP[6]+DP[10])+C[53]*(DP[7]+DP[11])+C[5]*DP[14]-
 C[75]));
tmp[6]=+DP[2]*(S[1]*(DP[6]*(S[1]*(DP[3]*(C[50]-C[44]*DP[10]-C[27]*DP[11])+
 DP[4]*(C[35]-C[44]*DP[10]-C[27]*DP[11])+C[15]*DP[13])+DP[10]*(C[39]*(DP[1]+
 DP[2]+DP[4])+C[65]*DP[3])+DP[11]*(C[33]*(DP[2]+DP[4])+C[50]*DP[3])+C[38]*(-
 DP[1]-DP[2])+C[71]*DP[4]-C[73]*DP[3]-C[4]*DP[12]-C[23]*DP[13])+DP[10]*(
 S[1]*(DP[3]*(C[50]-C[27]*DP[7])+DP[4]*(C[35]-C[27]*DP[7])+C[15]*DP[9])+
 DP[7]*(C[33]*(DP[2]+DP[4])+C[50]*DP[3])+C[38]*(-DP[1]-DP[2])+C[71]*DP[4]-
 C[73]*DP[3]-C[4]*DP[8]-C[23]*DP[9])+DP[3]*(S[1]*(C[35]*(DP[7]+DP[11])+
 C[15]*DP[14]-C[83])+DP[7]*(C[45]*DP[11]-C[61])+C[85]-C[61]*DP[11]-C[16]*
 DP[14])+C[22]*(S[1]*(-DP[9]-DP[13])+DP[4]*(DP[7]+DP[11])-DP[11]*DP[9]-
 DP[13]*DP[7])+DP[1]*(DP[7]*(C[38]-C[39]*DP[11])+C[38]*DP[11]-C[7]*DP[14])+
 DP[4]*(DP[14]*(C[14]*S[1]-C[7])-C[82])+C[34]*(DP[8]+DP[12])+C[30]*(DP[9]+
 DP[13])-C[7]*DP[14]*DP[2])+tmp[4]);
tmp[7]=+DP[2]*(DP[1]*(C[38]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+
 C[66]*(-DP[6]-DP[10])+C[53]*(-DP[7]-DP[11])+C[75]-C[5]*DP[14])+DP[3]*(
 C[38]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[66]*(-DP[6]-DP[10])+
 C[53]*(-DP[7]-DP[11])+C[75]-C[5]*DP[14])+C[18]*(DP[7]*(DP[2]-DP[12]-
 DP[13])+DP[11]*(DP[2]-DP[8]-DP[9])+DP[4]*(DP[6]+DP[10]))+C[5]*(DP[6]*(
 DP[2]-DP[12]-DP[13])+DP[10]*(DP[2]-DP[8]-DP[9]))+C[25]*(DP[8]+DP[9]+DP[12]+
 DP[13])+DP[4]*(C[34]*(DP[7]+DP[11])-C[76])-C[37]*DP[2])+DP[4]*(DP[1]*(
 C[38]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[66]*(-DP[6]-DP[10])+
 C[53]*(-DP[7]-DP[11])+C[75]-C[5]*DP[14])+DP[3]*(C[38]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+C[66]*(-DP[6]-DP[10])+C[53]*(-DP[7]-DP[11])+
 C[75]-C[5]*DP[14])+C[5]*(DP[6]*(DP[4]-DP[12]-DP[13])+DP[10]*(DP[4]-DP[8]-
 DP[9]))+C[18]*(DP[7]*(DP[4]-DP[12]-DP[13])+DP[11]*(DP[4]-DP[8]-DP[9]))+
 C[25]*(DP[8]+DP[9]+DP[12]+DP[13])-C[37]*DP[4])+DP[7]*(DP[5]*(C[5]*DP[10]-
 C[25]+C[34]*DP[11])+C[13]*DP[10]-C[59]+C[43]*DP[11])+DP[11]*(DP[5]*(C[5]*
 DP[6]-C[25])+C[13]*DP[6]-C[59]);
tmp[8]=+S[1]*(DP[0]*(DP[5]*tmp[2]+DP[2]*(DP[1]*(C[46]*(DP[6]-DP[0]+DP[7]+
 DP[10]+DP[11])-C[86])+DP[3]*(C[38]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-
 C[74])+C[34]*(DP[2]+DP[4])+C[18]*(-DP[8]-DP[12])+C[5]*(-DP[9]-DP[13]))+
 DP[4]*(DP[1]*(C[38]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[74])+C[5]*(-DP[8]-
 DP[12]))+tmp[3])+DP[5]*(DP[4]*(DP[3]*(C[26]*(DP[6]-DP[7]+DP[10]-DP[11])+
 C[33]*(DP[11]*DP[7]-DP[10]*DP[6])+C[4]*DP[14])+DP[4]*(DP[6]*(C[26]-C[33]*
 DP[10]-C[19]*DP[11])+DP[10]*(C[26]-C[19]*DP[7])+C[4]*DP[14])+C[18]*(-DP[8]-
 DP[9]-DP[12]-DP[13])+C[20]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9])))+
 DP[7]*(DP[3]*(DP[3]*(C[19]*DP[10]-C[26]+C[33]*DP[11])+C[20]*(-DP[12]-
 DP[13]))+S[1]*(C[4]*DP[10]-C[34]+C[7]*DP[11])+DP[5]*(C[34]-C[4]*DP[10]-
 C[7]*DP[11])+C[58]-C[12]*DP[10]-C[42]*DP[11])+DP[11]*(DP[3]*(DP[3]*(C[19]*
 DP[6]-C[26])+C[20]*(-DP[8]-DP[9]))+DP[6]*(C[4]*(S[1]-DP[5])-C[12])+C[34]*(
 DP[5]-S[1])+C[58]))+DP[4]*(DP[8]*(S[1]*(C[18]-C[20]*DP[10])+C[5]*DP[10]-
 C[25]+C[18]*DP[11])+DP[12]*(S[1]*(C[18]-C[20]*DP[6])+C[5]*DP[6]-C[25]+
 C[18]*DP[7]))+S[1]*(DP[3]*(C[20]*(DP[11]*DP[8]+DP[12]*DP[7])))+tmp[5]+
 tmp[6]);
R=+DP[5]*(DP[0]*(C[38]*(DP[1]*(DP[2]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+
 DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[3]*(DP[2]*(DP[0]-DP[6]-DP[7]-
 DP[10]-DP[11])+DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[5]*(DP[0]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-
 DP[11])))+C[41]*(DP[0]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))+C[5]*(DP[2]*(DP[8]+DP[9]+DP[12]+DP[13])+
 DP[4]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[14]*DP[5])+DP[5]*(C[66]*(DP[6]+
 DP[10])+C[52]*(DP[7]+DP[11])-C[75]-C[74]*DP[0])+DP[2]*(C[74]*(DP[1]+DP[3])-
 C[18]*DP[2]-C[34]*DP[4])+DP[4]*(C[74]*(DP[1]+DP[3])-C[18]*DP[4])+C[70]*(
 DP[6]+DP[10])+C[57]*(DP[7]+DP[11])+C[13]*DP[14]-C[81]-C[78]*DP[0])+tmp[7])+
 tmp[8];
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}