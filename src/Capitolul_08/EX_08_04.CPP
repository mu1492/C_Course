// ex_08_04.cpp, pag. 126

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(void)
{int n;
 double a, b, v;

printf("\n\t\t n = "); scanf("%d", &n);
printf("\t\t a = "); scanf("%le", &a);
printf("\t\t b = "); scanf("%le", &b);
//
if( n==-1 ) v=log(b/a);
else        v=(pow(b,n+1)-pow(a,n+1))/(n+1);
//
printf("\n\n\t Lim. inf. = %8.3f  Lim. sup. = %8.3f"
       "\n\t Functia: pow(x,%d)   Val. integralei = "
       "%le\n\n", a, b, n, v);
getch();

return 0;
}
