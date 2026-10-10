// ex_14_01.cpp, pag. 293-295

//  FRANCE   NEDERLAND   MONACO   FINLAND   NORGE

#include <conio.h>
#include <dos.h>

int main(void)
{ int BE=BLACK, B1, B2, B3, d=250, T=YELLOW;

textcolor(T);
window( 1, 1,80,25);
textbackground(BE); clrscr(); delay(d);
window(11, 5,30,20);
B1=BLUE; textbackground(B1); clrscr(); delay(d);
window(31, 5,50,20);
B2=LIGHTGRAY; textbackground(B2); clrscr(); delay(d);
window(51, 5,70,20);
B3=RED; textbackground(B3); clrscr(); delay(2*d);
window(33,22,50,22);
textbackground(CYAN); cputs("  F R A N C E  "); getch();
        // S-a desenat steagul Frantei.
        // De la stanga la dreapta : albastru - alb - rosu

clrscr();
window( 1, 1,80,25);
textbackground(BE); clrscr(); delay(d);
window(15, 6,65,10);
B1=RED; textbackground(B1); clrscr(); delay(d);
window(15,11,65,15);
B2=LIGHTGRAY; textbackground(B2); clrscr(); delay(d);
window(15,16,65,20);
B3=BLUE; textbackground(B3); clrscr(); delay(2*d);
window(35,22,50,22);
textbackground(CYAN); cputs("  NEDERLAND  "); getch();
        // S-a desenat steagul regatului Olandei.
        // De sus in jos : rosu - alb - albastru

clrscr();
window( 1, 1,80,25);
textbackground(BE); clrscr(); delay(d);
window(15, 5,65,12);
B1=RED; textbackground(B1); clrscr(); delay(d);
window(15,13,65,20);
B2=LIGHTGRAY; textbackground(B2); clrscr(); delay(2*d);
window(35,22,50,22);
textbackground(CYAN); cputs("  MONACO  "); getch();
        // S-a desenat steagul Principatului Monaco.
        // De sus in jos : rosu - alb

clrscr();
window( 1, 1,80,25);
textbackground(BE); clrscr(); delay(d);
window(15, 6,65,20);
B1=LIGHTGRAY; textbackground(B1); clrscr(); delay(d);
window(15,12,65,14);
B2=BLUE; textbackground(B2); clrscr(); delay(d);
window(30, 6,36,20);
B3=BLUE; textbackground(B3); clrscr(); delay(2*d);
window(30,22,50,22);
textbackground(CYAN); cputs("  SUOMI - FINLAND  "); getch();
        // S-a desenat steagul Finlandei.
        // Pe fond alb o cruce albastra

clrscr();
window( 1, 1,80,25);
textbackground(BE); clrscr(); delay(d);
window(15, 6,65,20);
B1=RED; textbackground(B1); clrscr(); delay(d);
window(15,12,65,14);
B2=LIGHTGRAY; textbackground(B2); clrscr(); delay(d);
window(30, 6,36,20);
B3=LIGHTGRAY; textbackground(B3); clrscr(); delay(d);
window(15,13,65,13);
B2=BLUE; textbackground(B2); clrscr(); delay(d);
window(32, 6,34,20);
B3=BLUE; textbackground(B3); clrscr(); delay(2*d);
window(35,22,50,22);
textbackground(CYAN); cputs("  N O R G E  "); getch();
	// S-a desenat steagul regatului Norvegiei.
	// Pe fond rosu o cruce alba peste care este
	// suprapusa o cruce albastra

return 0;
}
