// ex_09_09.cpp, pag. 187-188

#include <conio.h>
#include <stdio.h>

int main(void)
{ char STR[100], *pS[10], *p;
  int i, j, n_char, T[10];

  clrscr();
  printf("\n\t The input of the string of characters."
	 "\n\t Between two successive names will be the"
	 " character  _  \n\n");
  scanf("%s", STR);
	 // Se determina numarul de caractere din sir.
  n_char=0;
  while(STR[n_char] != '\0') n_char++;
  printf("\n\n Number of characters = %d", n_char);
  getch();
	 // Se determina pozitiile in sir a primelor
	 // caractere din nume, retinute în sirul  T[].
  T[0]=0;
  for(i=1, j=0; i<n_char; i++)
      if(STR[i]=='_') { j++; T[j]=i+1; }
	 // Se determina valorile pointerilor corespunzatori
	 // fiecarui nume din sir.
  for(i=0; i<j; i++)
      { printf("\n T[%d] = %d;", i, T[i]); getch();
	pS[i]=STR+T[i];
      }
	 // Se afiseaza numele din sir, fiecare pe cate o
	 // linie, spre care pointeaza pointerul variabil  p.
  for(i=0, p=STR; *p; p++)
      { if(p==pS[i]) { printf("\n"); i++; }
	 printf("%c", *p);
      }

  getch();

  return 0;
}
