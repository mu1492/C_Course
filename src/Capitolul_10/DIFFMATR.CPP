// diffmatr.cpp, pag. 213

void diffmatr( int rows,
	       int columns,
	       double X[][20],
	       double Y[][20],
	       double Z[][20]
	     )
{ int i, j;

  for( i=0; i<rows; i++ )
    for(j=0;j<columns;j++)
      Z[i][j]=X[i][j]-Y[i][j];
}
