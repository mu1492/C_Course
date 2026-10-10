// ex_08_14.cpp, pag. 139

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{int k;
 double a, b, h, x;

 printf("\n\n\t a = "); scanf("%le", &a);
 printf("\t b = "); scanf("%le", &b);
 printf("\t h = "); scanf("%le", &h);

 for( x=a, k=1; x<=b; x+=h, k++ )
    { printf("\t\t %d  x = %le   y = %le\n",
	    k, x, 2.1*pow(x,3)+52.34*x*x-12.5);
     if(k%22==0) getch();
    }

 getch();

 return 0;
}
