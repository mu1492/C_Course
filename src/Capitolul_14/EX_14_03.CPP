// ex_14_03.cpp, pag. 297-298

#include <conio.h>
#include <stdio.h>

int main()
{ int line=20, column=40, c, c1, c2;

  c1=254;               // Caracter ASCII - patrat plin
  c2=32;                // Caracter ASCII - blank
  textmode(64);         // Ecranul are 50 de linii
  textbackground(7);    // Culoarea de fond - LIGHTGRAY
  textcolor(4);         // Culoarea caracterelor - RED
  clrscr();
  printf("\n Press repeatedly the arrow keys."
            "\n Press ESC and ENTER to finish !\n");
  gotoxy(column, line); putch(c1);
        // Caracterul  c1  este plasat pe coloana
        // column si pe linia line

        //  --> 77 = 4D (H)    <-- 75 = 4B (H)
	//  ^
        //  |   72 = 48 (H)    |   80 = 50 (H)
        //                     V
        // ESC  27 = 1B (H)

  do
    { c=getch();
	// Se apasa una din tastele sageti sau ESC.
        // Apasarea unei alte taste nu are nici un efect.

      gotoxy(column, line); putch(c2);
        // Se sterge caracterul afisat anterior

      switch(c)
             { case 77:  if(column<80) column++; break;
               case 72:  if(line  > 1) line--;   break;
               case 75:  if(column> 1) column--; break;
               case 80:  if(line  <50) line++;   break;
             }
        // In functie de tasta sageata apasata se modifica
	// cu o unitate valoarea lui column sau line.
        // In cazul apasarii unei alte taste instructiunea
        // switch nu va functiona iar column si line vor
        // ramane cu valori nemodificate.

      gotoxy(column, line); putch(c1);
        // Se afiseaza caracterul intr-o noua pozitie,
	// corespunzator tastei apasate.

      gotoxy(68,2); cprintf("Column = %2d", column);
      gotoxy(68,3); cprintf("Line   = %2d", line);
        // Se afiseaza in coltul din dreapta sus numarul
        // coloanei si al liniei unde se gaseste caracterul.
    }
  while(c != 27) ;
	// Se reia executia instructiunii compuse daca nu
	// s-a apasat tasta ESC.

  getch();

  return 0;
}
