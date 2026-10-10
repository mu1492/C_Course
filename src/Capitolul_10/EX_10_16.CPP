// ex_10_16.cpp, pag. 227

// =================================
//   Fisierul sursa - fisier_1.cpp
// =================================

#include <conio.h>
#include <stdio.h>

#include "fisier_2.cpp"

int a, b;

int main(void)
{ int c; clrscr();
  printf("\n\t a = "); scanf("%d", &a);
  printf("\t b = ");   scanf("%d", &b);
  c=a+b;
  func(c); getch(); return 0;
}
