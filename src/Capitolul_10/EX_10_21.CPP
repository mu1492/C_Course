// ex_10_21.cpp, pag. 232

#include <conio.h>
#include <stdio.h>

int Euclid_r(int m, int n);

int main()
{ int aux, m, n;

  clrscr();
  printf("\n\n The Euclid's algorithm\n");
  printf("\n\t m = "); scanf("%d", &m);
  printf("\t n = "); scanf("%d", &n);
  if(m<n) { aux=m; m=n; n=aux; }
  printf("\n  The greatest divisor of %d and %d = %d",
	    m, n, Euclid_r(m,n));

  getch();

  return 0;
}

int Euclid_r(int m, int n)
{ if(n==0) return m;
	  else return Euclid_r(n, m%n);
}
