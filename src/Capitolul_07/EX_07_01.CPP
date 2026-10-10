// ex_07_01.cpp, pag. 107-108

#include <conio.h>
#include <stdio.h>

int main(void)
{char c1, c2;
	// Afisarea datelor incepe pe un ecran nou
 clrscr();
	// Functia putch() este folosita de 5 ori, pentru
	// tiparirea caracterelor C , / , C , +  si +.
 putch('C'); putch('/'); putch('C'); putch('+'); putch('+');
	  // Se trece la un inceputul unui rand nou,
	  // lasand un rand liber.
 putch('\n'); putch('\n'); putch('\r');
	// Functia putch() este folosita de 5 ori, fiecare caracter
	// fiind afisat pe un rand nou, pe pozitii succesive.
 putch('C'); putch('\n');    putch('/'); putch('\n');
 putch('C'); putch('\n');    putch('+'); putch('\n');
 putch('+');
	// Se trece la un inceputul unui rand nou,
	// lasand un rand liber.
 putch('\n'); putch('\n'); putch('\r');
	// Functia putch() este folosita de 5 ori, fiecare caracter
	// fiind afisat pe un rand nou, pe prima pozitie.
 putch('C'); putch('\n'); putch('\b');
 putch('/'); putch('\n'); putch('\b');
 putch('C'); putch('\n'); putch('\b');
 putch('+'); putch('\n'); putch('\b');
 putch('+'); putch('\n'); putch('\b');
	// Aceasta functie afiseaza textul "Tastati trei caractere".
 printf("\n\t Tastati trei caractere\n");
	// Se apeleaza de trei ori functia getche(). Caracterele
// tastate apar pe ecran.
 getche(); getche(); getche();
	// Se trece la inceputul unui rand nou
 putch('\n'); putch('\r');
       // Aceasta functie afiseaza textul "Tastati un caracter".
 printf("\n\t Tastati un caracter\n");
	// Un caracter introdus cu functia getch() se
	// afiseaza cu functia putch().
 putch(getch());
	// Se trece la inceputul unui rand nou
 putch('\n'); putch('\r');
	// Aceasta functie afiseaza un text
 printf("\n\n\t Apasati o tasta functionala F1 .. F10 sau Enter\n");
	// In urma apasarii unei taste functionale (F1 ... F10  s.a.)
	// se va obtine codificarea acesteia.
 c1=getch(); c2=getch();
	// Se afiseaza valoarea numerica coresp. tastei functionale
 printf("\n %d %d", c1, c2);
	// Ecranul ramane nemodificat pana la apasarea unei taste.
 getch();

 return 0;
}
