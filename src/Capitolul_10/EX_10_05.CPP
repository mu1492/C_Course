// ex_10_05.cpp, pag. 204

#include <conio.h>
#include <stdio.h>

#include "displ_ab.cpp"  //Se include fisierul continand functia

void exchange(double *x,double *y);      //Declaratia de functie

int main()
{ double a,b;

printf("\n\t The initial values:\n\n\t\t a = "); scanf("%le", &a);
printf("\t\t b = "); scanf("%le", &b);
displ_ab( a, b ) ;  exchange( &a, &b ) ;
printf("\n\n\t The final (changed) values:\n");
displ_ab( a, b ) ;

getch();

return 0;
}

void exchange(double *x, double *y)  // x si y  -  pointeri
{ double v;
  v=*x;     // *x si *y - valorile variabilelor de tip double
  *x=*y;    //            spre care pointeaza  x  si  y.
  *y=v;
}

