// sparsevm.cpp, pag. 215

void sparsevm( int m,
	       int n,
	       int kk,
	       int INDEX[],
	       double VECT[],
	       double S[][20]
	     )
{ int i, r, c;

  for( i=0; i<= kk; i++ )
   { r=INDEX[i]/n;
     c=INDEX[i]-r*n;
     S[r][c]=VECT[i];
   }
}
