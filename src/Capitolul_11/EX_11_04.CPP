// ex_11_04.cpp, pag. 240-241

#include <conio.h>      //  clrscr(), getch()
#include <ctype.h>      //  isalpha(..)
#include <stdio.h>      //  gets(..), printf(..)

int main()
{ int i, j, lstr;
  char str[80];

  clrscr();
  printf("\n\n Input the string of characters : \n\n");
  gets(str);
  lstr=0;
  while(str[lstr]!='\0') lstr++;

//  Anterioarele 2 randuri s-ar putea inlocui cu
//             lstr=strlen(str);
//  utilizand functia  strlen(..)  din string.h
  printf("\n The length of the string = %d", lstr);
  i=0;
  while(str[i]!='\0')
       { if(!isalpha(str[i]))
	      { for(j=i; j<lstr; j++) str[j]=str[j+1];
		lstr--; i--;
	      }
	    i++;
       }
  printf("\n\n The new form of the string \n"
	   " (contains only capital and small letters) : ");
  printf("\n\n %s\n", str);
  printf("\n The length of the new string = %d", lstr);

  getch();

  return 0;
}
