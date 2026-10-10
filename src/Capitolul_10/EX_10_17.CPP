// ex_10_17.cpp, pag. 228

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int i;
  double a, b, h;
  register double x;

  clrscr();
  printf("\n\t a = "); scanf("%le", &a);
  printf("\t b = ");   scanf("%le", &b);
  printf("\t h = ");   scanf("%le", &h);
  for(x=a, i=0; x<=b; x+=h)
	    { printf("\n %5d   %13.5le   %13.5le",
	      ++i, x, 10.25*sqrt(pow(x,6)+1)+3.5*x+2.35);
	      if(i%20==0) getch();
	    }

  getch();

  return 0;
}
