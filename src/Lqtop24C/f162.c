/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F162_out;
static void C162(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[13]*V[13];
S[1]=V[8]*V[8]*V[8]*V[8];
C[90]=+8*S[0]*S[1];
C[89]=+8*S[1];
S[2]=V[9]*V[9];
S[3]=V[13]*V[13]*V[13]*V[13];
C[88]=+S[1]*(S[2]*(S[0]*(S[2]*(4*S[0]+2*S[2])+2*S[3])));
S[4]=V[9]*V[9]*V[9]*V[9];
S[5]=V[8]*V[8];
C[87]=+S[5]*(S[2]*(S[0]*(4*(S[5]*(S[0]+S[2])+S[3]+S[4])+8*S[0]*S[2])));
C[86]=+S[5]*(S[0]*(S[2]*(16*(S[0]+S[2])+12*S[5])+4*S[0]*S[5]));
C[85]=+S[5]*(S[0]*(8*(S[0]+S[5])+24*S[2]));
C[84]=+S[5]*(S[0]*(16*S[2]+8*S[5]));
S[6]=V[13]*V[13]*V[13]*V[13]*V[13]*V[13];
C[83]=+S[1]*(S[2]*(S[2]*(11*S[0]+S[2])+11*S[3])+S[6]);
C[82]=+S[5]*(S[2]*(S[2]*(2*(S[2]+S[5])+22*S[0])+S[0]*(22*S[0]+12*S[5]))+
 S[3]*(2*(S[0]+S[5])));
C[81]=+S[5]*(S[2]*(48*S[0]+8*S[2]+4*S[5])+S[0]*(8*S[0]+12*S[5]));
C[80]=+S[5]*(8*(S[2]+S[5])+24*S[0]);
C[79]=+S[1]*(S[2]*(16*S[0]+4*S[2])+4*S[3]);
C[78]=+S[5]*(S[2]*(32*S[0]+8*S[2]+4*S[5])+S[0]*(8*S[0]+4*S[5]));
C[77]=+S[1]*(S[2]*(S[0]*(8*(S[0]+S[2]))));
C[76]=+S[5]*(S[2]*(S[0]*(16*(S[0]+S[2])+12*S[5])+4*S[2]*S[5]));
C[75]=+16*S[0]*S[2]*S[1];
C[74]=+S[5]*(S[5]*(8*(S[0]+S[2]))+32*S[0]*S[2]);
C[73]=+S[5]*(16*(S[0]+S[2])+8*S[5]);
C[72]=+S[1]*(S[2]*(24*S[0]+4*S[2])+4*S[3]);
C[71]=+S[5]*(S[2]*(48*S[0]+8*S[2]+12*S[5])+S[0]*(8*S[0]+4*S[5]));
C[70]=+S[1]*(8*(S[0]+S[2]));
C[69]=+8*S[0]*S[2]*S[1];
C[68]=+S[5]*(S[2]*(16*S[0]+8*S[5]));
C[67]=+S[1]*(4*(S[0]+S[2]));
C[66]=+S[5]*(S[2]*(S[0]*(S[2]*(16*S[0]+8*S[2])+8*S[3])));
C[65]=+S[5]*(S[0]*(16*S[0]+48*S[2]));
C[64]=+32*S[0]*S[5];
C[63]=+S[2]*(S[0]*(8*(S[5]*(S[0]+S[2])+S[3]+S[4])+16*S[0]*S[2]));
C[62]=+S[2]*(S[0]*(16*(S[0]+S[2])));
C[61]=+S[0]*(S[2]*(32*(S[0]+S[2])+24*S[5])+8*S[0]*S[5]);
C[60]=+S[0]*(16*(S[0]+S[5])+48*S[2]);
C[59]=+S[0]*(32*S[2]+16*S[5]);
C[58]=+32*S[0];
C[57]=+S[5]*(S[2]*(S[2]*(44*S[0]+4*S[2])+44*S[3])+4*S[6]);
C[56]=+S[5]*(48*S[0]+16*S[2]);
C[55]=+S[2]*(S[2]*(4*(S[2]+S[5])+44*S[0])+S[0]*(44*S[0]+24*S[5]))+S[3]*(4*(
 S[0]+S[5]));
C[54]=+S[2]*(48*S[0]+8*S[2])+8*S[3];
C[53]=+S[2]*(96*S[0]+16*S[2]+8*S[5])+S[0]*(16*S[0]+24*S[5]);
C[52]=+16*(S[2]+S[5])+48*S[0];
C[51]=+S[5]*(S[2]*(64*S[0]+16*S[2])+16*S[3]);
C[50]=+S[2]*(64*S[0]+16*S[2]+8*S[5])+S[0]*(16*S[0]+8*S[5]);
C[49]=+S[5]*(S[2]*(S[0]*(32*(S[0]+S[2]))));
C[48]=+S[5]*(S[2]*(48*S[0]+16*S[2]));
C[47]=+64*S[0]*S[2]*S[5];
C[46]=+8*(S[3]-S[4]);
C[45]=+S[2]*(S[0]*(32*(S[0]+S[2])+24*S[5])+8*S[2]*S[5]);
C[44]=+S[2]*(48*S[0]+16*S[2]);
C[43]=+S[5]*(16*(S[0]+S[2]))+64*S[0]*S[2];
C[42]=+32*(S[0]+S[2])+16*S[5];
C[41]=+S[5]*(S[2]*(96*S[0]+16*S[2])+16*S[3]);
C[40]=+S[5]*(16*S[0]+48*S[2]);
C[39]=+S[2]*(96*S[0]+16*S[2]+24*S[5])+S[0]*(16*S[0]+8*S[5]);
C[38]=+16*S[0]+48*S[2];
C[37]=+S[5]*(32*(S[0]+S[2]));
C[36]=+32*(S[0]+S[2]);
C[35]=+32*S[2]*S[5];
C[34]=+S[2]*(32*S[0]+16*S[5]);
C[33]=+32*S[2];
C[32]=+16*(S[0]+S[2]);
C[31]=+S[5]*(8*(S[3]-S[4]));
C[30]=+32*S[5];
C[29]=+S[5]*(16*(S[0]-S[2]));
C[28]=+8*(S[5]*(S[0]-S[2])+S[3]-S[4]);
C[27]=+16*(S[0]-S[2]-S[5]);
C[26]=+16*(S[0]-S[2]);
C[25]=+S[5]*(S[2]*(S[0]*(S[2]*(8*S[0]+4*S[2])+4*S[3])));
C[24]=+S[5]*(S[2]*(S[0]*(8*(S[0]+S[2]))));
C[23]=+S[5]*(S[0]*(8*S[0]+24*S[2]));
C[22]=+16*S[0]*S[5];
C[21]=+S[5]*(S[2]*(S[2]*(22*S[0]+2*S[2])+22*S[3])+2*S[6]);
C[20]=+S[5]*(S[2]*(24*S[0]+4*S[2])+4*S[3]);
C[19]=+S[5]*(24*S[0]+8*S[2]);
C[18]=+S[5]*(S[2]*(32*S[0]+8*S[2])+8*S[3]);
C[17]=+S[5]*(S[2]*(S[0]*(16*(S[0]+S[2]))));
C[16]=+S[5]*(S[2]*(24*S[0]+8*S[2]));
C[15]=+32*S[0]*S[2]*S[5];
C[14]=+S[5]*(S[2]*(48*S[0]+8*S[2])+8*S[3]);
C[13]=+S[5]*(8*S[0]+24*S[2]);
C[12]=+S[5]*(16*(S[0]+S[2]));
C[11]=+16*S[0]*S[2]*S[5];
C[10]=+16*S[2]*S[5];
C[9]=+S[5]*(8*(S[0]+S[2]));
C[8]=+S[1]*(2*(S[3]-S[4]));
C[7]=+S[5]*(4*(S[5]*(S[0]-S[2])+S[3]-S[4]));
C[6]=+S[5]*(8*(S[0]-S[2]-S[5]));
C[5]=+S[5]*(4*(S[3]-S[4]));
C[4]=+16*S[5];
C[3]=+S[1]*(4*(S[0]-S[2]));
C[2]=+S[5]*(8*(S[0]-S[2]));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[33]*V[33];
S[9]=V[31]*V[31];
S[10]=V[30]*V[30];
S[11]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10]*S[11];
}
REAL F162_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         c                 b      !  b                 c             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
          W+|P7         /==>======!==>==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         d  |  t     W+ |  E2     !  E2 |  W+    t  |  d             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[91];REAL S[2];REAL tmp[5];                                    
     
