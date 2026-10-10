// ex_08_18.cpp, pag. 143

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, i_max, i_min, n;
  double A[50], v_max, v_min;

  printf("\n\n\t The number of elements   n = ");
  scanf("%d", &n);

  //  First loop
  for( i=0 ; i<n ; i++ )
     { printf("\n\t A[%2d] = ",i); scanf("%le",&A[i]); }

  //  Second loop
  v_min=v_max=A[0]; i_min=i_max=1;
  for( i=0 ; i<n ; i++ )
     { if(v_max < A[i] ) { v_max=A[i]; i_max=i; }
       if(v_min > A[i] ) { v_min=A[i]; i_min=i; }
     }
  printf("\n\t  v_min = A[%2d] = %le", i_min, v_min);
  printf("\n\t  v_max = A[%2d] = %le", i_max, v_max);
  printf("\n\t  The range = %le", v_max-v_min);

  getch();

  return 0;
}
