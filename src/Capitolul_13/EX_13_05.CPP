// ex_13_05.cpp, pag. 282

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double func(double x);

int main(void)
{ int i, j, MF[5][5], m, n;
  int MI[5][5]={ {11, 12, 13, 14, 15}, {21, 22, 23, 24, 25},
                      {31, 32, 33, 34, 35}, {41, 42, 43, 44, 45},
                      {51, 52, 53, 54, 55} };
  double a, b, h, x, y, U[3], V[3];
  FILE *pf1, *pf2;

  clrscr();
//
//  Fisierul binar FILE_01 se deschide in mod scriere,
//           se scrie in el si se inchide
//  Fisierul va contine o inregistrare cu 25 articole,
//  valori de tip int  (elementele unei matrice  5 x 5)
//
  pf1=fopen("FILE_01", "wb");
  if(pf1==NULL) { printf("\n\n The file  FILE_01  can not"
                         " be opened\n"); getch(); exit(1); }
  fwrite(MI, 4, 25, pf1);
  fclose(pf1);
//
// Fisierul binar FILE_01 se deschide în vederea citirii,
//             se citeste si se inchide
//
  pf1=fopen("FILE_01", "rb");
  if(pf1==NULL) { printf("\n\n The file  FILE_01  can not"
                         " be opened\n"); getch(); exit(1); }
  fread(MF, 4, 25, pf1);
  fclose(pf1);
  for(i=0; i<5; i++)
     { printf("\n");
       for(j=0; j<5; j++) printf("%5d", MF[i][j]);
     }
//
//  Fisierul binar FILE_02 se deschide in mod scriere,
//           se scrie in el si se inchide
//
  if((pf2=fopen("FILE_02", "wb"))==NULL)
    { printf("\n\n The file  FILE_02  can not be opened\n");
      getch(); exit(1); }
  printf("\n\n\t a = "); scanf("%le", &a);
  printf("\t b = "); scanf("%le", &b);
  printf("\t h = "); scanf("%le", &h);
  n=(b-a)/h+1;
  fwrite(&n, 4, 1, pf2);
  for(i=0; i<n; i++)
     { U[0]=(double)i; U[1]=x=a+i*h; U[2]=y=func(x);
       printf("\n %4d %10.4lf %14.6le", i, x, y);
       if(i%20==0) getch();
       fwrite(U, 8, 3, pf2);
     }
  fclose(pf2);
//
//  Fisierul binar FILE_02 se deschide in vederea citirii,
//              se citeste si se inchide
//
  if((pf2=fopen("FILE_02", "rb"))==NULL)
    { printf("\n\n The file  FILE_02  can not be opened\n");
      getch(); exit(1); }
  fread(&m, 4, 1, pf2);
  printf("\n");
  for(i=0; i<m; i++)
     { fread(V, 8, 3, pf2);
       printf("\n\t %4d %10.4lf %14.6le",
	       (int)V[0], V[1], V[2]);
       if(i%20==0) getch();
     }
  fclose(pf2);
//
  getch();

  return 0;
}

double func(double x)
{return (log(x*x+1)+2.34*sqrt(pow(x, 4)+20))/(2-sin(x/25.5));}

