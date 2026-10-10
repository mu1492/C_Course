// ex_04_02.cpp, pag. 64

#include <conio.h>
#include <stdio.h>

void inp_vect(int n, double V[]); // Declaratie de functie
void out_vect(int n, double V[]); // Declaratie de functie

int main(void)                      // Functia  main
{
  int i, n;
  double A[25], B[25], C[25];

  clrscr();
  printf("\n\t\t  n = "); scanf("%d", &n);
  inp_vect(n, A); inp_vect(n, B);
  for(i=0; i<n; i++) C[i]=A[i]+B[i];
  out_vect(n, C);
  getch();

  return 0;
}

void inp_vect(int n, double V[])   // Functia nr. 2
{ int i;

  printf("\n\t Indice  Valoare element");
  for(i=0; i<n; i++)
     { printf("\n\t %2d\t\t", i); scanf("%le", &V[i]); }
}

void out_vect(int n, double V[])   // Functia nr. 3
{ int i;

  printf("\n\t Indice  Valoare element");
  for(i=0; i<n; i++) printf("\n\t %2d      %14.6le", i, V[i]);
}
