// ex_14_04.cpp, pag. 298-299

#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>

int main(void)
{ int i, j, n;
  char c, S[250], SC[81];

  textbackground(7); textcolor(BLUE); clrscr();
  printf("\n\t Please keyboard the string.\n");
  gets(SC);
	// Se tasteaza un sir de caractere notat cu SC, pe o linie.


  printf("\n The direction of displacement :");
  printf("\n\t\t From left to RIGHT  ---->   r, R");
  printf("\n\t\t From right to LEFT  <----   l, L\n\n");
  c='a';
  while(c!='R'&&c!='r'&&c!='L'&&c!='l')
     { printf("\n\n Your choice is - "); c=getche();}
	// Se apasa R sau r  respectiv L sau l.
	// Daca se apasa o alta tasta se reia operatia.

  getch(); clrscr();
  n=strlen(SC);
	// Se determina numarul de caractere al sirului SC.

  window( 1,10,80,15);
  textbackground(7); textcolor(RED);
	// Se defineste o fereastra, la care culoarea de fond este
// LIGHTGRAY (gri deschis) iar cea cu care se vor afisa
// caracterele RED (rosie).

  for(i=0; i<80; i++) {S[i]=S[n+i+80]=' ';}
  for(i=0; i<n; i++) S[i+80]=SC[i];
	// S-a format un sir S la care primele 80 de caractere si
// ultimele 80 de caractere sunt blank-uri iar intre ele se
// gasesc caracterele din compunerea sirului SC.

  if(c=='L'||c=='l')
     for(i=0; i<n+81; i++)
	{ clrscr();
	  for(j=0; j<80; j++) putch(S[i+j]);
	  delay(200);
	}
  else
     for(i=n+80; i>=0; i--)
	{ clrscr();
	  for(j=0; j<80; j++) putch(S[i+j]);
	  delay(200);
	}
	// In functie de modul cum s-a precizat sensul deplasarii
// se face afisarea unui numar de cate 80 de caractere din
// sirul S, incepand cu afisarea caracterelor 1-80, 2-81,
// 3-83 ...  daca sirul se va deplasa de la dreapta la
// stanga sau incepand cu ultimele 80 de caracterele apoi
// cele anterioare daca deplasarea sirului va fi de la stanga
// la dreapta.
// Inainte de fiecare afisare a cate unui numar de 80 de
// caractere fereastra se sterge, se afiseaza caracterele
// iar acestea raman pe ecran o durata de 200 milisecunde.

  getch();

  return 0;
}
