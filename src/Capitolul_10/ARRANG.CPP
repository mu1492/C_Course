//  arrang.cpp, pag. 198

long double arrang( int n,  int k )
{ int i;
  long double a;

  if( n<1 || n>150 ) return -1.0;
  if( k<1 || k>n )   return -1.0;
  for( a=1.0,i=n; i>=n-k+1; i-- ) a*=i;

  return a;
}
