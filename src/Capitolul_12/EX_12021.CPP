// ex_12021.cpp, pag. 263-264
// Varianta  I  (nu se utilizeaza structuri)

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

void add_com (double,double,double,double,double *,double *);
void diff_com(double,double,double,double,double *,double *);
void mult_com(double,double,double,double,double *,double *);
void div_com (double,double,double,double,double *,double *,int *);
double abs_com (double,double);
double arg_com (double,double);

int main(void)
{ int cod;
  double x1=1., y1=3., x2=-2., y2=5., x3=1., y3=7., x4=2., y4=-3.,
	 x5=20., y5=-6., x6, y6, x7, y7, x8, y8, x9, y9;

  clrscr();
  mult_com(x1, y1, x2, y2, &x6, &y6);
  div_com(x3, y3, x4, y4, &x7, &y7, &cod);
  if(cod != 0) exit;
  add_com(x6, y6, x7, y7, &x8, &y8);
  diff_com(x8, y8, x5, y5, &x9, &y9);
  printf("\n\n The real part         = %14.7le"
		 "\n The imaginary part    = %14.7le", x9, y9);
  printf("\n The absolute value    = %14.7le", abs_com(x9, y9));
  printf("\n The argument (degree) = %8.3f",
	 arg_com(x9, y9)*180/PI);
  getch(); return 0;
}

void add_com(double x1, double y1,
	     double x2, double y2,
	     double *x, double *y
	    )
{ *x=x1+x2; *y=y1+y2; }

void diff_com(double x1, double y1,
	      double x2, double y2,
	      double *x, double *y
	     )
{ *x=x1-x2; *y=y1-y2; }

void mult_com(double x1, double y1,
	      double x2, double y2,
	      double *x, double *y
	     )
{ *x=x1*x2-y2*y1; *y=x1*y2+x2*y1; }

void div_com(double x1, double y1,
	     double x2, double y2,
	     double *x, double *y,
	     int *cod
	    )
{ double delta;

  delta=x2*x2+y2*y2;
  if(delta==0) { *cod=-1; return;}
  *x=(x1*x2+y1*y2)/delta; *y=(x2*y1-x1*y2)/delta;
  *cod=0;
}

double abs_com(double x, double y)
{ return sqrt(x*x+y*y); }

double arg_com(double x, double y)
{ double v;

  v=atan2(y,x);
  if(v<0) v+=2*PI;

  return v;
}
