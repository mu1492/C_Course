// ex_06_01.cpp, pag. 100-101

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{ int dig, i, numar=13215;
  char str[20];

  clrscr();
  printf("\n\n\t\t      1234567890123456");       //Cap.VII
  itoa(numar, str, 2);                            //Cap.XI
  printf("\n\n\t %d (10) = %16s (2)\n",numar,str);//Cap.VII
  for(i=1; i<=16; i++)                            //Cap.VIII
     { dig= numar>>(16-i) & 1;
       printf("\n\t digit[%2d] = %d ", i, dig);   //Cap.VII
     }
  getch(); return 0;                              //Cap.VII
}
