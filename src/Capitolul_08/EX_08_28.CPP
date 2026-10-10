// ex_08_28.cpp, pag. 154

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <process.h>

int main(void)
{int n=0;
 double s1=0, s2=0, t, v, v_RMS;

 clrscr();
 printf("\n\t Enter the numbers !\n");
 while( scanf("%le", &t) )
      { n++; s1+=fabs(t); s2+=t*t; }
 if(n==0) exit(1);
 v=s1/n; v_RMS=sqrt(s2/n);
 printf("\n\t There were introduced %d numbers", n);
 printf("\n\t Average of abs. values = %le"
	   "\n\t v_RMS                  = %le", v, v_RMS);

 getch();

 return 0;
}
