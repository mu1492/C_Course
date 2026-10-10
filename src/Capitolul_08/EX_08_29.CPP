// ex_08_29.cpp, pag. 156-157

#include <conio.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415926

int main(void)
{int i, n;
 double a, b, c, delta, e, omega, phid, phir, r, R, s, tur, v, x;

 clrscr();
 r=-1; b=-1; e=-1000; tur=-1; n=-1;

while( r<=0 || r>499 )
     { printf("\n\n 0 < r < 500 [mm] = "); scanf("%le", &r); }
while( b<3*r || b>5*r )
     { printf("\t %5.1f [mm] < b < %5.1f [mm] = ", 3*r, 5*r);
       scanf("%le", &b); }
while( fabs(e)>0.25*r )
     { printf("\t\t 0.0 <= e < %5.1f [mm] = ", 0.25*r);
       scanf("%le", &e); }
while( tur<0 || tur>20000 )
     { printf("\t\t\t 0 < n < 20000 [RPM] = ");scanf("%le",&tur );}
while( n<10 || n>700 )
     { printf("\t\t\t\t The number of points  10 "
		 "<= n <= 700; n = "); scanf("%d",&n); }
r/=1000; b/=1000; e/=1000; omega=PI*tur/30.0; delta=360./(n-1);
printf("\n\t     Nr. of point  Angle phi     x [m]"
       "      v [m/s]     a[m/s/s]\n");
for( i=0 ; i<n ; i++ )
    { phid=i*delta; phir=phid*PI/180;
      s=sin(phir); c=cos(phir); R=sqrt(b*b-(r*s+e)*(r*s+e));
      x=r*c+R; v=-r*omega*(s+c*(r*s+e)/R);
      a=-r*omega*omega*(c+(R*R*(r*c*c-(r*s+e)*s)+
	   r*c*c*(r*s+e)*(r*s+e))/R/R/R);
      printf("\n\t\t %3d        %7.3f   %9.6f   "
		"%9.4f  %12.5e", i, phid, x, v, a);
      if((i+1)%20==0)
	{ getch(); clrscr();
	     printf("\n\t     Nr. of point  Angle phi     "
		       "x [m]       v [m/s]     a [m/s/s]\n");
	}
    }

 getch();

 return 0;
}