if(CalcConst) C162(C);
N=-C[0];
S[0]=V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34]*V[34];
D=+C[1]*S[0];
S[1]=V[34]*V[34];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[3]*(-DP[6]-DP[7])+DP[4]*(-DP[6]-DP[7])+
 DP[9]*DP[0])+C[58]*(DP[3]+DP[4])-C[26]*DP[9])+DP[6]*(C[30]*(DP[1]+DP[2])+
 C[4]*DP[3]+C[52]*DP[4]-C[26]*DP[9])+DP[7]*(C[30]*(DP[1]+DP[2])+C[42]*DP[4]-
 C[27]*DP[3]-C[26]*DP[9])+DP[0]*(C[27]*DP[9]-C[58]*DP[4]-C[30]*DP[8])+C[64]*
 (-DP[1]-DP[2])+C[29]*DP[8]-C[22]*DP[3]-C[60]*DP[4]+C[28]*DP[9])+DP[5]*(
 C[4]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[7]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[0]*(DP[8]+DP[9]))+C[22]*(DP[1]+DP[2]+DP[3]+DP[4])+C[2]*(-DP[8]-DP[9]))+
 DP[4]*(DP[6]*(C[36]*(DP[6]+DP[7])-C[53]-C[32]*DP[0])+C[61]+C[59]*DP[0]-
 C[43]*DP[7])+DP[7]*(C[29]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9])-C[37]*DP[2])+
 DP[0]*(C[64]*DP[2]-C[29]*DP[8]-C[2]*DP[9])+DP[6]*(C[29]*DP[8]-C[56]*DP[2]+
 C[2]*DP[9])+C[65]*DP[2]-C[31]*DP[8]-C[5]*DP[9]);
