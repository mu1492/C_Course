// ex_08_17.cpp, pag. 142

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int i, n;
  double a[100],d,er,s1=0,s2=0,s3=0,vA,vm,vp,vMAD,vRMS;

  clrscr();
  printf(" The number of elements n = "); scanf("%d",&n);

  for(i=0; i<n; i++)
     { printf("\t\t a[%2d] = ", i); scanf("%le", &a[i]); }

  for(i=0; i<n; i++)
     { s1+=a[i]; s2+=fabs(a[i]); s3+=a[i]*a[i]; }

  vm=s1/n; vA=s2/n; vp=s3/n; vRMS=sqrt(vp);
  printf("\n\t Average (arithmetic mean)= %le"
	   "\n\t Mean of absolute values  = %le"
	   "\n\t Average of square values = %le"
	   "\n\t Root mean square value   = %le", vm,vA,vp,vRMS);

  for(s1=0, i=0; i<n; i++) s1+=fabs(a[i]-vm);
  vMAD=s1/n; er=sqrt(vRMS*vRMS-vm*vm);
  printf("\n\t Mean absolute deviation  = %le"
	   "\n\t Standard deviation       = %le", vMAD,er);

  getch();

  return 0;
}
