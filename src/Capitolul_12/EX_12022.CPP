// ex_12022.cpp, pag. 264-265
// Varianta II  (se utilizeaza o structura pentru numere complexe)

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

struct complex { double x ; double y ; };

void   ADD_com (complex *, complex *, complex *);
void   DIFF_com(complex *, complex *, complex *);
void   MULT_com(complex *, complex *, complex *);
void   DIV_com (complex *, complex *, complex *, int *);
double ABS_com (complex *);
double ARG_com (complex *);

int main()
{ int cod;
  struct complex *p, z1, z2, z3, z4, z5, z6, z7, z8, z9 ;

  clrscr();
  z1.x=1.; z1.y= 3.; z2.x= -2.; z2.y= 5.;  z3.x=1.; z3.y=7.;
  z4.x=2.; z4.y=-3.; z5.x= 20.; z5.y=-6.;
  p=&z9;
  MULT_com(&z1, &z2, &z6);
  DIV_com(&z3, &z4, &z7, &cod);
  if(cod!=0) exit;
  ADD_com(&z6, &z7, &z8);
  DIFF_com(&z8, &z5, &z9);
  printf("\n\n The real part         = %14.7le = %14.7le"
		 "\n The imaginary part    = %14.7le = %14.7le",
		 z9.x, p->x, z9.y, p->y);
  printf("\n The absolute value    = %14.7le", ABS_com(&z9));
  printf("\n The argument [degree] = %8.3f",ARG_com(&z9)*180/PI);

  getch();

  return 0;
}

void ADD_com(complex *z1, complex *z2, complex *z3)
{ z3->x = z1->x + z2->x; z3->y = z1->y + z2->y; }

void DIFF_com(complex *z1, complex *z2, complex *z3)
{ z3->x = z1->x - z2->x; z3->y = z1->y - z2->y; }

void MULT_com(complex *z1, complex *z2, complex *z3)
{ z3->x= z1->x * z2->x - z1->y * z2->y ;
  z3->y= z1->x * z2->y + z2->x * z1->y ; }

void DIV_com(complex *z1, complex *z2, complex *z3, int *cod)
{ double delta;

  delta = z2->x * z2->x + z2->y * z2->y ;
  if(delta==0) { *cod=-1; return;}
  z3->x=(z1->x * z2->x + z1->y * z2->y)/delta;
  z3->y=(z2->x * z1->y - z1->x * z2->y)/delta;
  *cod=0;
}

double ABS_com(complex *z)
{ return sqrt( z->x * z->x + z->y * z->y ); }

double ARG_com(complex *z)
{ double angle;

  angle = atan2( z->y , z->x );
  if(angle < 0) angle+=2*PI;

  return angle;
}
