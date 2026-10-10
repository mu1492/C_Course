// ex_08_34.cpp, pag. 159-160

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i;
  long int fi=1;
  float ff=1.0;
  double fd=1.0;

  clrscr();
  for(i=1; i<=12; i++)
     { fi*=i;
       printf("\n  %2d! = %14ld", i, fi);
     }

  getch(); clrscr();
  for(ff=1.0, i=1; i<35; i++)
     { ff*=i;
       printf("\n  %2d! = %28.20e", i, ff);
       if(i%15==0) getch();
     }

  getch(); clrscr();
  for(fd=1.0, i=1; i<71; i++)
     { fd*=i;
       printf("\n  %2d! = %28.20le", i, fd);
       if(i%15==0) getch();
     }

 getch();

 return 0;
}
