// ex_15_04.cpp, pag. 312-313

#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ int CF=LIGHTGRAY, CD=BLUE, gd=DETECT, gm, x=400, y=205;
  double a=150, b=100, pas=0.5, r, u, ur;
  char str[]="This is a rectangle";

  initgraph(&gd, &gm, " ");
  setbkcolor(CF); setcolor(CD);
  setlinestyle(0,0,1); settextstyle(0,0,1);
  u=-pas;
  do {u+=pas; ur=-u*M_PI/180;
      x=215+a*cos(ur); y=220+b*sin(ur);
  //        Se scrie/deseneaza cu culoarea CD=BLUE
      setcolor(CD); ellipse(215,220,0,360,a,b);
      rectangle(x,y,x+200,y+50); outtextxy(x+25,y+20,str);
      delay(35);
  //        Se scrie/deseneaza cu culoarea CF (a fondului).
      setcolor(CF); ellipse(215,220,0,360,a,b);
      rectangle(x,y,x+200,y+50); outtextxy(x+25,y+20,str);
     }
  while(!kbhit());

  getch();
  closegraph();

  return 0;
}
