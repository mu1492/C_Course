// ex_11_06.cpp, pag. 243-244

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int n, radix;
  long int nl;
  double v;
  char string[35];

  clrscr();
  printf("\n\n The function atoi (string --> integer number)");
  puts("\n\n\t Enter a string composed by decimal digits:\n");
  gets(string);
  n=atoi(string);
  printf("\n string = %s   number = %d", string, n);
  printf("\n\n The function atof (string --> floating "
	 "point number)");
  puts("\n\n\t Enter a string containing the floating point"
       " number characters:\n");
  gets(string);
  v=atof(string);
  printf("\n string = %s   fl. point number = %f", string, v);
  getch(); clrscr();
  printf("\n\n  The function  itoa  (int -->  string of "
	 " digits in radix base)");
  n=-1; radix=1;
  while(n<0 || n>32766)
       { printf("\n\n\t  int value = "); scanf("%d", &n); }
  while(radix<2 || radix>36)
       { printf("\n\t  int radix = "); scanf("%d", &radix); }
  itoa(n, string, radix);
  printf("\n\t\t %d  -->  %s (%2d)", n, string, radix);
  printf("\n\n\n  The function  ltoa  (long int -->  "
	 "string of digits in radix base)");
  nl=-1; radix=1;
  while(nl<0 || nl>2147483647)
       { printf("\n\n\t  long int value = "); scanf("%ld", &nl);}
  while(radix<2 || radix>36)
       { printf("\n\t  int radix = "); scanf("%d", &radix);}
  ltoa(nl, string, radix);
  printf("\n\t\t %ld  -->  %s (%2d)", nl, string, radix);

  getch();

  return 0;
}
