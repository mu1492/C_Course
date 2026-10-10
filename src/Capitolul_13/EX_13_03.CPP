// ex_13_03.cpp, pag. 279

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{int n;
 double x;
 char *str="Programming_in_C";
 FILE *pf;

 clrscr();
 if((pf=fopen("ABC", "w"))==NULL)
   { printf("\n\n\t The file  ABC  cannot be opened !");
     exit(1); }
 printf("\n n [int]    = "); scanf("%d", &n);
 fprintf(stdout,"\n x [double] = "); fscanf(stdin,"%le",&x);
 fprintf(pf,"%d %le %s", n, x, str);
 fclose(pf);
//
 if((pf=fopen("ABC", "r"))==NULL)
   { printf("\n\n\t The file  ABC  cannot be opened !");
     exit(1); }
 fscanf(pf, "%d %le %s", &n, &x, str);
 printf("\n\n %d  %e  %s", n, x, str);
 fclose(pf);
//
 if((pf=fopen("ABC", "r"))==NULL)
   { printf("\n\n\t The file  ABC  cannot be opened !");
     exit(1); }
 fscanf(pf,"%d",&n); fscanf(pf,"%le",&x); fscanf(pf,"%s",str);
 printf("\n\n %d  %e  %s", n, x, str);
 fclose(pf);

 getch();

 return 0;
}
