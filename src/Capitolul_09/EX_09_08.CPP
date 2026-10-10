// ex_09_08.cpp, pag. 186-187

#include <conio.h>
#include <stdio.h>

int main(void)
{ char *days[] = {"Monday   ", "Tuesday  ", "Wednesday",
                  "Thursday ", "Friday   ", "Saturday ",
                  "Sunday   " };
               /* S-a declarat un tablou de pointeri  days[ ]
                  elementele caruia au fost initializate cu
                  adresele celor sapte siruri de caractere. */
  int i;

  clrscr();
  printf("\n\n\t\t  *days = %p;\n", *days);
	       // S-a afisat adresa tabloului de pointeri days

  for(i=0; i<7; i++)
  printf("\n\t  days[%d] = %s; days[%d] = %p",
	    i, days[i], i, days[i]);
  getch();
	       /* S-a afisat continutul fiecaruia din cele
		  sapte siruri de caractere si adresele
		  acestor siruri. */

  printf("\n");
  for(i=0; i<10; i++)
     printf("\n\t  i = %d;  days[1]++ = %p; "
	 "*(days[2]++) = %c",i, days[1]++, *(days[2]++));
  getch();

	       /* Pentru elementele sirului nr. 2 s-au
		  afisat adresele elementelor succesive iar
		  pentru sirul nr. 3 s-au afisat        pe rand
		  caracterele componente. Se observa ca
		  ultimul element este caracterul nul */

  printf("\n\n");
  for(i=0; i<6; i++)
       printf(" (*days[0]++) = %c          ", (*days[0])++ );
	       /* S-au afisat caracterele ce se obtin in urma
		  incrementarii primului caracter al primului
		  sir. */

  getch();

  return 0;
}
