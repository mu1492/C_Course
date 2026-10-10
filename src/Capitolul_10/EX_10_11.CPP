// ex_10_11.cpp, pag. 220

#include <conio.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415926

int main()
{ double (*ps)(double), (*pc)(double), (*pt)(double);

  ps=sin; pc=cos; pt=tan;
  printf("\n\t Pointer la sin = %p", ps);
  printf("\n\t Pointer la cos = %p", pc);
  printf("\n\t Pointer la tan = %p", pt);
  printf("\n\t\t\t sin(PI/6) = %le", (*ps)(PI/6));
  printf("\n\t\t\t cos(PI/6) = %le", (*pc)(PI/6));
  printf("\n\t\t\t tan(PI/4) = %le", (*pt)(PI/4));

  getch();

  return 0;
}
