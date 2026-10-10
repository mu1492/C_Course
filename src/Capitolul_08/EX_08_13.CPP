// ex_08_13.cpp, pag. 139

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ double a, b, h, x;

  printf("\n\n\t a = "); scanf("%le", &a);
  printf("\t b = "); scanf("%le", &b);
  printf("\t h = "); scanf("%le", &h);
  for( x=a ; x<=b ; x+=h )
      printf("\t\t x = %le   y = %le\n",
	     x, 2.1*pow(x,3)+52.34*x*x-12.5);

  getch();

  return 0;
}
