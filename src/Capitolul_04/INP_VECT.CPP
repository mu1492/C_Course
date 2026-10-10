// inp_vect.cpp, pag. 65

void inp_vect(int n, double V[])
{ int i;

  printf("\n\t Indice  Valoare element");
  for(i=0; i<n; i++)
  {   printf("\n\t %2d\t\t",i);
      scanf("%le", &V[i]);
  }
}