tmp[1]=+DP[5]*(C[2]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-
 DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[6]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+DP[11]*(DP[6]*(C[12]*(DP[6]+DP[7])-
 C[81]-C[9]*DP[0]-C[19]*DP[5])+DP[5]*(C[23]+C[22]*DP[0]-C[12]*DP[7])+C[86]+
 C[84]*DP[0]-C[74]*DP[7])+DP[12]*(DP[2]*(C[19]*DP[6]-C[23]-C[22]*DP[0]+
 C[12]*DP[7])+DP[4]*(C[19]*DP[6]-C[23]-C[22]*DP[0]+C[12]*DP[7])+C[5]*(DP[8]+
 DP[9]))+DP[13]*(DP[2]*(C[19]*DP[6]-C[23]-C[22]*DP[0]+C[12]*DP[7])+DP[4]*(
 C[19]*DP[6]-C[23]-C[22]*DP[0]+C[12]*DP[7])+C[5]*(DP[8]+DP[9]))+DP[14]*(
 C[3]*(DP[6]-DP[0]+DP[7])-C[8]-C[5]*DP[5])+C[3]*DP[10]*DP[7])+DP[2]*(DP[6]*(
 DP[12]*(C[37]*(-DP[6]-DP[7])+C[41]+C[12]*DP[0])+DP[13]*(C[12]*(-DP[6]-
 DP[7])+C[14]+C[9]*DP[0]))+DP[12]*(C[47]*DP[7]-C[49]-C[15]*DP[0])+DP[13]*(
 C[15]*DP[7]-C[17]-C[11]*DP[0]))+DP[4]*(DP[12]*(DP[6]*(C[12]*(-DP[6]-DP[7])+
 C[14]+C[9]*DP[0])+C[15]*DP[7]-C[17]-C[11]*DP[0]));
tmp[2]=+DP[7]*(DP[5]*(DP[6]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5]))+C[13]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[1]))+DP[11]*(C[71]-C[12]*DP[6]-C[9]*DP[7])-C[3]*
 DP[10])+DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5]))+C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[1]))+C[68]*DP[11]-C[3]*DP[10])+C[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[16]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))+C[8]*DP[10]-C[76]*DP[11])+DP[12]*(S[1]*
 (DP[4]*(DP[6]*(C[39]-C[38]*S[1]-C[36]*DP[6]-C[32]*DP[7])+S[1]*(C[44]-C[33]*
 DP[7])+C[34]*DP[7]-C[45])+DP[3]*(S[1]*(C[26]*(DP[6]+DP[7])-C[46])+C[2]*(-
 DP[6]-DP[7])+C[5])+DP[1]*(C[29]*(-DP[6]-DP[7])+C[31])+DP[2]*(C[40]*DP[6]-
 C[48]+C[35]*DP[7]))+DP[6]*(DP[2]*(C[37]*DP[6]-C[41]+C[12]*DP[7])+DP[4]*(
 C[12]*DP[6]-C[14]+C[9]*DP[7]))+DP[2]*(C[49]-C[15]*DP[7])+DP[4]*(C[17]-
 C[11]*DP[7]))+DP[13]*(DP[2]*(DP[6]*(C[13]*S[1]-C[14]+C[12]*DP[6]+C[9]*
 DP[7])+S[1]*(C[10]*DP[7]-C[16])+C[17]-C[11]*DP[7])+S[1]*(DP[1]*(C[2]*(-
 DP[6]-DP[7])+C[5]))));
