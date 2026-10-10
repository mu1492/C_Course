// out_matr.cpp, pag. 214

void out_matr( int m, int n, double A[][20] )
{ int i, j;

  printf("\n\n");
  for( i=0; i<m; i++ )
      { for( j=0; j<n; j++ )  printf("%12.4le", A[i][j]);
	printf("\n");
      }
  printf("\n\n");
}
