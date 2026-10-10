// ex_10_12.cpp, pag. 221-222

#include <conio.h>
#include <math.h>
#include <stdio.h>

double calcul(double x, double (*ps)(double),double (*pc)(double));
                       // Declaratia functiei

int main(void)
{ int i;
  double PI, x, (*ps)(double), (*pc)(double) ;
                       // Declaratiile pointerilor la functii
  PI=4*atan(1.0);
  ps=sin; pc=cos;      // Valorile adreselor functiilor se
                       // atribuie pointerilor la functii
  printf("\n\n   i     x       |sin(x)| + |cos(x)|\n");
  for( i=0,x=0; x<=PI; x+=PI/10 )
     { i++;
       printf("\n %3d  %6.2f  %24.16le",
              i, x*180/PI, calcul( x, ps, pc ) );
                         // La apelul functiei ca parametri
                         // efectivi se folosesc pointerii la functii
     }

  getch();

  return 0;
}

double calcul( double x, double (*ps)(double),
               double (*pc)(double) )
        // Ca parametri formali se utilizeaza pointeri
        // la functii, precizandu-se tipul valorii returnate
        // de functie si tipul argumentelor
{ double v;
  v=fabs((*ps)(x)) + fabs((*pc)(x));
     // In calcule functiile sunt inlocuite cu pointerii la functii
  return v;
}
