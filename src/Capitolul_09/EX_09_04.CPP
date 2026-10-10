// ex_09_04.cpp, pag. 178-180

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, i1, i3, i4, i5;
  char sir1[50], sir2[50], sir3[50], sir4[50], sir5[50],
       *psir2, *psir4, *psir5;
// =============================================
//                       The classic variant
//
clrscr();
puts("\n Write a character string, finished with"
     " <ENTER>\n First variant.\n");
gets(sir1);
i1=0;
while(sir1[i1] != '\0')
     i1++;
printf("\n The character string has %d characters.\n", i1);
getch();
//
//                       The variants with pointers.
// =============================================
psir2=sir2;
puts("\n Write a character string, finished with"
     " <ENTER>\n Second variant.\n");
gets(sir2);
//
/* Se foloseste instructiunea  while  pentru parcurgerea sirului.
   Variabila pointer  psir2  este initializata cu valoarea
   pointerului sirului sir2. La început este  evident ca  *psir2
   are ca valoare primul caracter din  sir, deci pe  sir2[0]. Pana
   cand nu se ajunge la caracterul '\0' variabila pointer  psir2
   isi tot mareste valoarea cu cate o unitate. In final se afiseaza
   valoarea diferentei adreselor ultimului element din sir si a
   primului, care in cazul caracterelor este chiar numarul acestora.
*/
while(*psir2 != '\0')
     psir2++;
printf("\n The character string has %d characters.\n",
	psir2 - sir2);
getch();
// =============================================
puts("\n Write a character string, finished with"
     " <ENTER>\n Third variant.\n");
gets(sir3);
//
/* Se foloseste instructiunea  while  pentru parcurgerea sirului.
   Variabila de tip intreg  i3  va contine numarul de caractere ale
   sirului, gasite pana la etapa respectiva, incrementandu-se la
   fiecare caracter nou gasit. In loc sa se compare '\0' cu sir3[i3]
   se compara acest caracter cu *(sir3+i3). In final se afiseaza i3,
   deci numarul de caractere gasite pana la '\0'.                */
//
i3=0;
while(*(sir3+i3) != '\0')
      i3++;
printf("\n The character string has %d characters.\n", i3);
getch();
//  ============================================
puts("\n Write a character string, finished with <ENTER>"
       "\n Fourth variant.\n");
scanf("%s", sir4);
//
/* Se foloseste instructiunea  for  pentru parcurgerea sirului.
   Variabilei pointer psir4  i se atribuie pointerul constant sir4.
   In cazul intalnirii unui caracter diferit de '\0' se face
   incrementarea variabilei i4  de tip int care contine numarul de
   caractere al sirului. Pentru a trece la elementul urmator al
   sirului se face incrementarea variabilei pointer  psir4 , deci se
   trece la urmatorul element prin marirea adresei.          */
//
psir4=sir4;
for(i4=0; *psir4 != '\0'; psir4++)
    i4++;
printf("\n The character string has %d characters.\n", i4);
getch();
// =============================================
puts("\n Write a character string, finished with"
     " <ENTER>\n Fifth variant.\n");
scanf("%s", sir5);
//
/* Pentru parcurgerea sirului se foloseste instructiunea  for.
   La intalnirea caracterului '\0'  se iese fortat din ciclu prin
   intermediul instructiunii break. Variabila  i  de tip int are ca
   valoare numarul de caractere al sirului. Trecerea de la un
   element la altul se face prin incrementarea variabilei pointer
   psir5.                                                      */
//
psir5=sir5;
for(i=0, i5=0; i5<50; i5++)
   { if(*psir5 == '\0') { break; }
     psir5++; i++;
   }
printf("\n The character string has %d characters.\n", i);
// ============================================

getch();

return 0;
}
