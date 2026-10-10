// ex_07_12.cpp, pag. 120-121

#include <conio.h>
#include <iostream.h>

int main(void)
{ int a=231, b, c;
  char sir1[] = "Technical University", sir2[50];
  double d=239.09887654e-1, e=239.098e-7, f;
  clrscr();

  cout << " Valoarea lui a = ";
  cout << a;
  cout << "\n Valoarea lui a = " << a ;
  cout << "\n              d = " << d ;
  cout << "\n              f = " << e ;
  cout << "\n b [int]    = ";
  cin >> b;              // Se tasteaza o valoare de tip int: 7890
  cout << " " << b;
  cout << "\n c [int]    = ";
  cin >> c;              // Se tasteaza o valoare de tip int: 0XAA2
  cout << " " << c;
  cout << "\n f [double] = ";
  cin >> f;              // Se tasteaza o valoare de tip double:
                         //               23.56e12
  cout << " " << f;
  cout << "\n Sirul 1 : " << sir1;
  cout << "\n Sirul 2 :\n";
  cin  >> sir2;          // Tastam textul urmator :
                         // Department of Mechanics and Programming
  cout << "\n " << sir2;
  getch(); return 0;
}
