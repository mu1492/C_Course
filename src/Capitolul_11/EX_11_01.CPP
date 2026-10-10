// ex_11_01.cpp, pag. 236

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ double a_degree, a_rad, dist, min, pi=3.1415926, sec, x, y;

  clrscr();
  printf("\n\n\t x = "); scanf("%le", &x);
  printf("\t y = "); scanf("%le", &y);
  if(x!=0 || y!=0)
    {dist=sqrt(x*x+y*y);
     a_rad=atan2(y,x);
     if(a_rad<0) a_rad+=2*pi;
     a_degree=a_rad*180/pi;
     min=(a_degree-floor(a_degree))*60;
     sec=(min-floor(min))*60;
     printf("\n\t OM = %le", dist);
     printf("\n\t <(Ox,OM) = %e (rad) = %3d\370 %2d' %6.3f\"",
             a_rad, (int)floor(a_degree), (int)floor(min), sec);
    }

  getch();

  return 0;
}

