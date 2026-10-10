// ex_08_09.cpp, pag. 134

#include <conio.h>
#include <stdio.h>

int main(void)
{char c;
 double a, b, max, min;

 printf("\n\n\t a = "); scanf("%le", &a);
 printf("\t b = "); scanf("%le", &b);
 printf("\n\n To find max. value - press  M"
	   "\n To find min. value - press  m"
	   "\n To find average    - press  A");
 c=getch();
 switch ( c )
 { case 'M' :
       max = a<b ? b : a ;
	  printf("\n\t The maximum value is: %le", max);
	  break ;
   case 'm' :
       min = a<b ? a : b ;
	  printf("\n\t The minimum value is: %le", min);
	  break ;
   case 'A' :
       printf("\n\t The average is: %le", (a+b)/2 );
	  break;
   default :
       printf("\n\t Mistake. Select among  M, m or A !");
 }

 getch();

 return 0;
}
