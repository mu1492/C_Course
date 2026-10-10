// ex_08151.cpp, pag. 140 (varianta I)

#include <conio.h>
#include <stdio.h>

int main(void)
{ char c;

  clrscr();
  printf("\n\tThe capital letters :\n\n");
  for(c='A'; c<='Z'; c++) printf(" %c", c);
  printf("\n\n\n\tThe lower letters :\n\n");
  for(c='a'; c<='z'; c++) printf(" %c", c);

  getch();

  return 0;
}
