// ex_07_11.cpp, pag. 118

#include <conio.h>
#include <stdio.h>

int main(void)
{ int a, b, c, n;
  char sir[25];

  clrscr();
  printf("\n Keyboard three integer numbers and a string !\n");
  n = scanf("%d, %d, %d, %s", &a, &b, &c, sir); //1,2,3,qwerty
  printf("\n n = %d", n);                       // n = 4
  getch();

  return 0;
}
