// ex_12_03.cpp, pag. 266

#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct applicant{ char surname[15] ;
                  char name[15] ;
                  double mark;
                } ;

int main()
{ int i, i_max, n;
  double mark, max_mark=0.0;
  char str_char[15];
  struct applicant A[50];

  clrscr();
  printf("\n The number of applicants : "); scanf("%d", &n);

  for(i=1; i<=n; i++)
     { printf("\n %3d  SURNAME : ", i); scanf("%s", str_char);
       strcpy(A[i].surname, str_char);
       printf("      NAME    : "); scanf("%s", str_char);
       strcpy(A[i].name, str_char);
       printf("      The obtained MARK = ");scanf("%le", &mark);
       A[i].mark=mark;
       if(mark>max_mark) { max_mark=mark; i_max=i; }
     }

  for(i=1; i<=n; i++)
     { printf("\n %2d %15s %15s %6.3f",
	      i, A[i].surname, A[i].name, A[i].mark);
       if(i%10==0) getch();
     }

  printf("\n\n The winner is %s %s with %6.3f\n",
	 A[i_max].surname, A[i_max].name, A[i_max].mark);

  getch();

  return 0;
}
