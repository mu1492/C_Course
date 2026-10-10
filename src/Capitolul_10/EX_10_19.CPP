// ex_10_19.cpp, pag. 230

#include <conio.h>
#include <stdio.h>

double comb_rec(int n, int k);

int main(void)
{ int k, n;

  clrscr();
  n=0;
  while(n<1 || n>150)
       { printf("\n\n\t n = "); scanf("%d", &n); }
  k=n+1;
  while(k<1 || k>n)
	       { printf("\t k = "); scanf("%d", &k); }
	  printf("\n\n The recurrence formula :\n\t"
	      " C(n,k) = (n-k+1)/k*C(n,k-1)");
	  printf("\n\n n = %4d  k = %4d  C(n,k) = %24.16le",
		   n, k, comb_rec(n,k));
  getch();

  return 0;
}

double comb_rec(int n, int k)
{ double t=1.0;

  if(k==0) t=1.0;
  else     t=(n-k+1)*comb_rec(n,k-1)/k;

  return t;
}
