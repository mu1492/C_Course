// sparsemv.cpp, pag. 214

void sparsemv( int m, int n,
	       double S[][20],
	       int *INDEX,
	       double *VECT,
	       int *kk
	     )
{ int i, j, k=-1;

  for( i=0; i<m; i++ )
      for( j=0; j<n; j++ )
	   if( S[i][j] != 0.0 )
	      { k++;
		INDEX[k]=i*n+j;
		VECT[k]=S[i][j];
		*kk=k;
	      }
return;
}
