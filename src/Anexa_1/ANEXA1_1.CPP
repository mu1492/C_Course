// anexa1_1.cpp, pag. 396

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
  char str[10];

  clrscr();
  for(i=0; i<256; i++)
  {    itoa(i, str, 2);
       switch(i)
       {   case  0: printf("\n\t  NUL %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case  7: printf("\n\t  BEL %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case  8: printf("\n\t  BS  %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case  9: printf("\n\t  HT  %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case 10: printf("\n\t  LF  %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case 13: printf("\n\t  CR  %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   case 26: printf("\n\t  SUB %8s  %3o  %3d  %2X\n",
			   str, i, i, i); break;
	   default: printf("\n\t  %c   %8s  %3o  %3d  %2X\n",
			    i, str, i, i, i);
       }
       if(i%11==0) getch();
  }
  getch();
  return 0;
}
