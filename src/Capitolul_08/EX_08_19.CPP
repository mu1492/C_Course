// ex_08_19.cpp, pag. 144-145

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, k, n;
  double A[50], median, t;

  printf("\n\n\t The number of elements   n = ");
  scanf("%d", &n);

  //  First loop
  printf("\n\n\t\t The initial string\n");
  for( i=0 ; i<n ; i++ )
     { printf("\n\t A[%2d] = ", i); scanf("%le",&A[i]); }

  // **********************
  //  Second loop
label:
  k=0;
  for( i=0 ; i<n-1 ; i++ )
     { if(A[i]<A[i+1])
       { t=A[i]; A[i]=A[i+1]; A[i+1]=t; k=1; }
     }
  if(k != 0) goto label;

  // **********************
  //  Third loop
  printf("\n\n\t\t The final form of the string in"
	 " descending order\n");
  for( i=0 ; i<n ; i++ )
     printf("\n\t A[%2d] = %le", i, A[i]);

  if(n%2 != 0) { k=(n-1)/2; median = A[k]; }
  else { k=(n-2)/2; median=(A[k]+A[k+1])/2; }
  printf("\n\n\n\t The median = %le", median );

  getch();

  return 0;
}
