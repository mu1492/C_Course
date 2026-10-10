// ex_09_05.cpp, pag. 180-181

#include <conio.h>
#include <stdio.h>

int main(void)
{ int char_freq[127], i;
  char str[80], *p;

  clrscr();
  for(i=0; i<127; i++) char_freq[i]=0;
  printf("\n\t Input the string of characters :\n");
  gets(str);
// *****************************
  p=str;
  while(*p)
{ char_freq[*p]++;  p++; }
// ******************************
  printf("\n The character              Occurrence\n");
  for(i=32; i<127; i++)
     { printf("\n   %3d  %c                   %2d",
		i, i, char_freq[i]);
       if(i%15==0) getch();
     }

  getch();

  return 0;
}
