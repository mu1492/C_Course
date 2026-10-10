// ex_09_01.cpp, pag. 173

#include <conio.h>
#include <stdio.h>

int main(void)
{ int a, *p1, *p2 ;

  printf("\n\t  a = "); scanf("%d", &a);
  p1= &a ;
  p2 = p1 ;
  printf("\n\t a = %d;\n\t p1 = %p  p2 = %p;"
	 "\n\t *p1 = %d   *p2 = %d;",a, p1, p2, *p1, *p2);

  getch();

  return 0;
}
