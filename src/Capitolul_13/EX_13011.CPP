// ex_13011.cpp, pag. 275 (Programul nr. 1)

#include <conio.h>
#include <stdio.h>

int main(void)
{ int c;
  FILE *f;

  f=fopen("file.$$$", "w");
  clrscr();
  while(c != '\015')      //  CR ~ 015 (octal)
       { c=getche(); fputc(c, f); }
  fclose(f);

  getch();

  return 0;
}
