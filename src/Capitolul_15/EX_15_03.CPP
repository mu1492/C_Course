// ex_15_03.cpp, pag. 309-311

#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int gd=DETECT, gm,i, np;
  char str1[]="The cycloid", str2[]="The radius of the circle = ",
       str3[]="angle = ", str4[]="x     = ",
       str5[]="y     = ", *str_r, *str_ug, *str_x, *str_y;
    // Se declara iar unele siruri care se vor afisa se
    // initializeaza.

double a,nc,pasg,r,ug,ur,x,x1,x2,xO=60,y,y1,y2,yO=298;

r=0;
clrscr();
while(r<10.0||r>85.0)
  {printf("\n\t The radius of the circle\n\n\t\t  r [10 ~ 85] = ");
   scanf("%le", &r); }
sprintf(str_r, "%7.3f", r);
// Sirul str_r va contine valoarea numerica a razei r
// a cercului.

initgraph(&gd, &gm, " ");
setbkcolor(LIGHTGRAY); setcolor(BLUE); setlinestyle(0,0,3);
rectangle(10,10,629,469); line(50,300,600,300);
setlinestyle(0,0,1); setfillstyle(3,BLUE);
bar(50,303,600,320); floodfill(200,315,BLUE);
settextstyle(0, 0, 5);
// Se stabileste ca textele care urmeaza se vor afisa pe
// orizontala, cu fonturi de marimea 5.

settextjustify(LEFT_TEXT, TOP_TEXT);
// Se stabileste modul de afisare al textelor care urmeaza.

outtextxy(100, 20, str1);
// Se afiseaza cu fonturi de marime 5 sirul de caractere
// continut in str1: "The cycloid".
// Culoarea de afisare este BLUE.

settextstyle(0,0,1);
// Se stabileste ca textele care urmeaza se vor afisa pe
// orizontala cu fonturi de marimea 1.

outtextxy(50, 85,str2); outtextxy(250,85,str_r);
outtextxy(50,100,str3); outtextxy(50,110,str4);
outtextxy(50,120,str5);
// Se afiseaza continutul sirurilor de caractere str2,
// str_r, str3, str4, str5. Culoarea de afisare este BLUE.

nc=540/2/M_PI/r; pasg=2.5; np=360*nc/pasg;
for(i=0; i<=np; i++)
   { ug=i*pasg;
     ur=ug*M_PI/180;  sprintf(str_ug,"%8.3f",ug);
     x=r*(ur-sin(ur));sprintf(str_x, "%8.3f", x);
     y=r*( 1-cos(ur));sprintf(str_y, "%8.3f", y);
// Sirurile str_ug, str_x  si  str_y  vor contine valorile
// numerice curente ale unghiului de rotire ale cercului si
// ale coordonatelor punctului cicloidei.

     x=xO+x; y=yO-y;
     if(ug==0) { x1=x; y1=y;}
     setcolor(RED);
     line(x1,y1,x,y); x1=x; y1=y;
     outtextxy(110,100,str_ug); outtextxy(110,110,str_x);
     outtextxy(110,120,str_y);
// S-au afisat cu culoare RED valorile curente ale unghiului de
// rotatie ug al cercului care se rostogoleste si ale abscisei
// x si ordonatei y ale punctului care genereaza cicloida.

     delay(50);
     if(i==np) break;
     setcolor(LIGHTGRAY);
     outtextxy(110,100,str_ug);
     outtextxy(110,110,str_x);
     outtextxy(110,120,str_y);
// Se sterge ceea ce s-a afisat cu culoarea  RED deoarece
// peste afisarea anterioara se face afisarea acelorasi
// informatii utilizand culoarea fondului.

   }
// Ciclul este condus de variabila intreaga  i (nr. de
// ordine al punctului curent) iar  pentru trasarea unei
// portiuni din cicloida s-a folosit functia  line.

getch();
closegraph();

return 0;
}
