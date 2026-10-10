// ex_15_06.cpp, pag. 318

#include <alloc.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main(void)
{ void *bm;
  int CD=RED, CF=LIGHTGRAY, gd=DETECT, gm, x, y;
  double a=150, b=100, pas=5.0, r, u, ur;
  char str[]="This is a rectangle";

initgraph(&gd, &gm, " ");
setbkcolor(CF); setcolor(CD); setlinestyle(0,0,1); settextstyle(0,0,1);
rectangle(215+a,220,415+a,270); outtextxy(240+a,240,str);
bm=malloc(imagesize(215+a,220,415+a,270));
getimage(215+a,220,415+a,270, bm);
u=-pas;
do {cleardevice();
    u+=pas; ur=-u*M_PI/180; x=215+a*cos(ur); y=220+b*sin(ur);
    putimage(x,y,bm,0); ellipse(215,220,0,360,a,b);
    delay(150);
   }
while(!kbhit());

getch();
closegraph();

return 0;
}
