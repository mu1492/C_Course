// ex_11_07.cpp, pag. 246-247

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(void)
{ int n1, n3, n12, n13, n14;
  char s1[]  ="Programming in C/C++",
       *s2   ="Programming in C/C++",
       s3[25]="Programming in C",
       s4[]  ="Programming in FORTRAN",
       s5[]  =" and ",
       s6[]  ="Ada";

  clrscr();
  n1=strlen(s1); n3=strlen(s3);
  printf("\n\n\t The function  unsigned strlen(const "
	 "char *str)\n");
  printf("\n Length of the string \"%s\" = %d", s1, n1);
  printf("\n Length of the string \"%s\" = %d", s3, n3);
  getch();

  printf("\n\n\t The comparison function"
	 "\n\t\t int strcmp(const char *str1, const char *str2)");
  n12=strcmp(s1, s2); n13=strcmp(s1, s3); n14=strcmp(s1, s4);
  printf("\n\n \"%s\" ~ \"%s\"    %3d", s1, s2, n12);
  printf("\n \"%s\" ~ \"%s\"    %3d", s1, s3, n13);
  printf("\n \"%s\" ~ \"%s\"    %3d", s1, s4, n14);
  getch();

  printf("\n\n\t The concatenation function"
  "\n\t\t char *strcat(char *dest, const char *source)");
  printf("\n\n The destination string : \"%s\"", s4);
  printf("\n The source string      : \"%s\"", s5);
  strcat(s4, s5);
  printf("\n The resulting string   : \"%s\"", s4);
  printf("\n\n The destination string : \"%s\"", s4);
  printf("\n The source string      : \"%s\"", s6);
  strcat(s4, s6);
  printf("\n The resulting string   : \"%s\"", s4);
  getch();

  printf("\n\n\t The function\n\t\t char *strcpy(char *dest, "
	 "const char *source)");
  printf("\n\n The destination string : \"%s\"", s1);
  printf("\n The source string      : \"%s\"", s6);
  strcpy(s1, s6);
  printf("\n The resulting string   : \"%s\"", s1);

  getch();

  return 0;
}
