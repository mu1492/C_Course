// ex_10_22.cpp, pag. 233

#include <conio.h>
#include <stdio.h>

long int fibo_rec(int k);

int main(void)
{ int i, n;
  long int F[30];

  clrscr();
  printf("\n\n\t The Fibonacci's numbers computing"
	  "\n\n\t\t n [2 , 3 , ... 29 , 30] = "); scanf("%d", &n);
  printf("\n\t\t F[%2d] = %8ld", 0, 0l);
  printf("\n\t\t F[%2d] = %8ld", 1, 1l);
  for(i=2; i<=n; i++)
     { printf("\n\t\t F[%2d] = %8ld", i, fibo_rec(i));
       if(i%15==0) getch();
     }

  getch();

  return 0;
}

long int fibo_rec(int k)
{ switch(k)
{ case 0  : return 0;
  case 1  : return 1;
  default : return fibo_rec(k-2)+fibo_rec(k-1);
}
}
