// graf_sig.cpp, pag. 321-323

void graf_sig(int np,
	      double TX[],  double TY[],
	      double TXmin, double TXmax,
	      double TYmin, double TYmax,
	      double P[]
	      )
{ int gd=DETECT,gm,i;
  double DX,DY,theta,xD,XO,yD,YO;
  char sirTXmin[50],sirTXmax[50],sirTYmin[50],sirTYmax[50],
       sirtheta[50];

theta = P[0];
sprintf(sirTXmin,"%4.3e",TXmin); sprintf(sirTXmax,"%4.3e",TXmax);
sprintf(sirTYmin,"%4.3e",TYmin); sprintf(sirTYmax,"%4.3e",TYmax);

initgraph(&gd, &gm, " ");
setbkcolor(LIGHTGRAY); settextstyle(0,HORIZ_DIR,1);
settextjustify(LEFT_TEXT,TOP_TEXT); setcolor(BLUE);

// Urmatoarele sase randuri se vor elimina (sau inlocui) in
// cazul reprezentarii unei alte functii.
outtextxy(285,10, "Reprezentarea grafica a functiei sigmoidale");
outtextxy(300,25, "                 1        ");
outtextxy(300,35, "sig(x,\351) = ------------- ,   \351 = ");
outtextxy(300,45, "           1 + exp(-x+\351)");
sprintf(sirtheta,"%4.2f",theta); outtextxy(565,35,sirtheta);
delay(250);

// Se stabileste pozitia pe ecran a axelor de coordonate,
// in functie de valorile minime si maxime ale absciselor
// si ordonatelor.
if(TXmin>=0.0) { XO= 80; DX=TXmax; }
if(TXmax< 0.0) { XO=560; DX=-TXmin; }
if(TXmin*TXmax<0.0)
  { XO=80-480*TXmin/(TXmax-TXmin); DX=TXmax-TXmin; }
if(TYmin>=0.0) { YO=400; DY= TYmax; }
if(TYmax< 0.0) { YO= 80; DY=-TYmin; }
if(TYmin*TYmax<0.0)
  { YO=80+320*TYmax/(TYmax-TYmin); DY=TYmax-TYmin; }

// Se traseaza axa Ox si sageata de la capatul ei.
line(50,YO,590,YO); moveto(590, YO+2); linerel(0,-4);
linerel(10,2); linerel(-10,2); outtextxy(592,YO-12,"x");
delay(250);

//Se traseaza axa Oy si sageata de la capatul ei.
line(XO,50,XO,430); moveto(XO-2,50); linerel(4,0);
linerel(-2,-10); linerel(-2,10); outtextxy(XO+6,40,"y");
delay(250);

outtextxy(XO+5,YO-10,"O"); delay(250);

setcolor(RED);
// Se afiseaza valorile minime si maxime ale abscisei.
xD=XO+TXmin*480/DX; line(xD,YO-2,xD,YO+2);
outtextxy(xD-25,YO+5,sirTXmin);
xD=XO+TXmax*480/DX; line(xD,YO-2,xD,YO+2);
outtextxy(xD-25,YO+5,sirTXmax); delay(250);

//Se afiseaza valorile minime si maxime ale ordonatei.
yD=YO-TYmin*320/DY; line(XO-2,yD,XO+2,yD);
outtextxy(XO-78,yD-8,sirTYmin);
yD=YO-TYmax*320/DY; line(XO-2,yD,XO+2,yD);
outtextxy(XO+4,yD-4,sirTYmax); delay(250);

// Se traseaza graficul functiei, recalculandu-se valorile
// absciselor si ordonatelor, tinand cont de scarile adoptate
// precum si de pozitia pe ecran a originii sistemului de
// coordonate.
for(i=0; i<np; i++)
   { xD=XO+TX[i]*480/DX; yD=YO-TY[i]*320/DY;
     if(i==0) moveto(xD,yD);
     if(i>0) lineto(xD,yD); delay(100);
   }

getch(); closegraph();
}
