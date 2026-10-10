// ex_10142.cpp, pag. 225-226

// ===================
// Varianta II
//

#include <conio.h>
#include <stdio.h>

void func(int c);

static int a,b;

int main(void)
{ int c;
  clrscr();
  printf("\n\t a = ");
  scanf("%d", &a);
  printf("\t b = ");
  scanf("%d", &b);
  c=a+b;
  func(c);

  getch(); return 0;
}

void func(int c)
{ printf("\n a = %d  b = %d  c = %d", a,b,c);
}

