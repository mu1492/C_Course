// ex_08_12.cpp, pag. 136-137

#include <conio.h>
#include <stdio.h>

int main(void)
{char c;
 double a, b, A;

 clrscr();
LAB:
 printf("\n\t a = "); scanf("%le", &a);
 printf("\t b = ");   scanf("%le", &b);
 A=(a+b)/2;
 printf("\t Average = %le \n\n\t\t\t Do you want "
	   "to continue ?  (Y, y) \n\n ", A);
 c=getch();
 if(c=='Y' || c=='y') goto LAB ;

 getch();

 return 0;
}
