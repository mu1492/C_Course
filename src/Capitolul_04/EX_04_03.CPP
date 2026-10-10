// ex_04_03.cpp, pag. 64

#include <conio.h>
#include <stdio.h>

#include "inp_vect.cpp"
#include "out_vect.cpp"

int main(void)
{ int i, n;
  double A[25], B[25], C[25];

  clrscr();
  printf("\n\t\t  n = "); scanf("%d", &n);
  inp_vect(n, A); inp_vect(n, B);
  for(i=0; i<n; i++) C[i]=A[i]+B[i];
  out_vect(n, C);
  getch();

  return 0;
}
