// out_vect.cpp, pag. 65

void out_vect(int n, double V[])
{
  int i;

  printf("\n\t Indice  Valoare element");
  for(i=0; i<n; i++)
     printf("\n\t %2d      %14.6le", i, V[i]);
}
