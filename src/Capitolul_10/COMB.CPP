//  comb.cpp, pag. 198

long double comb( int n, int k )
{ int i;
  long double c;

  if( n<1 || n>1000 ) return -1.0;
  if( k<0 || k>n ) return -1.0;
  if( k>n/2 ) k=n-k;
  for( c=1.0,i=1; i<=k; i++ )
   { if(c>1.e250) return -1.0;
     c*=(n-i+1.0)/i;
   }

  return c;
}
