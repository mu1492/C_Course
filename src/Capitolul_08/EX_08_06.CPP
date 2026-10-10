// ex_08_06.cpp, pag. 128-129

#include <conio.h>
#include <stdio.h>

int main(void)
{ char c;

  printf("Press a character key:"); c=getch();
  printf("\n Character %c is ", c);
  if ( c >='0' && c<= '9' )
	puts("a digit.");
  else if ( c>='a' && c<='z' )
	puts("a lowercase letter.");
  else if ( c>='A' && c<='Z' )
	puts("an uppercase letter.");
  else
	puts("not a digit or letter.");

  getch();

  return 0;
}
