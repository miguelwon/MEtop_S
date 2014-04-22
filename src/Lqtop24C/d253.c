/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F381_out,F382_out,F383_out,F384_out,F385_out,F386_out,F387_out
 ,F388_out,F389_out,F390_out,F391_out,F392_out,F393_out,F394_out,F395_out
 ,F396_out,F397_out,F398_out,F399_out,F400_out;
static FNN *Farr[20]={&F381_out,&F382_out,&F383_out,&F384_out,&F385_out
 ,&F386_out,&F387_out,&F388_out,&F389_out,&F390_out,&F391_out,&F392_out
 ,&F393_out,&F394_out,&F395_out,&F396_out,&F397_out,&F398_out,&F399_out
 ,&F400_out};
extern DNN S253_out;
REAL S253_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[11];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=0;  Qtxt[6]="\2\5";
width[5]=0.; mass[5]=V[11];  Qtxt[5]="\1\5";
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
