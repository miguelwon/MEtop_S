/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F401_out,F402_out,F403_out,F404_out,F405_out,F406_out,F407_out
 ,F408_out,F409_out,F410_out,F411_out,F412_out,F413_out,F414_out,F415_out
 ,F416_out,F417_out,F418_out,F419_out,F420_out,F421_out;
static FNN *Farr[21]={&F401_out,&F402_out,&F403_out,&F404_out,&F405_out
 ,&F406_out,&F407_out,&F408_out,&F409_out,&F410_out,&F411_out,&F412_out
 ,&F413_out,&F414_out,&F415_out,&F416_out,&F417_out,&F418_out,&F419_out
 ,&F420_out,&F421_out};
extern DNN S254_out;
REAL S254_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[11];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[9];  Qtxt[6]="\2\5";
width[5]=0.; mass[5]=V[11];  Qtxt[5]="\1\5";
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
