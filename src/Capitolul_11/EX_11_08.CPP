// ex_11_08.cpp, pag. 248

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int i, n_cifre, s[10];
  long int n1, n2, n, sum;
  char string[10];

  clrscr();
  printf("\n\t n_init  = "); scanf("%ld", &n1);
  printf("\n\t n_fin   = "); scanf("%ld", &n2);
  printf("\n\t n_cifre = "); scanf("%d", &n_cifre);
  for(n=n1; n<=n2; n++)
     { ltoa ( n, string, 10 );
       for(i=0; i<n_cifre; i++)  s[i]=string[i]-48;
       for(sum=0, i=0; i<n_cifre; i++) sum+=pow(s[i],i+1);
       if(n==sum)
	  { printf("\n n = %ld ", n); getch(); }
     }

  getch();

  return 0;
}
