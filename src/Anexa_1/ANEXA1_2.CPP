// anexa1_2.cpp, pag. 397

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//  Functia  display_char(..)  este scrisa in ASM.
//  Tipareste un caracter ASCII si muta pozitia
//  cursorului cu o unitate la dreapta.

void display_char(unsigned char i)
{
    asm{
	mov al,i   // codul caracterului
	mov cx,1   // numarul de caractere de scris (unul dupa
			   // altul)
	mov bh,0   // fundal (0 pentru negru);pentru pagina video
			   // curenta
	mov bl,10  // culoare caracter (7=gri deschis)
	mov ah,9   // Functia 9 a intreruperii 10h (servicii
			   // video)
	int 0x10   // scrierea unui caracter pe ecran
	mov ah,3   // Functia 3, citeste pozitia cursorului
	int 0x10   // acum in DH este linia, in DL este coloana
	inc dl     // coloana urmatoare
	mov ah,2   // Functia 2, muta cursorul la noua pozitie
	int 0x10
       }
}

int main(void)
{ char str[10];

  clrscr();
  printf("\n\t Char  Binary   Octal   Dec.  Hexa.\n");
  for(unsigned char c=0; c<128; c++)
     { itoa(c, str, 2); printf("\n\t ");
       display_char(c);
       printf("   %8s    %3o    %3d   %3X", str, c, c, c);
       if(c%20==0) getch();
     }
  getch();

  return 0;
}
