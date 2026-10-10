// ex_10_08.cpp, pag. 208

#include <conio.h>
#include <math.h>
#include <stdio.h>

void i_to_str(long int n, int n_dig, char *strdec);

int main(void)
{ long int n;
  int i, s;
  char strdec[20];

  clrscr();
  for(n=100; n<=99999; n++)
     { i_to_str(n, 5, strdec);
       for(s=0, i=0; i<5; i++) s+=strdec[i];
       if( fabs(pow(n, 1./3)-s) < 1.e-5)
	  printf("\n %ld", n);
     }

  getch();

  return 0;
}

void i_to_str(long int n, int n_dig, char *strdec)
{ int i;
  for(i=0; i<n_dig; i++) strdec[i]=0;
  for(i=0; i<n_dig; i++)
     { strdec[n_dig-i-1]=n%10; n-=strdec[n_dig-i-1]; n/=10; }
}
