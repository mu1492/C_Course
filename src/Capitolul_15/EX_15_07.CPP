// ex_15_07.cpp, pag. 320-321

#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

#include "graf_sig.cpp"

void mMrow(int n, double T[], double *min, double *MAX);
double sig(double x, double theta);

int main(void)
{ int i, j=0, k=1, n, nn;
  double a, b, h, P[10], theta=0.15, X[800], x, xmax, xmin,
         Y[800], y, ymax, ymin;

clrscr();
printf("\n\t a = "); scanf("%le", &a); printf("\t b = ");   scanf("%le", &b); printf("\t h = ");   scanf("%le", &h);
P[0]=theta; n=(b-a)/h+1;
if(n>800) k=n/800+1;

        // Se face afisarea valorilor functiei. Dupa afisarea
        // a cate 20 de linii trebuie sa se apese o tasta.
        // Se atribuie valori elementelor sirurilor  X  si  Y.
for(i=0; i<n; i++)
   { x=a+i*h; y=sig(x,theta);
     if(i%20==0)
       { getch();
            printf("\n\n\t Functia sigmoidala   [ \351 = %6.3f ]"
                   "\n\n\t Nr.crt.     x          sig(x,\351)\n", theta);
       }
     printf("\n\t %4d  %10.3f  %15.6le", i, x, y);
     if(i%k==0) { X[j]=x; Y[j]=y; nn=j; j++; }
   }
if(n>800) n=nn;

        // Se determina si se afiseaza valorile minime si maxime
        // ale absciselor si ordonatelor functiei.
xmin=a; xmax=b; mMrow(n,Y,&ymin,&ymax);
printf("\n\n\n Val. min. = %13.6le  val. max. = %13.6le", ymin, ymax);

        // Se apeleaza functia pentru trasarea graficului.
graf_sig(n,X,Y,xmin,xmax,ymin,ymax,P);

getch();

return 0;
}

void mMrow(int n, double T[], double *min, double *MAX)
{ int i;  *min=*MAX=T[0];
  for(i=0; i<n; i++)
     { if( T[i] < *min ) *min=T[i];
       if( T[i] > *MAX ) *MAX=T[i]; }
}

double sig(double x, double theta)
{ return 1/(1+exp(-x+theta)); }
