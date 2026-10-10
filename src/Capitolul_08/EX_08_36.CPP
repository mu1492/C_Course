// ex_08_36.cpp, pag. 162-163

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <process.h>

#define PI 3.1415926

int main(void)
{ int i, k1, k2, n;
  double delta, r, phid, phir, x, y;

clrscr();
r=-1.0;
while( r<=0 || r>1500.0 )
     { printf("\n\n\t The radius  r [mm]      = ");
       if( scanf("%le", &r)==0 ) exit(1);
     }
n=0;
while( n<1 || n>2500 )
     { printf("\t The number of points  n = ");
       if( scanf("%d", &n)==0 ) exit(1);
     }
delta=360.0/(n-1);
printf("\n\t     Nr. of point  Angle phi     x [mm]"
       "      y [mm]\n");
for( i=1; i<=n; i++ )
   { phid=(i-1)*delta; phir=phid*PI/180;
     if( phid>=0 && phid<=90 || phid>=180 && phid<=270 )
       { x=5*r/4*cos(phir)-r/4*cos(5*phir);
	 y=5*r/4*sin(phir)-r/4*sin(5*phir);
       }
     else
       { x=3*r/4*cos(phir)+r/4*cos(3*phir);
	 y=3*r/4*sin(phir)-r/4*sin(3*phir);
       }
     printf("\n\t\t %3d        %7.3f   %9.3f   %9.3f",i,phid,x,y);
     if(i%20==0)
       { getch(); clrscr();
	    printf("\n\t     Nr. of point  Angle "
		      "phi     x [mm]      y [mm]\n");
       }
   }

getch();

return 0;
}
