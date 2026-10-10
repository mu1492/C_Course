//  f_lagr.cpp, pag. 201

double f_lagr( int n,
	       double X[],
	       double Y[],
	       double xc
	      )
{ int i, j;
  double L, P;

  for( L=0,j=0; j<n; j++ )
  { for( P=Y[j],i=0; i<n; i++ )
	      if(i != j) P*=(xc-X[i])/(X[j]-X[i]);
    L+=P;
  }

  return L;
}
