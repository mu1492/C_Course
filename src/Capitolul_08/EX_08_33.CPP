// ex_08_33.cpp, pag. 159

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int i;
  double e, pi, r;

  e=exp(1.0); pi=4*atan(1.0); r=sqrt(2.0); clrscr();
  printf("\n         sqrt(2)              e              \343\n");
  for(i=1; i<=10; i++)
     printf("\n %15.*f %15.*f %15.*f", i,r,i,e,i,pi);

  getch();

  return 0;
}
