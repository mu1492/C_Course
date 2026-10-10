// ex_09_03.cpp, pag. 177

#include <conio.h>
#include <stdio.h>

int main(void)
{ int i, n=8;
  double sum_n, sum_p, prod_n, prod_p,
         a[8] = {12.1, -2.9, 0.0, 18.34, 230.8, 0.0, -9.32, 3.9};

  clrscr();
  sum_n=sum_p=0; prod_n=prod_p=1;
  //
  printf("\n\n\t  a = %p;  &a = %p;  &a[0] = %p;\n",
	 a, &a, &a[0]);
  //
  for(i=0; i<n; i++)
     printf("\n a[%d] = %7.2f;  &a[%d] = %p;  a+%d = %p;    "
	    " *(a+%d) = %7.2f;",
	    i, a[i], i, &a[i], i, a+i, i, *(a+i));
  //
  for(i=0; i<n; i++)
     { sum_n+=a[i];
       if(a[i]!=0) prod_n*=a[i];     }
  //
  for(i=0; i<n; i++)
     { sum_p+=*(a+i);
       if(*(a+i)!=0) prod_p*=*(a+i); }
  //
  printf("\n\n\t     sum_n = %10.3f   prod_n = %le"
	 "\n\t     sum_p = %10.3f   prod_p = %le",
	  sum_n, prod_n, sum_p, prod_p);

  getch();

  return 0;
}
