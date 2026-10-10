// ex_04_04.cpp, pag. 75

#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415926

main()
{ int i, np;
  float c, phi_fin, phid, phir, rb, s, stepd, x, y;

  printf("\n The radius of base circle     [mm]   = ");// stdio.h
  scanf("%f", &rb);                                    // stdio.h
  printf("\n The final value of angle phi (< 285) = ");
  scanf("%f", &phi_fin);
  printf("\n The number of calc. points (< 500 )  = ");
  scanf("%d", &np);
  getch();                                      // conio.h
  stepd=phi_fin/(np-1);
  for(i=0; i<np; i++)
     { phid=i*stepd; phir=phid*PI/180.0;
       s=sin(phir); c=cos(phir);                // math.h
       x=rb*(c+phir*s); y=rb*(s-phir*c);
       printf("\n  %5d   %7.3f   %12.5e   %12.3e",i,phid,x,y);
       delay(100);                              // dos.h
     }
  getch();                                      // conio.h
}
