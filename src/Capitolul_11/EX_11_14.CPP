// ex_11_14.cpp, pag. 255-256

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ int i, k, n;
  double aria, x, y;
  time_t t;

  srand((unsigned)time(&t));
  for(n=100; n<=1000; n+=100)
     { for(k=0,i=1; i<=n; i++)
	  { x=M_PI*i/n; y=rand()%1001/1000.0;
	    if(y<=sin(x)) k++;}
       aria=M_PI*k/n;
       printf("\n  n = %4d  Aria = %6.4lf", n, aria);
     }

  getch();

  return 0;
}
