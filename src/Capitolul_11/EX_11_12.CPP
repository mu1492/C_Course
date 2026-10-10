// ex_11_12.cpp, pag. 254

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ int i;
  time_t t;

  srand((unsigned)time(&t));
  printf("\n\n Six random numbers from  1  to  49\n");
  for(i=0; i<6; i++) printf("%4d", rand()%49+1);

  getch();

  return 0;
}
