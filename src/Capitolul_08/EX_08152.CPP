// ex_08152.cpp, pag. 140 (varianta II)

#include <conio.h>
#include <stdio.h>

int main(void)
{ int k;

  clrscr();
  printf("\n\n\n\tThe capital letters :\n\n");
  for(k=65; k<=90; k++) printf(" %c", k);
  printf("\n\n\n\tThe lower letters :\n\n");
  for(k=97; k<=122; k++) printf(" %c", k);

  getch();

  return 0;
}
