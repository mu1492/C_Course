// ex_10011.cpp, pag. 194 (varianta I)

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "displ_ab.cpp"
#include "frand100.cpp"
#include "nick.cpp"
#include "v_max.cpp"

int main()
{ double a, b;

nick();
printf("\n a = "); scanf("%le", &a);
printf("\n b = "); scanf("%le", &b);
displ_ab( a, b ) ;
printf("\n\n\t Val. max = %le", v_max( a, b ));
printf("\n\n The random number between 0 and 100 = %d",
       frand100( ));

getch();

return 0;
}
