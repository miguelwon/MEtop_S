/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F422_out,F423_out,F424_out,F425_out,F426_out,F427_out,F428_out
 ,F429_out,F430_out,F431_out,F432_out,F433_out,F434_out,F435_out,F436_out
 ,F437_out,F438_out,F439_out,F440_out,F441_out;
static FNN *Farr[20]={&F422_out,&F423_out,&F424_out,&F425_out,&F426_out
 ,&F427_out,&F428_out,&F429_out,&F430_out,&F431_out,&F432_out,&F433_out
 ,&F434_out,&F435_out,&F436_out,&F437_out,&F438_out,&F439_out,&F440_out
 ,&F441_out};
extern DNN S255_out;
REAL S255_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=0;  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[11];  Qtxt[6]="\1\5";
width[5]=0.; mass[5]=V[11];  Qtxt[5]="\2\5";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\5";
width[2]=V[7]; mass[2]=V[34];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<20;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
