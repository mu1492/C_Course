// ex_10_09.cpp, pag. 211-213

#include <conio.h>
#include <math.h>
#include <stdio.h>

#include "addmatr.cpp"   // (m,n,X[][20],Y[][20],Z[][20])
#include "decompLU.cpp"  // (n,A[][20],L[][20],U[][20],*kod)
#include "diffmatr.cpp"  // (m,n,X[][20],Y[][20],Z[][20])
#include "inp_matr.cpp"  // (m,n,A[][20])
#include "multmatr.cpp"  // (m,n,l,A[][20],B[][20],C[][20])
#include "names.cpp"     // ()
#include "out_matr.cpp"  // (m,n,A[][20])
#include "sparsemv.cpp"  // (m,n,S[][20],*INDEX,*VECT,*kk)
#include "sparsevm.cpp"  // (m,n,kk,INDEX[],VECT[],S[][20])
#include "tranmatr.cpp"  // (n,A[][20])

int main(void)
{int i, INDEX[100], j, kod, m, n, kk;
 double  A[20][20], B[20][20], L[20][20], P[20][20],
         Q[20][20], U[20][20], VECT[100];
names() ; getch(); clrscr();
//
printf("\n\t The number of rows and column = ");
scanf("%d",&m); n=m;
//
printf("\n\t The matrix  A");
inp_matr( m, n, A ) ;  out_matr( m, n, A ) ; getch();
//
printf("\n\t The matrix  B");
inp_matr( m, n, B ) ; out_matr( m, n, B ) ; getch();
//
printf("\n\t The sum  C = A + B");
addmatr( m, n, A, B, U ) ; out_matr( m, n, U ) ; getch();
//
printf("\n\n\t The matrix  A_t");
tranmatr( n, A ) ; out_matr( n, n, A ) ; getch();
//
printf("\n\t The initial matrix  A");
tranmatr( n, A ) ; out_matr( n, n, A ) ; getch();
//
decompLU( n,  A,  L,  U,  &kod ) ;
printf("\n\t The decomposition  A = L * U"
       "\n\t\t kod = %d", kod); getch();
if(kod==0)
  { printf("\n\t Matrix  U"); out_matr( n, n, U ) ; getch();
    printf("\n\t Matrix  L");  out_matr( n, n, L ) ; getch();
    printf("\n\t The product   L * U");
    multmatr( n, n, n, L, U, P );out_matr( n, n, P ); getch();
    printf("\n\t The difference   L*U - A");
    diffmatr( n, n, P, A, Q ); out_matr( n, n, Q ) ; getch();
  }
//
clrscr();
printf("\n\t Input of sparse matrix\n"
       "\n\t Number of rows      m = "); scanf("%d", &m);
printf("\n\t Number of columns  n = "); scanf("%d", &n);
inp_matr( m, n, A ) ; out_matr( m, n, A ) ; getch();
//
sparsemv( m, n, A, INDEX, VECT, &kk ) ;
for( i=0; i<=kk;  i++ )
    printf("\n\t %3d\t %10.4le", INDEX[i], VECT[i]);
getch();
//
sparsevm(m,n,kk,INDEX,VECT,A); out_matr(m,n,A ); getch(); return 0;
}
