// ex_08_10.cpp, pag. 134-135

#include <conio.h>
#include <stdio.h>

int main(void)
{ int z;

  printf("\n\t z  [ 1, ..., 7] = "); scanf("%d", &z);
  switch( z )
  { case 1 : puts("Monday");                    // Luni
    case 2 : puts(" Tuesday");                  // Marti
    case 3 : puts("  Wednesday");               // Miercuri
    case 4 : puts("   Thursday");               // Joi
    case 5 : puts("    Friday");                // Vineri
    case 6 : puts("     Saturday");             // Sambata
    case 7 : puts("      Sunday"); break ;      // Duminica
    default : puts(" E r r o r !");
  }

  getch();

  return 0;
}
