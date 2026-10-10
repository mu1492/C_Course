// ex_07_05.cpp, pag. 111

#include <conio.h>
#include <stdio.h>

int main(void)
{ char name[35], surname[35];

  clrscr();
  puts("\n\t Please keyboard your surname");
					  //surname-nume de familie
  gets(surname);
  puts("\n\t Please keyboard your name"); //name   -prenume
  gets(name);
  puts("\nHello"); puts(name); puts(surname);
  getch();

  return 0;
}
