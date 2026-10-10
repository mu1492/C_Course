// ex_08_32.cpp, pag. 158

#include <conio.h>
#include <stdio.h>

int main(void)
{ int a,b;

  clrscr();
  printf("\n\t a = "); scanf("%d", &a);
  printf("\t b = ");   scanf("%d", &b);
  if(a%2==0) printf("\n\n  a = %d  is even", a); //even - par
  else       printf("\n\n  a = %d  is odd", a);  //odd  - impar
  if(b&1)    printf("\n\n  b = %d  is  odd", b);
  else       printf("\n\n  b = %d  is even", b);

  getch();

  return 0;
}
