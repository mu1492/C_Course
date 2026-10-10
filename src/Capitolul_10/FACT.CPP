//  fact.cpp, pag. 197

long double fact( int n )
{
  int i;
  long double f;

  if( n<0 || n>150 ) return -1.0;
  for( i=1,f=1.0; i<=n; i++ ) f*=i;

  return f;
}
