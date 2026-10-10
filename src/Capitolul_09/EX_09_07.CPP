// ex_09_07.cpp, pag. 184

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, j, k, m=2, n=3;
  double A[2][3]={11., 12., 13., 21., 22., 23.}, *pA;

  clrscr();
  pA=&A[0][0];
  printf("\n\n A = %p; &A[0][0]= %p; A[0] = %p; "
	 "pA = %p\n\n",A, &A[0][0], A[0], pA);
  k=-1;
  for(i=0; i<m; i++)
     { for(j=0; j<n; j++)
	 { k++;
	   printf("\n A[%d][%d] = %7.3f;", i, j, A[i][j]);
	   printf("  *(A[%d]+%d) = %7.3f;", i, j, *(A[i]+j));
	   printf("  *(pA+%d) = %7.3f;", k, *(pA+k));
	   printf("\n\t\t\t\t\t   *(*(A+%d)+%d) = %7.3f;",
		     i, j, *(*(A+i)+j));
	   printf("\n &A[%d][%d] = %p; A[%d]+%d = %p; pA+%d = %p;",
	       i, j, &A[i][j], i, j, A[i]+j, k, pA+k);
	   printf("\n\t\t\t\t\t   *(A+%d)+%d = %p;",i, j, *(A+i)+j);
	   getch();
	  }
       printf("\n");
     }

     getch();

     return 0;
}
