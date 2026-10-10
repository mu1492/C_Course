// ex_10_06.cpp, pag. 205

#include <conio.h>
#include <stdio.h>

int UPPER_1(int c);
int LOWER_1(int c);

void UPPER_2(char *c);
void LOWER_2(char *c);

int main(void)
{char c1='A', c2='a';

 clrscr();
 printf("\n\n UPPER_1(%c) = %c", c2, UPPER_1(c2));
 printf("\n\n LOWER_1(%c) = %c", c1, LOWER_1(c1));
 printf("\n\n %c  ---> ", c2); UPPER_2(&c2); printf("%c", c2);
 printf("\n\n %c  ---> ", c1); LOWER_2(&c1); printf("%c", c1);

 getch();

 return 0;
}

int UPPER_1(int c)
{ if(97<=c && c<=122) c-=32;
  return c;
}

int LOWER_1(int c)
{ if(65<=c && c<=90) c+=32;
  return c;
}

void UPPER_2(char *c)
{ if(97<=*c && *c<=122) *c-=32; }

void LOWER_2(char *c)
{ if(65<=*c && *c<=90) *c+=32;  }
