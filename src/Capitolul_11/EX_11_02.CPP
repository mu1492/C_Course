// ex_11_02.cpp, pag. 237-238

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int e, i, n;
  double a, b, coef[25], h, m, v, x;

  clrscr();
  printf("\n\n\t The degree of the polynom = "); scanf("%d", &n);
  printf("\n\t The polynomial coefficients :\n\n");
  for(i=0; i<=n; i++)
     { printf(" coef[%2d] = ", i); scanf("%le", &coef[i]); }
  printf("\n\n a = "); scanf("%le", &a);
  printf(" b = "); scanf("%le", &b);
  printf(" h = "); scanf("%le", &h);
  printf("\n\n\t x       poly(x, n, coef)\n");
  for(i=0, x=a; x<=b; x+=h)
     { v=poly(x, n, coef);  m=frexp(v, &e);
       printf("\n   %10.3f   %15.6le  =  %le * 2 power %d",
		 x, v, m, e);
       if(i%15==0) getch();
       i++;
     }

  getch();

  return 0;
}
