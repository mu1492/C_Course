// ex_11_09.cpp, pag. 250-251

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(void)
{ long int i;
  time_t DT, T, t, t1, t2;

      //  Se determina si se afiseaza timpul curent (in secunde)
  t=time(NULL);
  printf("\n\n The number of seconds since January, 1 1970 = %ld", t);

      //  Se determina timpul curent si se inregistreaza la adresa
      //  &T iar apoi data, ora, minutul si secunda se afiseaza sub
      //  forma unui sir de caractere.
  time(&T); printf("\n Data & Hour ~ %s", ctime(&T) );

      //  Se determina de doua ori timpul curent, inainte de
      //  efectuarea calculelor si dupa, se determina diferenta si se
      //  afiseaza.
  t1=time(NULL);
  for(i=0; i<2500000; i++) exp(1.);
  t2=time(NULL);
  DT=difftime(t2,t1); printf(" Diff. time = %ld", DT);

  getch();

  return 0;
}
