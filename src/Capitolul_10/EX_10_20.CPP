// ex_10_20.cpp, pag. 231

#include <conio.h>
#include <stdio.h>

double sumposA(double A[], int n);
double prodposA(double A[], int n);
int n_posA(double A[], int n);
double maxstrA(double A[], int n);

int main(void)
{ int n=7;
  double A[50]={ -1.0, 2.0, -7.0, -4.0, 5.0, -6.0, -3.0 };

  clrscr();
  printf("\n The sum of positive elements     = %13.6le",
	  sumposA(A,n-1));
  printf("\n The product of positive elements = %13.6le",
	  prodposA(A,n-1));
  printf("\n The number of positive elements  =%3d",
	  n_posA(A,n-1));
  printf("\n The max. value of elements       = %13.6le",
	  maxstrA(A,n-1));

  getch();

  return 0;
}

double sumposA( double A[], int n )
{ if( n==0 ) return ( A[n] > 0.0 ? A[n] : 0.0 ) ;
  else return ( A[n]>0 ? A[n] : 0 ) + sumposA(A,n-1); }

double prodposA( double A[], int n )
{ if ( n==0 ) return ( A[n]>0 ? A[n] : 1.0 );
  else return ( A[n]>0 ? A[n] : 1 ) * prodposA(A,n-1); }

int n_posA( double A[], int n )
{ if( n==0 ) return (A[n] > 0.0) ;
  else return (A[n]>0) + n_posA(A, n-1); }

double maxstrA( double A[], int n )
{ if( n == 0 ) return A[n];
  else return (A[n]<maxstrA(A,n-1) ? maxstrA(A,n-1): A[n]); }

