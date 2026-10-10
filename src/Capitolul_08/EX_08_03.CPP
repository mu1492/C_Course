// ex_08_03.cpp, pag. 125-126

#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(void)
{  double x, y;

   printf("\n\t  x =  ");
   scanf("%le", &x);
   if( x<3 )
      y = (x-1)/(pow(x,4)+1);
   else
      y = x*x;
   printf("\n\n\t y = %le", y);
   getch();

   return 0;
}
