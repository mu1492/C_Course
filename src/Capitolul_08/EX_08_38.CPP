// ex_08_38.cpp, pag. 166-167

#include <conio.h>
#include <math.h>
#include <stdio.h>

#define PLUS '+'
#define MINUS '-'
#define PROD '*'
#define SLASH '/'

int main(void)
{ int i, j, k, O[10];
  double eps=1.e-10, n;
  char blank=' ', S[70], Q[70];

  clrscr();
  for(i=0; i<70; i++) { S[i]=blank; Q[i]=blank; }
  for(i=0; i<=12; i+=2) S[i]='(';
  for(i=20; i<=56; i+=6) S[i]=')';
  S[14]='1'; S[62]='=';
  S[64]='1'; S[65]='1'; S[66]='1';     //   N = 111
//      ***        ***        ***               ***
  for(k=1, i=18; i<=60; i+=6, k++) S[i]='1'+k;
  S[67]=S[68]=S[69]=blank;
  for(i=16; i<=58; i+=6) { S[i]='o'; Q[i]='?'; }
  printf("\n");
  for(i=0; i<67; i++) printf("%c", S[i]);
  printf("\n");
  for(i=0; i<67; i++) printf("%c", Q[i]);
  getch();
  k=1;
  for(O[1]=1; O[1]<5; O[1]++)
   for(O[2]=1; O[2]<5; O[2]++)
    for(O[3]=1; O[3]<5; O[3]++)
     for(O[4]=1; O[4]<5; O[4]++)
      for(O[5]=1; O[5]<5; O[5]++)
       for(O[6]=1; O[6]<5; O[6]++)
        for(O[7]=1; O[7]<5; O[7]++)
         for(O[8]=1; O[8]<5; O[8]++)
           { n=1.0;
             for(i=2; i<10; i++)
               {switch(O[i-1])
		   { case 1: { n+=i; Q[16+6*(i-2)]=PLUS;  } break;
                     case 2: { n-=i; Q[16+6*(i-2)]=MINUS; } break;
                     case 3: { n*=i; Q[16+6*(i-2)]=PROD;  } break;
                     case 4: { n/=i; Q[16+6*(i-2)]=SLASH; } break;
                   }
               }
            if(fabs(n-111)<eps)
//                 ***
              { printf("\n\n Case number %2d\n", k);
                  for(j=0; j<67; j++) printf("%c", S[j]);
                  printf("\n");
                  for(j=0; j<67; j++) printf("%c", Q[j]);
                  k++; getch();
              }
          }

  getch();

  return 0;
}
