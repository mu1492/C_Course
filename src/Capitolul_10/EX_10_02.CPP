// ex_10_02.cpp, pag. 197

#include <conio.h>
#include <stdio.h>

#include "fact.cpp"   // long double fact(int m)
#include "arrang.cpp" // long double arrang(int n, int k)
#include "comb.cpp"   // long double comb(int n, int k)

int main(void)
{ int k, m, n=35;

clrscr();
for( m=1; m<=n; m++ )
   { printf("\n\t\t %3d! = %23.15Le", m, fact( m ) );
     if(m%20==0) getch(); }

getch(); clrscr();
for( m=1; m<=n; m++ )
   { for(k=1; k<=m; k++)
	{ printf("\n\t\t A(%3d,%3d) = %23.15Le", m, k,
		  arrang( m, k ));
	  if(k%20==0) getch(); }
     printf("\n"); getch();
   }

getch(); clrscr();
for( m=1; m<=n; m++ )
   { for(k=0; k<=m; k++ )
	{ printf("\n\t\t C(%3d,%3d) = %23.15Le", m, k,
		  comb( m, k ) );
	  if(k%20==0) getch(); }
     printf("\n"); getch();
   }

getch();

return 0;
}
