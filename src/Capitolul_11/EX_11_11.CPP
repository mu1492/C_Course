// ex_11_11.cpp, pag. 253

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int i;

  printf("\n Fifteen random numbers from  0  to  345\n");
  for(i=0; i<15; i++) printf("%4d", rand()%346);

  getch();

  return 0;
}
