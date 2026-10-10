// ex_08_02.cpp, pag. 125

#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(void)
{  double x, y;

   printf ("\n\t x = ");
   scanf ("%le", &x);
   y = x*x;
   if( x<3 )
      y = (x-1)/(pow(x,4)+1);
   printf("\n\n\t y = %le", y);
   getch();

   return 0;
}
