// ex_08_11.cpp, pag. 135

#include <conio.h>
#include <stdio.h>

int main(void)
{ char c;

  c=getchar();
  switch( c )
  {  case 'B' : case 'b' :
		printf("\n\t Bucharest"); break;
    case 'C' : case 'c' :
		printf("\n\t Cluj-Napoca"); break;
    case 'T' : case 't' :
		printf("\n\t\Timisoara"); break;
    case 'I' : case 'i' :
		printf("\n\t Iasi"); break ;
  }

  getch();

  return 0;
}
