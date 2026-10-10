// gauss.cpp, pag. 218-219

void gauss( int n,
	    double A[][20],
	    double *B,
	    double eps,
	    int *kod
	   )
{ int i, imax, ip, j;
  double piv, t, tmax;

  for( ip=0; ip<n; ip++ )
	{// Step I
	 tmax=fabs(A[ip][ip]); imax=ip;
	 for( i=ip; i<n; i++ )
	   if( fabs(A[i][ip] ) >=  tmax)
	      { tmax=fabs( A[i][ip] );
		imax= i;
	      }

	 // Step II
	 if( tmax < eps ) { *kod=1; return; }

	 // Step III
	 for(j=ip; j<n; j++)
	  { t=A[ip][j];
	    A[ip][j]=A[imax][j];
	    A[imax][j]=t;
	  }
	 t=B[ip]; B[ip]=B[imax]; B[imax]=t;

	 // Step IV
	 piv=A[ip][ip]; B[ip]=B[ip]/piv;
	 for( j=ip; j<n; j++ ) A[ip][j]=A[ip][j]/piv;

	 // Step V
	 for( i=0; i<n; i++ )
	     if ( i != ip )
		   { t=A[i][ip];
		     for( j=ip; j<n; j++ ) A[i][j]-=A[ip][j]*t;
		     B[i]=B[i]-B[ip]*t;
		   }

	}
*kod=0;

return;
}
