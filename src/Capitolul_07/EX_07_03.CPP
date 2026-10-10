// ex_07_03.cpp, pag. 109-110

#include <conio.h>
#include <stdio.h>

int main(void)
{char c;

 clrscr();
	// Se afiseaza caracterele  'C'  '+'  si  '+' cu macroul
	// putchar, in doua feluri, pe linie si pe coloana.
 putchar('C'); putchar('+');  putchar('+'); putchar('\n');
 putchar(10);

 putchar('C'); putchar('\n'); putchar('+');
 putchar(10);  putchar('+');  putchar(10);

	// Se introduc min. 10 caractere (cu ecou), urmate de <Enter>
	// Primele sase caractere vor fi afisate pe o linie noua.
 putchar(10);
 putchar(getchar()); putchar(getchar());  putchar(getchar());
 putchar(getchar()); putchar(getchar());  putchar(getchar());

 getch();

 return 0;
}
