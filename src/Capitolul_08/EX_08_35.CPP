// ex_08_35.cpp, pag. 160-161
//  sin(sin(..sin(sin(x))..)) = y

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int i, n;
  double x, y;

  clrscr();
  printf("\n\t sin(sin(...sin(sin(x))..)) = y");
  printf("\n\n\t x = "); scanf("%le", &x);
  printf("\t n [number of function] ( n<9 )  = ");
  scanf("%d", &n); printf("\n"); y=sin(x);
  switch(n)
	{       case 8:  y=sin(y);
		case 7:  y=sin(y);
		case 6:  y=sin(y);
		case 5:  y=sin(y);
		case 4:  y=sin(y);
		case 3:  y=sin(y);
		case 2:  y=sin(y);
	}

  for(i=1; i<=n; i++) printf("sin(");
  printf("%6.3f", x);
  for(i=1; i<=n; i++) printf(")");
  printf(" = %le", y);

  getch();

  return 0;
}
