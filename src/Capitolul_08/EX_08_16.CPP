// ex_08_16.cpp, pag. 140-141

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, n;
  double A[50], sum=0, prod=1;

  printf("\n\n\t The number of elements   n = "); scanf("%d", &n);

  // First cycle                (Primul ciclu)
  for( i=0 ; i<n ; i++ )
    { printf("\n\t A[%2d] = ",i); scanf("%le",&A[i]); }

  // Second cycle               (Al doilea ciclu)
  for( i=0 ; i<n ; i++ )
    { sum+=A[i]; prod*=A[i]; }

  printf("\n\n\t\t  Sum = %le  Prod = %le", sum, prod);

  getch();

  return 0;
}
