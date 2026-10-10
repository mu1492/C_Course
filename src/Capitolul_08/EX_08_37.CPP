// ex_08_37.cpp, pag. 164

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, j, transf;
  long int T[14];

  clrscr();
  for(j=0; j<14; j++) T[j]=0;
  T[13]=1;
  for(i=1; i<=53; i++)
     { transf=0;
       for(j=13; j>=0; j--)
	    { T[j]=T[j]*i+transf;
	      transf=T[j]/100000;
	      T[j]%=100000;
	 }
       printf("\n %2d!=", i);
       for(j=0; j<=13; j++) printf("%05ld", T[j]);
       if(i%20==0) getch();
     }

 getch();

 return 0;
}
