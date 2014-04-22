/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F347_out,F348_out;
static FNN *Farr[2]={&F347_out,&F348_out};
extern DNN S231_out;
REAL S231_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[5],width[5];
char * Qtxt[5];
REAL Q0[5],Q1[5],Q2[5];
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\6";
width[3]=V[7]; mass[3]=V[34];  Qtxt[3]="\3\4";
width[2]=V[12]; mass[2]=V[11];  Qtxt[2]="\1\2\6";
width[1]=V[7]; mass[1]=V[34];  Qtxt[1]="\1\2";
*err=*err|prepDen(4,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<2;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
