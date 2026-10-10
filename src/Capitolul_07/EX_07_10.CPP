// ex_07_10.cpp, pag. 118

#include <conio.h>
#include <stdio.h>

int main (void)
{ char name[25];
  printf("\n What is your name ?\n");
  scanf("%s", name);                    // Mihai Ursu
  printf("\n Hello, %s !\n", name ) ;   // Hello, Mihai !
  getch(); return 0;
}
