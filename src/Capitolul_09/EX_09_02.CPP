// ex_09_02.cpp, pag. 174-175

#include <conio.h>
#include <stdio.h>

int main(void)
{ int   i=15, *p1, *p2, *p3, *p4;
  float f=0.988, *p5, *p6, *p7, *p8;
  double d=-345.678, *p9, *p10, *p11, *p12;
  char c='A', *p13, *p14, *p15, *p16;

  clrscr();
  p2=&i;
  p1=p2-1; p3=p2+1; p4=p2+2;
  p6=&f;
  p5=p6-1; p7=p6+1; p8=p6+2;
  p10=&d;
  p9=p10-1; p11=p10+1; p12=p10+2;
  p14=&c,
  p13=p14-1; p15=p14+1; p16=p14+2;
  printf("\n int i = %d   p = &i"
	 "\n p -1 = %p; p = %p; p+1 = %p; p+2 = %p;",
	 i, p1, p2, p3, p4);
  printf("\n\n float f = %f   q = &f"
	   "\n q -1 = %p; q = %p; q+1 = %p; q+2 = %p;",
	   f, p5, p6, p7, p8);
  printf("\n\n double d = %le   r = &d"
	  "\n r -1 = %p; r = %p; r+1 = %p; r+2 = %p;",
	  d, p9, p10, p11, p12);
  printf("\n\n char c = %c   s = &c"
	 "\n s -1 = %p; s = %p; s+1 = %p; s+2 = %p;",
	 c, p13, p14, p15, p16);

  getch();

  return 0;
}
