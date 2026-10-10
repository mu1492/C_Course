// ex_10_03.cpp, pag. 199-200

#include <conio.h>
#include <math.h>
#include <stdio.h>

double func( double x );

int main(void)
{ int i, n;
  double a=0, b=1, G=0.915965594, h, sc, sm, D, T, S;

  clrscr();
  printf("\n\t\t    G = %11.9f\n\n\t  n    Met. dr.     Met. tr."
	 "   Met. Simpson\n", G);
  for( n=5; n<=50; n+=5 )
     { h=(b-a)/n;
       for( sm=0,sc=0,i=1; i<=n; i++ )
	     { sm+=func( a-0.5*h+i*h ); sc+=func( a+i*h ); }
       D=h*sm;
       T=0.5*h*(func( a )+2*sc-func( b ));
       S=h/6*(func( a )+4*sm+2*sc-func( b ));
       printf("\n\t %3d  %11.9f  %11.9f  %11.9f",
	      n, D, T, S);
     }

  getch();

  return 0;
}

double func( double x )
{ if( x != 0.0 ) return atan(x)/x;
  else return 1.0;
}