tmp[3]=+DP[0]*(S[1]*(DP[5]*(C[4]*(DP[13]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[7]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+DP[9]))+S[1]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+DP[5]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11])-DP[14]*DP[0]))+C[22]*(DP[13]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[11]*(S[1]-DP[0]-DP[5])+DP[10]*(S[1]-DP[5]))+DP[14]*(C[2]*(DP[5]-
 S[1]-DP[6]-DP[7])+C[7]+C[6]*DP[0])+DP[10]*(C[89]*DP[6]-C[90]-C[6]*DP[7])+
 DP[11]*(C[80]*DP[6]-C[85]+C[73]*DP[7])+DP[13]*(C[2]*(-DP[8]-DP[9])))+
 DP[13]*(S[1]*(C[4]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])-DP[8]*DP[0])+
 C[22]*(-DP[1]-DP[2])+C[2]*DP[8])+DP[2]*(C[23]+C[22]*DP[0]-C[19]*DP[6]-
 C[12]*DP[7])+DP[8]*(C[2]*(DP[6]-DP[0]+DP[7])-C[5])+C[2]*DP[7]*DP[1])+
 tmp[0])+tmp[1]);
tmp[4]=+DP[6]*(DP[0]*(C[12]*(DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5]))+DP[0]*(C[9]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[67]*DP[11])+C[14]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+DP[11]*(C[70]*(-DP[6]-DP[7])+C[72]))+DP[6]*(DP[2]*(
 DP[12]*(C[18]-C[9]*DP[6]-C[12]*DP[7])+DP[13]*(C[18]-C[9]*DP[6]-C[12]*
 DP[7]))+DP[4]*(DP[12]*(C[18]-C[9]*DP[6]-C[12]*DP[7])+DP[13]*(C[18]-C[9]*
 DP[6]-C[12]*DP[7]))+DP[11]*(DP[5]*(C[9]*DP[6]-C[18]+C[12]*DP[7])+C[67]*
 DP[6]-C[79]+C[70]*DP[7]))+DP[7]*(DP[7]*(C[9]*(DP[2]*(-DP[12]-DP[13])+DP[4]*
 (-DP[12]-DP[13])+DP[11]*DP[5])+C[67]*DP[11])+C[14]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[72]*DP[11])+C[21]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[83]*DP[11]);
R=+S[1]*(DP[6]*(DP[6]*(DP[12]*(DP[4]*(S[1]*(C[32]*(-S[1]-DP[6])+C[50])+C[9]*
 (DP[6]-DP[5])-C[18])+DP[2]*(C[12]*(S[1]+DP[6])-C[51]-C[9]*DP[5]))+C[9]*(
 DP[5]*(DP[11]*(DP[5]-S[1]-DP[6])+DP[13]*(-DP[2]-DP[4]))+DP[2]*(DP[13]*(
 S[1]+DP[6])))+C[78]*DP[11]*DP[5]-C[18]*DP[13]*DP[2])+DP[5]*(C[20]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))-C[82]*DP[11])+
 DP[12]*(S[1]*(DP[4]*(C[54]*S[1]-C[55])-C[14]*DP[2])+C[57]*DP[2]+C[21]*
 DP[4])+DP[2]*(DP[13]*(C[21]-C[20]*S[1])))+DP[5]*(C[24]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+C[87]*DP[11])+DP[12]*(
 S[1]*(DP[4]*(C[63]-C[62]*S[1])+C[17]*DP[2])-C[66]*DP[2]-C[25]*DP[4])+DP[2]*
 (DP[13]*(C[24]*S[1]-C[25]))+tmp[2]+tmp[3])+DP[5]*(DP[0]*(DP[0]*(C[11]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[69]*DP[11])+
 DP[7]*(C[15]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[75]*DP[11])+C[17]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])-C[77]*DP[11])+DP[7]*(DP[7]*(C[11]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])-C[69]*DP[11])+C[17]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[77]*DP[11])+C[25]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[88]*DP[11]+tmp[4]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
