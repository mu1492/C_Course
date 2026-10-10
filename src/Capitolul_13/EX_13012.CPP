// ex_13012.cpp, pag. 275 (Programul nr. 2)

#include <conio.h>
#include <dos.h>
#include <stdio.h>

int main(void)
{ char c;
  FILE *f;

  f=fopen("file.$$$", "r");
  clrscr();
  printf("\n\n The characters of the file will be "
	 "displayed :\n\n");
  do
     { c=fgetc(f); delay(200);
       printf(" %c", c);
     }
  while(!feof(f));
  fclose(f);
  printf("\n\n All characters have been displayed . ");

  getch();

  return 0;
}
