// ex_10141.cpp, pag. 225-226

// =======================
//   Varianta I
//
#include <conio.h>
#include <stdio.h>

void func(int a,int b,int c);

int main(void)
{ int a,b,c;
  clrscr();
  printf("\n\t a = ");
  scanf("%d", &a);
  printf("\t b = ");
  scanf("%d", &b);
  c=a+b;
  func(a,b,c);

  getch(); return 0;
}

void func(int a,int b,int c)
{ printf("\n a = %d  b = %d  c = %d", a,b,c);
}

