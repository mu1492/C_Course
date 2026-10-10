// decompLU.cpp, pag. 213

void decompLU( int n,
	       double A[][20],
	       double L[][20],
	       double U[][20],
	       int *kod
	     )
{ int i, j, k;
  double s;

  if(A[0][0]==0.0)  { *kod=1;  return; }

  for( i=0; i<n; i++ )
    for(j=0; j<n; j++ )
       L[i][j]=U[i][j]=0.0;

  for( i=0; i<n; i++ )
     { L[i][0]=A[i][0];
       U[0][i]=A[0][i]/L[0][0];
       U[i][i]=1.0;
     }

  for( j=1; j<n; j++ )
      for( i=1; i<n; i++ )
	   if(i<j)
	      { if(L[i][i]==0.0 ) { *kod=1; return; }

		for(s=0.0, k=0; k<=i-1; k++)
		      s+=L[i][k]*U[k][j];

		U[i][j]=(A[i][j] - s)/L[i][i];
	      }
	    else
	       { for(s=0.0,k=0;k<=j-1;k++) s+=L[i][k]*U[k][j];

		 L[i][j]=A[i][j]-s;
	       }

*kod=0;

return;
}
