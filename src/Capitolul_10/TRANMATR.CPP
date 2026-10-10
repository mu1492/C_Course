// tranmatr.cpp, pag. 215

void tranmatr( int n, double A[][20] )
{
  int i, j; double t;

  for( i=0; i<n-1; i++ )
    for( j=i+1; j<n; j++ )
	{ t=A[i][j]; A[i][j]=A[j][i]; A[j][i]=t; }

}
