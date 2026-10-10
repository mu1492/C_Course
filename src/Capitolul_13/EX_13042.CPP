// ex_13042.cpp, pag. 281 (Programul 2)

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int i, n;
  double x, y, y_min, Y_MAX, a;
  FILE *pf;

  clrscr();
  if((pf=fopen("IXY", "r"))==NULL)
    { printf("\n\n The file  IXY  can not be opened "
	     "for reading\n"); getch(); exit(1); }
  fscanf(pf, "%d", &n);
  printf("\n\n\t\ The number of coordinates = %d\n\n", n);
  for(i=0; i<n; i++)
       { fscanf(pf, "%d %lf %le", &i, &x, &y);
	    if(i==0) a=y_min=Y_MAX=y;
	    if(y_min > y) y_min=y;
	    if(Y_MAX < y) Y_MAX=y;
	    a+=y;
	    printf("\n %4d %10.4lf %14.6le", i, x, y);
	    if(i%20==0) getch();
       }
  fclose(pf);
  a/=n;
  printf("\n\n\n  y min = %le  Y_MAX = %le  Average = %le",
	    y_min, Y_MAX, a);

  getch();

  return 0;
}
