// ex_15_02.cpp, pag. 306-307

#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int gd=DETECT, gm,i;
  double a, nc, r, ug, ur, x, xO=60, y, yO=298;

r=0;
clrscr();
while(r<10.0||r>85.0)
  { printf("\n\t The radius of the circle\n"
             "\n\t\t  r [10 ~ 85] = "); scanf("%le", &r); }
        // Se introduce valoarea razei cercului care va descrie
// curba cicloida normala.

initgraph(&gd, &gm, " ");
        // S-a initializat modul grafic.

setbkcolor(LIGHTGRAY); setcolor(BLUE);
        // S-au setat culorile de fond si de desenare.

setlinestyle(0,0,3);
rectangle(10,10,629,469); line(50,300,600,300);
        // S-a stabilit tipul liniei (continua si cu grosimea de trei
        // pixeli).
// S-a trasat un chenar dreptunghiular, la marginea ecranului.
        // S-a trasat o linie orizontala.

setlinestyle(0,0,1); setfillstyle(3,BLUE);
        // S-a modificat tipul liniei (continua si subtire).
        // S-a stabilit tipul hasurii (linii subtiri, inclinate la
// 45 grade).

bar(50,303,600,320); floodfill(200, 315, BLUE);
        // S-a definit un domeniu dreptunghiular si s-a hasurat.

setcolor(RED);  // S-a schimbat culoarea de desenare.
nc=540/2/M_PI/r;
        // nc reprezinta numarul de rostogoliri ale cercului.

for(ug=0; ug<360*nc; ug++)
   { ur=ug*M_PI/180;
     x=xO+r*(ur-sin(ur)); y=yO-r*(1-cos(ur));
     if(ug==0) { moveto(x,y); putpixel(x, y, RED);}
     lineto(x,y); delay(5);
   }
/* In ciclu se calculeaza coordonatele punctelor cicloidei
   cu formulele:
              xC = r*[u-sin(u)];
              yC = r*[1-cos(u)];
   si se tine cont ca  xC  trebuie adaugat la xO, care este
   abscisa originii sistemului de coordonate iar  yC  trebuie
   scazut din  yO (ordonata originii) deoarece pe ecran axa
   y  este cu sensul in jos.
   Primul punct al graficului (cand u=0) s-a realizat cu
   functiile  moveto  si  putpixel iar urmatoarele cu linerel.
   In calculul valorii in radiani a unghiului de rostogolire
   ur  s-a folosit constanta M_PI care are valoarea lui
   pi=3.1415926...                                       */
getch();
closegraph();
        // S-a inchis modul grafic.
return 0; }
