// ex_04_01.cpp, pag. 62

/*  Program pentru generarea unor sunete
    corespunzatoare notelor din octava a IV-a */

#include <dos.h>
#define DO4 256

main()
{
	sound(DO4);      delay(500); nosound();  //Nota do (IV)
	delay(250);
	sound(DO4*9/8);  delay(500); nosound();  //Nota re
	delay(250);
	sound(DO4*5/4);  delay(500); nosound();  //Nota mi
	delay(250);
	sound(DO4*4/3);  delay(500); nosound();  //Nota fa
	delay(250);
	sound(DO4*3/2);  delay(500); nosound();  //Nota sol
	delay(250);
	sound(DO4*5/3);  delay(500); nosound();  //Nota la
	delay(250);
	sound(DO4*15/8); delay(500); nosound();  //Nota si
	delay(250);
	sound(DO4*2);    delay(500); nosound();  //Nota do (V)
}
