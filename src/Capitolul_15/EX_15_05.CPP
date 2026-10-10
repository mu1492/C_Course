// ex_15_05.cpp, pag. 314-316

#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int CF=LIGHTGRAY, gd=DETECT, gm, i, j, np;
  double a,pasg=1.5, phig, phir, psir, R, r, xC[400],
         xO=320, xP[400], yC[400], yO=240, yP[400];
  char *str1="x", *str2="y", *str3="R = ", *str4="r = ",
       *str5= "phi_g = ", *str6="x    = ", *str7="y    = ",
       *str8="a = ", str_R[50], str_r[50], str_a[50],
       str_u[50], str_x[50], str_y[50];

clrscr();
R=r=a=-1;
while(R<0||R>150)
  { printf("\n\t  Raza cercului fix  R  [ 0 < R < 150.00 ] = ");
    scanf("%le",&R); }
while(r<0||r>0.5*(210-R))
  { printf("\t Raza cercului mobil r  [ 0 < r < %6.2f ] = ",
	   0.5*(210-R)); scanf("%le",&r); }

while(a<0||a>220-R-r)
  { printf("\t Dist. de la centrul cercului mobil la punct"
	   "  a  [0<a<%6.2f] = ",220-R-r); scanf("%le",&a); }
//  S-au introdus valorile numerice care definesc curba de
//  tip epicicloida, respectandu-se limitarile impuse.

sprintf(str_R,"%6.2f",R); sprintf(str_r,"%6.2f",r);
sprintf(str_a,"%6.2f",a); np=360/pasg+1;

for(phig=0.0,i=0; phig<=360; phig+=pasg,i++)
   { phir=phig*M_PI/180; psir=R/r*phir;
     xC[i]=xO+(R+r)*cos(phir); yC[i]=yO-(R+r)*sin(phir);
     xP[i]=xO+(R+r)*cos(phir)+ a*cos(M_PI-psir-phir);
     yP[i]=yO-(R+r)*sin(phir)+ a*sin(M_PI-psir-phir);
   }
// S-au determinat coordonatele centrului C ale cercului
// mobil si coordonatele punctului P care descrie epicicloida.

initgraph(&gd, &gm, " ");
setbkcolor(CF); setlinestyle(0,0,1); setcolor(BLUE);
outtextxy(10,10,str3); outtextxy(55,10,str_R);
outtextxy(10,20,str4); outtextxy(55,20,str_r);
outtextxy(10,30,str8); outtextxy(55,30,str_a);
outtextxy(20,50,str5); outtextxy(20,60,str6);
outtextxy(20,70,str7);
outtextxy(350, 440, "Generarea unei epicicloide");
//  S-a facut afisarea unor siruri de caractere care nu se
//  vor modifica (cu culoarea BLUE).

for(i=1; i<=np; i++)
   { setcolor(BLUE); line(100,yO,540,yO);
     moveto(540,yO+3); linerel(12,-3); linerel(-12,-3);
     linerel(0,6); outtextxy(540,yO+4,str1); line(xO,20,xO,460);
     moveto(xO+3,20); linerel(-6,0); linerel(3,-12);
     linerel(3,12); outtextxy(xO+6,13,str2);
     circle(xO,yO,R-1); circle(xO,yO,2); line(xO,yO,xC[i],yC[i]);
     circle(xC[i],yC[i],2);
     setcolor(RED); circle(xC[i],yC[i],r);
     line(xC[i],yC[i],xP[i],yP[i]); circle(xP[i],yP[i],2);
     phig=i*pasg; sprintf(str_u,"%7.2f",phig);
     outtextxy(80,50,str_u); sprintf(str_x,"%7.2f",xP[i]-xO);
     outtextxy(80,60,str_x); sprintf(str_y,"%7.2f",yO-yP[i]);
     outtextxy(80,70,str_y);

     for(j=1; j<=i; j++)line(xP[j-1],yP[j-1],xP[j],yP[j]);
     delay(100);
     if(i==np-1) break;
//  Cu culorile BLUE si RED s-a facut afisarea unor texte
//  si desenarea unor elemente care fie sunt mobile fie se
//  vor "sterge" ca urmare a deplasarii unor figuri pe ecran.
//  In cadrul ultimului ciclu s-a facut redesenarea portiunii
//  de epicicloida, anterior desenata si care a fost partial
//  stearsa ca urmare a deplasarii cercului mobil si a
//  segmentului legat de acesta.

     setcolor(CF); line(100,yO,540,yO);  moveto(540,yO+3);
     linerel(12,-3); linerel(-12,-3); linerel(0,6);
     line(xO,20,xO,460); moveto(xO+3,20); linerel(-6,0);
     linerel(3,-12); linerel(3,12); circle(xO,yO,R-1);
     circle(xO,yO,2); line(xO,yO,xC[i],yC[i]);
     circle(xC[i],yC[i],2); circle(xC[i],yC[i],r);
     line(xC[i],yC[i],xP[i],yP[i]); circle(xP[i],yP[i],2);
     outtextxy(540,yO+4,str1); outtextxy(xO+6,13,str2);
     outtextxy(80,50,str_u); outtextxy(80,60,str_x);
     outtextxy(80,70,str_y);
//  S-a facut desenarea cu culoarea de fond a tuturor
//  elementelor mobile de pe ecran precum si a textelor
//  care se modifica.

   }
getch();
closegraph();

return 0;
}
