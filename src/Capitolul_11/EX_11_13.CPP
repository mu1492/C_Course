// ex_11_13.cpp, pag. 254-255

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ long int i, k, n=50000;
  double PI, x, y;
  time_t t;

  srand((unsigned)time(&t));
  for(k=0,i=0; i<n; i++)
     { x=(double)i/n;
       y=rand()%1001/1000.0;
       if(sqrt(x*x+y*y)<=1.0) k++;
     }
  PI=4.0*k/n;
  printf("\n\n \343 = %6.4f", PI);

  getch();

  return 0;
}
