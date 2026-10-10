// ex_10012.cpp, pag. 195 (varianta II)

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//----------------------------------------------
void displ_ab( double first, double second );
     //  declaratie de functie
int frand100( void );
     // declaratie de functie
void nick( void );
     // declaratie de functie
double v_max( double x, double y );
     // declaratie de functie

//----------------------------------------------
int main(void)
{ double a, b;

nick();
printf("\n a = "); scanf("%le", &a);
printf("\n b = "); scanf("%le", &b);
displ_ab( a, b ) ;
printf("\n\n\t Val. max = %le\n\n", v_max(a, b) );
printf("\n The random number between 0 and 100 = %d",
      frand100( ) );

getch();

return 0;
}

//-----------------------------------------------
void displ_ab( double  first, double second )
{ printf("\n   First value =  %le;  Second value = %le;\n",first,second); }

//-----------------------------------------------
int frand100(void)
{ time_t lt;
  int number;

  srand((unsigned) time(&lt));
  number=rand()%101;

  return number;
}

//---------------------------------------------
void nick ( void )
{ printf("\n\n\t Professor dr. eng. math. Nicolae "
	 "URSU-FISCHER\n\t Department of Mechanics"
	 " and Computer Programming\n\n" ); }

//----------------------------------------------
double v_max ( double x, double y )
{ return ( x>y ? x : y ); }
