// ex_08_08.cpp, pag. 132-133

//  The highest buildings in the world
//
#include <conio.h>
#include <stdio.h>
int main(void)
{int n;

 clrscr();
 printf("\n\n\t The first seven highest buildings in "
	"the world (in 2001)");
 printf("\n\n\t  n = "); scanf("%d", &n);
 switch ( n )
   { case 1 :
       printf("\n\t First: Petronas-452 m; Kuala Lumpur-Malaysia");
       break ;
     case 2 :
       printf("\n\t Second: Sears Tower-442 m; Chicago - USA");
       break ;
     case 3 :
       printf("\n\t Third: Jin Mao Building-421 m; Shanghai");
       break ;
     case 4 :
       printf("\n\t Fourth: Empire State Building-381 m; New York");
       break ;
     case 5 :
       printf("\n\t Fiveth: Central Plaza-374 m; Hong Kong");
       break ;
     case 6 :
       printf("\n\t Sixth: Bank of China Building-369 m;"
	      " Hong Kong");
       break ;
     case 7 :
       printf("\n\t Seventh: Post & Communications"
	      " Building-365 m; Xiamen-China"); break ;
     default :
       printf("\n\t  8 - Tuntex Tower     (348 m) -"
	      " Taiwan\n\t  9 - Amoco Building   "
	      "(346 m) - Chicago\n\t 10 - Shun Hung"
	      " Square (325 m) - Shentzen, China\n\t"
	      " 11 - Tour Eiffel      (320 m) - Paris");
       break ;
     }

 getch();

 return 0;
}
