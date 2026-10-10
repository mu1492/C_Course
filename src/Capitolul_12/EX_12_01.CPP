// ex_12_01.cpp, pag. 261

#include <conio.h>
#include <stdio.h>

struct complex { double x; double y; } ;

int main()
{ struct complex *p2, *p3, z1, z2, z3;

  clrscr();
  p2=&z2; p3=&z3;
  z1.x=1.2; z1.y=-0.87;
  p2->x=-2.34; p2->y=0.99;
  z3.x=z1.x+z2.x; z3.y=z1.y+z2.y;
  printf("\n\n The real part      = %14.7le = %14.7le ="
	 " %14.7le\n The imaginary part = %14.7le "
	 "= %14.7le = %14.7le\n",
	 z3.x, p3->x, (*p3).x, z3.y, p3->y, (*p3).y);

  getch();

  return 0;
}
