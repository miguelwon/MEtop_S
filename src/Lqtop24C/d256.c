/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F442_out,F443_out,F444_out,F445_out,F446_out,F447_out,F448_out
 ,F449_out,F450_out,F451_out,F452_out,F453_out,F454_out,F455_out,F456_out
 ,F457_out,F458_out,F459_out,F460_out,F461_out,F462_out;
static FNN *Farr[21]={&F442_out,&F443_out,&F444_out,&F445_out,&F446_out
 ,&F447_out,&F448_out,&F449_out,&F450_out,&F451_out,&F452_out,&F453_out
 ,&F454_out,&F455_out,&F456_out,&F457_out,&F458_out,&F459_out,&F460_out
 ,&F461_out,&F462_out};
extern DNN S256_out;
REAL S256_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[9];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[11];  Qtxt[6]="\1\5";
width[5]=0.; mass[5]=V[11];  Qtxt[5]="\2\5";
width[4]=0.; mass[4]=V[9];  Qtxt[4]="\1\5";
width[2]=V[7]; mass[2]=V[34];  Qtxt[2]="\3\4";
width[1]=V[12]; mass[1]=V[11];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<21;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
