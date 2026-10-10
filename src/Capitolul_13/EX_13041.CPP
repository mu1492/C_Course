// ex_13041.cpp, pag. 280 (Programul 1)

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double f(double);

int main(void)
{ int i, n;
  double a, b, h, x, y;
  FILE *pf;

  clrscr();
  printf("\n\n\t a = "); scanf("%le", &a);
  printf("\t b = "); scanf("%le", &b);
  printf("\t h = "); scanf("%le", &h);
  pf=fopen("IXY", "w");
  if(pf==NULL) { printf("\n The file IXY can not be open !");
			 exit(1); }
  n=(b-a)/h+1; fprintf(pf, "%d", n);
  for(i=0, x=a; x<=b; i++, x+=h)
     { y=f(x);
       printf("\n %4d  %10.4f  %14.6e", i, x, y);
       fprintf(pf, "%4d %10.4lf %14.6le", i, x, y);
       if(i%20==0) getch();
     }
  fclose(pf);
  printf("\n\n\n The file  IXY  was created and contains "
	    "the coordinates of %d points.\n\n", i);

  getch();

  return 0;
}

double f(double x)
{ return sin(x)*sin(5*x+0.125)+1.55; }
