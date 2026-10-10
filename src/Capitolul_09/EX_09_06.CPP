// ex_09_06.cpp, pag. 181

#include <conio.h>
#include <stdio.h>

int main(void)
{ char A[5], B[5];
  int i;

  A[0]='N';     // *(A+0) = 'N';
  A[1]='I';     // *(A+1) = 'I';
  A[2]='C';     // *(A+2) = 'C';
  A[3]='K';     // *(A+3) = 'K';
  0[B]='M';     // *(0+B) = 'M';
  1[B]='I';     // *(1+B) = 'I';
  2[B]='K';     // *(2+B) = 'K';
  3[B]='E';     // *(3+B) = 'E';
  clrscr();
  printf("\n\n\t %10.4s", A); printf("\n\t %10.4s", B);

  getch();

  return 0;
}
