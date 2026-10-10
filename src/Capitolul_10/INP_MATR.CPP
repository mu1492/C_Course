// inp_matr.cpp, pag. 213-214

void inp_matr( int m, int n, double A[][20] )
{ int i, j;
  double v;

  printf("\n\n\t The matrix has %d rows and %d columns.",m,n);
  printf("\n   Line   Column   Element value\n");
  for( i=0; i<m; i++ )
      for(j=0; j<n; j++ )
	  { printf("   %2d    %2d   =   ",i,j);
	    scanf("%le",&v); A[i][j]=v;
	  }
}
