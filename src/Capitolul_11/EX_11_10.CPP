// ex_11_10.cpp, pag. 251-252

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

double fact(int);

int main(void)
{ int i, n;
  long int j, j_max=100000;
  clock_t t;
  double arg_d, arg_r, term, s1, s2, s3, T1, T2, T3;

  printf("\n\n Argument [degree] = "); scanf("%le", &arg_d);
  printf("\n Number of terms   = "); scanf("%d", &n);
  arg_r=arg_d*M_PI/180;
	    //     Metoda  I
  t=clock();
  for(j=1; j<=j_max; j++) s1=sin(arg_r);
  T1=(clock()-t)/CLK_TCK;
	    //     Metoda II
  t=clock();
  for(j=1; j<=j_max; j++)
     { for(s2=0.0,term=arg_r,i=1; i<=n; i++)
	    { s2+=term; term=-term*arg_r*arg_r/2/i/(2*i+1);}
     }
  T2=(clock()-t)/CLK_TCK;
	   //     Metoda III
  t=clock();
  for(j=1; j<=j_max; j++)
     { for(s3=0.0,i=1; i<=n; i++)
	  s3+=pow(-1,i+1)*pow(arg_r,2*i-1)/fact(2*i-1);
     }
  T3=(clock()-t)/CLK_TCK;
  //
  printf("\n\n Argument               = %8.2lf [degree]"
	   "\n Number of terms        = %8d"
	   "\n Number of calculations = %8ld", arg_d, n, j_max);
  printf("\n The computed values :          %11.8f  %11.8f  %11.8f",
	 s1, s2, s3);
  printf("\n The necessary computing time : %11.8f  %11.8f  %11.8f",
	 T1, T2, T3);

  getch();

  return 0;
}

double fact(int n)
{ int i;
  double v=1;

  for(i=1; i<=n; i++) v*=i;

  return v;
}
