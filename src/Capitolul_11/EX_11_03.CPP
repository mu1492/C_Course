// ex_11_03.cpp, pag. 239

#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{ char c;

  clrscr();
  printf("\n\n\t To stop the program press space bar\n");
  for( ; ; )
     {c=getch();
      if(c==' ') break;
      printf("\n\n %c -> tolower  ->  %c", c, tolower(c));
      printf("\n %c -> toupper  ->  %c", c, toupper(c));
      printf("\n %c -> toascii  ->  %X (hex.)",
					 c, toascii(c));
      printf("\n %c -> isalpha  ->  %d", c, isalpha(c));
      printf("\n %c -> isdigit  ->  %d", c, isdigit(c));
      printf("\n %c -> isxdigit ->  %d", c, isxdigit(c));
      printf("\n %c -> islower  ->  %d", c, islower(c));
      printf("\n %c -> isupper  ->  %d\n", c, isupper(c));
     }

  getch();

  return 0;
}
