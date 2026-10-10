// ex_05_02.cpp, pag. 86

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, n;         // Declaratii facute la
  double a, b, h;   // inceputul corpului functiei

  clrscr();
  printf("\n a = "); scanf("%le", &a);
  printf("\n b = "); scanf("%le", &b);
  printf("\n h = "); scanf("%le", &h);
  n=(b-a)/h+1;
  for(i=0; i<n; i++)
	    { double x, y;      // declaratii valabile in
				 // instructiunea compusa
	      x=a+i*h;
	      y=2.5*x*x-12.55*x+100.21;
	      printf("\n\t %16.6le \t %16.6le", x, y);
      if(i%20==0) getch();
     }
 getch();

 return 0;
}
