// ex_08_39.cpp, pag. 168-169

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{int a0, a1, a2, n;

 clrscr();
 for(a2=1; a2<10; a2++)
  for(a1=0; a1<10; a1++)
    for(a0=0; a0<10; a0++)
	 if( 100*a2+10*a1+a0==pow(a2,3)+pow(a1,3)+pow(a0,3) )
	    {printf("\n  %1d%1d%1d", a2, a1, a0);
	     getch();
	    }

  getch();

  return 0;
}
