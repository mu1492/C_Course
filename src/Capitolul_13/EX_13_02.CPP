// ex_13_02.cpp, pag. 276-277

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ int nC;
  char A[50]={"God said, \"Let there be light\",\n"},  B[50], C[50];
                      // A contine 32 caractere + '\0'
  FILE *pf;

  clrscr();
  pf=fopen("file_str", "a");
  if(pf==NULL)
    { printf("\n The file file_str cannot be opened\n");exit(1);}
  fputs(A, pf);
  strcpy(B, "     and there was light.\n");
				// B contine 26 caractere + '\0'
  fputs(B, pf);
  printf("\n Keyboard the string of characters : ");
  gets(C);
  nC=strlen(C);       // C contine nC caractere + '\0'
  fputs(C, pf);
  fclose(pf);
//
  fopen("file_str", "r");
  fgets(A, 33, pf);
		// Se citesc 33 (32+1) caractere din fisier
  printf("\n\n\n\t%-50s", A);
  fgets(B, 27, pf);
// Se citesc 27 (26+1) caractere din fisier
  printf("\n\t%-50s", B);
  fgets(C, nC+1, pf);
// Se citesc nC+1 caractere din fisier
  printf("\n\t%-50s", C);
  fclose(pf);
  remove("file_str");

  getch();

  return 0;
}
