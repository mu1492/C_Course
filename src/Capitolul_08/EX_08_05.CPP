// ex_08_05.cpp, pag. 128

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{double x, y;

printf("\n\n\t x = "); scanf("%le", &x);

if( x<-10 )
  { y=pow(x,3)+1;
    printf("\n\t x = %le  y = %le", x,y); }
else if( -10<=x && x<2 )
  { y=x+100;
   printf("\n\t x = %le  y = %le", x,y); }
else if( 2<=x && x<15 && fabs(x-5) > 1.e-15 )
  { y=(x-9)/(x-5);
    printf("\n\t x = %le  y = %le", x,y); }
else if( 15<=x )
  { y=(x-100)/(pow(x,4)+8);
    printf("\n\t x = %le  y = %le", x,y); }
else
  printf("\n\t x = %le  y undetermined", x);

getch();

return 0;
}
