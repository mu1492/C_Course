// ex_07_08.cpp, pag. 116

#include <conio.h>
#include <stdio.h>

int main(void)
{ int a=1376, n;
  float x=0.00987;

  clrscr();
  n=printf("\n a = %6d  x = %10.6f", a, x);
  printf("\nNr. car. = %d", n);
  getch();

  return 0;
}
