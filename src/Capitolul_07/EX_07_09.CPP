// ex_07_09.cpp, pag. 117

#include <conio.h>
#include <stdio.h>

int main(void)
{ int a, b, c, d, e, f, g, h, i, j;
  float u, v, w;
  double x, y;
  char c1, c2, sir1[15], sir2[15];

  clrscr();
  printf("\n\n int a b c\n");
  scanf("%d %d %d", &a, &b, &c);       //12 23 4567
  printf("a = %d  b = %d  c = %d", a, b, c);
  //a = 12  b = 23  c = 4567

  printf("\n\n int d, e, f\n");
  scanf("%d, %d, %d", &d, &e, &f);     //12, 23, 4567
  printf("d = %d  e = %d  f = %d", d, e, f);
  //d = 12  e = 23  f = 4567

  printf("\n\n int (oct.) g, h\n");
  scanf("%o, %o, %o", &g, &h);         //120, 771
  printf("g = %o (oct.) = %d (zec.)  h = %o (oct.) = %d (zec.)",
          g, g, h, h);
  //g = 120 (oct.) = 80 (zec.)  h = 771 (oct.) = 505 (zec.)

  printf("\n\n int i, j (hex.)\n");
  scanf("%X, %X", &i, &j);             //23A, 5FE
  printf("i = %X (hex.) = %d (zec.)  j = %X (hex.) = %d (zec.)",
          i, i, j, j);
  //i = 23A (hex.) = 570 (zec.)  j = 5FE (hex.) = 1534 (zec.)

  printf("\n\n float u, v, w\n");
  scanf("%f, %f, %f", &u, &v, &w);     //32.89, -90.008, 1678.8
  printf("u = %e  v = %e  w = %e", u, v, w);
  //u = 3.289000e+01  v = -9.000800e+01  w = 1.678800e+03

  printf("\n\n double x, y\n");
  scanf("%le, %le", &x, &y);           //12.005, 90.09e-12
  printf("x = %e  y = %e", x, y);
  //x = 1.200500e+01  y = 9.009000e-11

  printf("\n\n sir1 sir2\n");          //Limbajul C/C++
  scanf("%s", sir1);
  scanf("%s", sir2);
  printf("\n%s", sir1);
  printf("\n%s", sir2);
  //Limbajul
  //C/C++

  getch();

  return 0;
}
