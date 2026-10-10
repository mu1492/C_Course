// ex_08_24.cpp, pag. 150-151

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int t[20][20], i, j, n=12;

  for(i=0; i<n; i++)
     for(j=0; j<n; j++) t[i][j]=0.0;

  t[0][0]=t[1][1]=1;

  for(i=2; i<n; i+=2) t[i][0]=-t[i-2][0];

  for(i=2; i<n; i++)
     for(j=1; j<=i; j++) t[i][j]=2*t[i-1][j-1]-t[i-2][j];

  clrscr();
  printf("\n\t Definition :  T{n}(x) ="
	 " cos [ n * arccos ( x ) ]\n");
  printf("\n\t Recurrence formula for Chebyshev's polynomials :"
	   "\n\t\t T{0}(x) = 1 \t T{1}(x) = x"
	   "\n\t\t T{i}(x) = 2*x*T{i-1}(x) - T{i-2}(x)   i>1\n");
  printf("\n\t Recurrence formula for the coefficients :"
	   "\n\t\t t[i][j]=2*t[i-1][j-1]-t[i-2][j]"
	 "    i >= j > 0 \n");
  printf("\n\t\t     The Chebyshev's polynomial coefficients\n\n");
  printf("Degree");
  for(i=0; i<n; i++) printf("   t%2d", i);
  printf("\n\n");
  for(i=0; i<n; i++)
     { printf(" %2d  ", i);
       for(j=0; j<n; j++) printf(" %5d", t[i][j]);
       printf("\n");
     }

  getch();

  return 0;
}
