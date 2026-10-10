// ex_10_18.cpp, pag. 229

#include <conio.h>
#include <stdio.h>

double fact_rec(int i);

int main(void)
{ int n;

  clrscr();
  n=-1;
  while(n<0 || n>170)
	      { printf("\n\t n = "); scanf("%d", &n); }
  printf("\n\n\t\t %3d! = %24.16le", n, fact_rec(n));

  getch();

  return 0;
}

double fact_rec(int k)
{ double t;
  if(k==0 || k==1) t=1.0;
  else             t=fact_rec(k-1)*k;
  return t;
}
