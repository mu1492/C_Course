// ex_10_07.cpp, pag. 207

#include <conio.h>
#include <math.h>
#include <stdio.h>

void i_to_str(long int n, int n_dig, char *strdec);

int main(void)
{ int i, n_dig;
  long int n, N=0;
  char strdec[20];

  clrscr();
  printf("\n\n   The integer number [1 ... 2147483647] = ");
  scanf("%ld", &n);
  while(N<n)
     { printf("\n   The length of the string [1 ... 20] = ");
       scanf("%d", &n_dig);
       for(i=0; i<n_dig; i++) N+=9*pow(10, i);
     }
  i_to_str(n, n_dig, strdec);
  printf("\n   The string is the following : ");
  for(i=0; i<n_dig; i++) printf("%2d", strdec[i]);

  getch();

  return 0;
}

void i_to_str(long int n, int n_dig, char *strdec)
{ int i;
  for(i=0; i<n_dig; i++) strdec[i]=0;
  for(i=0; i<n_dig; i++)
     { strdec[n_dig-i-1]=n%10; n-=strdec[n_dig-i-1]; n/=10; }
}
