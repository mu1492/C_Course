// ex_08_07.cpp, pag. 130-131

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{double M, Mx, My, Mz, R, Rx, Ry, Rz, T;

clrscr();
printf("\n\n The resultant force components :");
printf("\n\t Rx = "); scanf("%le", &Rx);
printf("\t Ry = "); scanf("%le", &Ry);
printf("\t Rz = "); scanf("%le", &Rz);
printf("\n The resultant moment components :");
printf("\n\t Mox = "); scanf("%le", &Mx);
printf("\t Moy = "); scanf("%le", &My);
printf("\t Moz = "); scanf("%le", &Mz);
R=sqrt(Rx*Rx+Ry*Ry+Rz*Rz); M=sqrt(Mx*Mx+My*My+Mz*Mz);
T=Rx*Mx+Ry*My+Rz*Mz;
printf("\n\n |R| = %le  |Mo| = %le  T = %le\n\n",R, M, T);

if( R==0 )
  { if( M==0 )
      printf("\n\t System in equilibrium\n");
    else
      printf("\n\t The simplest resultant is a couple."
		 "\n\t The screwdriver has no force.\n");
  }
else { if( M==0 )
	    printf("\n\t The simplest resultant is a force."
		"\n\t The point  O  is on the screwdriver line.\n");
       else {  if( T==0 )

	    printf("\n\t The simplest resultant is"
		" a force.\n\t  The point O is "
		"not on the screwdriver line\n");
	       else
		    printf("\n\t General case.\n\t The"
		      " screwdriver has the both "
		      "elements different from zero.\n");
	  }
     }

getch();

return 0;
}
