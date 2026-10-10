// ex_07_06.cpp, pag. 111

#include <conio.h>
#include <stdio.h>

int main(void)
{ char year[5], month[15];

  clrscr();
  puts("\n\t Year  :"); gets(year);
  puts("\n\t Month :"); gets(month);
  putch(month[0]); putch(month[1]); putch(month[2]);
  putch(' '); putch('.'); putch(' ');
  putch(year[2]); putch(year[3]);
  getch();

  return 0;
}
