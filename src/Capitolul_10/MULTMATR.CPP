// multmatr.cpp, pag. 214

void multmatr( int m, int n, int l,
	       double X[][20],
	       double Y[][20],
	       double Z[][20]
	     )
{ int i, j, k;

  for(i=0; i<m; i++)
     for(j=0; j<l; j++)
	for(Z[i][j]=0.0,k=0;k<n;k++)

	    Z[i][j]+=X[i][k]*Y[k][j];
}
