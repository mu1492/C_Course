// ex_11_05.cpp, pag. 241-242

#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main()
{ int i, j, lstr;
  char str[80];

  clrscr();
  printf("\n\n Input the string of characters : \n\n");
  gets(str);
  lstr=0; while(str[lstr]!='\0') lstr++;
  printf("\n The length of the string = %d", lstr);
// **************************************************
  i=0;
  while(str[i]!='\0')
       { if(isupper(str[i]))
	      { for(j=lstr+1; j>=i+3; j--) str[j]=str[j-2];
		str[i+1]=' '; str[i+2]=' '; lstr+=2; }
	   if(islower(str[i]))
	      { for(j=lstr; j>=i+2; j--) str[j]=str[j-1];
		str[i+1]=' '; lstr+=1;               }
	   i++;
       }
// **************************************************
  printf("\n\n The new form of the string\n\376");
  for(i=0; i<lstr; i++) printf("%c", str[i]); printf("\376");
  printf("\n The length of the string = %d", lstr);

  getch();

  return 0;
}
