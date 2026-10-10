// ex_10_13.cpp, pag. 222-224

#include <conio.h>
#include <math.h>
#include <stdio.h>

double bisect( double a, double b, int n, double (*func)(double) );

double func02( double x );
double func03( double x );
double func04( double x );
double func05( double x );
double func06( double x );
double func07( double x );
double func08( double x );

int main(void)
{ int n;
  double a=1.0, b=2.0, r2, r3, r4, r5, r6, r7, r8;

  printf("\n\n\t\t  n = "); scanf("%d", &n);
  r2=bisect(a, b, n, func02);
       // Se foloseste pointerul functiei ca param. efectiv
  printf("\n\t  2 ** 0.5     = %12.10f", r2);
  r3=bisect( a, b, n, func03 ) ;
  printf("\n\t  2 ** (1/3)   = %12.10f", r3);
  r4=bisect( a, b, n, func04 ) ;
  printf("\n\t  2 ** 0.25    = %12.10f", r4);
  r5=bisect( a, b, n, func05 ) ;
  printf("\n\t  2 ** 0.2     = %12.10f", r5);
  r6=bisect( a, b, n, func06 ) ;
  printf("\n\t  2 ** (1/6)   = %12.10f", r6);
  r7=bisect( a, b, n, func07 ) ;
  printf("\n\t  2 ** (1/7)   = %12.10f", r7);
  r8=bisect( a, b, n, func08 ) ;
  printf("\n\t  2 ** 0.125   = %12.10f", r8);

  getch();

  return 0;
}

double bisect( double a, double b, int n, double (*func)(double) )
      // Ca parametru formal se utilizeaza un pointer
      // la functie, aceasta avand un parametru de tip
      // double si returnand o valoare de tip double.
{ int i; double d, m, s, vm, vs;
  s=a; d=b; vs=(*func)(s);
  for( i=0; i<n; i++ )
     { m=0.5*(s+d); vm=(*func)(m);
       if(vs*vm < 0 ) { d=m; continue; }
       if(vs*vm > 0 ) { s=m; vs=vm; continue; }
       if(vs*vm == 0) { return m; }
     }
  return m;
}

double func02( double x )
{ return  x*x-2; }

double func03( double x )
{ return x*x*x-2; }

double func04( double x )
{ return pow(x, 4)-2; }

double func05( double x )
{ return pow(x, 5)-2; }

double func06( double x )
{ return pow(x, 6)-2; }

double func07( double x )
{ return pow(x, 7)-2; }

double func08( double x )
{ return pow(x, 8)-2; }
