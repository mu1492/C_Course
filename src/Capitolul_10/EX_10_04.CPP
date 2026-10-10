// ex_10_04.cpp, pag. 201-202

#include <conio.h>
#include <math.h>
#include <stdio.h>

#include "f_lagr.cpp"  //(int np,double X[],double Y[],double xc)

int main(void)
{ int i, n, np;
  double X[25], xL[250], Y[25], yL[250];
  double a, b, step,  xc, xmax, xmin, yc,  ymax, ymin;

  clrscr();
  printf("\n\t\t The Lagrange interpolation polynom\n");
  printf("\n\t The number of points  np = ");scanf("%d", &np);
  printf("\n\n\t The coordinates of %d points:  "
    "X[0] < X[1] < ... < X[%d]\n", np, np-1);
  printf("\n\t X[0] = "); scanf("%le", &X[0]);
  printf("\t Y[0] = "); scanf("%le", &Y[0]);
  for( i=1; i<np; i++ )
   { X[i]=X[i-1]-1;
     while( X[i]< X[i-1] )
	 { printf("\n\t X[%d] = ",i); scanf("%le",&X[i]);}
     printf("\t Y[%d] = ", i); scanf("%le", &Y[i]);
      }
  printf("\n\n\t The absciss of the left point of the"
	 " interval  x_init = "); scanf("%le", &a); b=a-1;
  while( b<a )
     { printf("\n\t The absciss of the right point of"
	   " the interval x_fin  = ");scanf("%le", &b); }
  printf("\n\t The number of points in which the"
	 " Lagrange's\n\t     polynomial function"
		   " will be computed n = ");  scanf("%d", &n);
  step=(b-a)/(n-1);
  for( i=0; i<n; i++ )
     { xc=a+i*step;
       xL[i]=xc;
       yc=f_lagr(np, X, Y, xc);
       yL[i]=yc;
       printf("\n\t\t  %4d   %15.6le   %15.6le", i, xc, yc);
       if(i%22==0) getch();
     }
  getch();

  xmin = xL[0]<X[0] ? xL[0] : X[0];
  xmax = xL[n-1] > X[np-1] ? xL[n-1] : X[np-1];
  ymin = ymax=yL[0];
  for( i=0; i<n; i++ )
     { if(ymin>yL[i]) ymin=yL[i];
       if(ymax<yL[i]) ymax=yL[i]; }
  for( i=0; i<np; i++ )
     { if(ymin>Y[i]) ymin=Y[i];
       if(ymax<Y[i]) ymax=Y[i]; }
  printf("\n\n\t x_min = %le;  x_max = %le;", xmin, xmax);
  getch();
  printf("\n\t y_min = %le;  y_max = %le;", ymin, ymax);

  getch();

  return 0;
}
