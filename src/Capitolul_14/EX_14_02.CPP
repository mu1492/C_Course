// ex_14_02.cpp, pag. 295-297

#include <conio.h>
#include <dos.h>
#include <stdio.h>

int main(void)
{int B, BE, i, T;

textbackground(RED); clrscr();
        // Tot ecranul a devenit o fereastra de culoare RED

window(10, 5,35,20);
for(B=0; B<8; B++)
  {textbackground(B);
   for(T=0; T<16; T++)
     {textcolor(T);cprintf("\n\r Programming in C/C++");
         delay(25);}
  }
        // S-a definit o fereastra a carei culoare este
        // modificata in ciclul exterior iar in interiorul
        // corpului ciclului interior se afiseaza acelasi
        // text cu toate culorile posibile.
        // Se observa ca s-au folosit caracterele  \n  si \r
        // pentru ca textul ce se afiseaza sa inceapa in
        // aceeasi coloana, pe randuri succesive.

textbackground(RED); clrscr(); getch();
        // Tot ecranul a devenit o fereastra de culoare RED

B=LIGHTGRAY; window( 5, 2,30,10); clrscr();
textbackground(B); textcolor(BLUE); getch();
for(i=0; i<55; i++) {cprintf("Programming "); delay(25);}
        // S-a definit o fereastra activa in coltul din
        // stanga sus, culoarea fondului fiind LIGHTGRAY
        // iar culoarea de afisare a textului BLUE (albastru).
        // S-a afisat de 55 de ori cuvantul "Programming ",
        // unul dupa altul, deoarece lipsesc \n si \r ,
        // dupa completarea unui rand trecandu-se la urmatorul.

window(25, 8,50,16); clrscr(); getch();
textbackground(B); textcolor(YELLOW);
for(i=0; i<80; i++) {cprintf("in "); delay(25);}
        // S-a definit o fereastra activa in mijlocul
        // ecranului, culoarea fondului fiind LIGHTGRAY
        // iar culoarea de afisare a textului YELLOW (galben).
        // S-a afisat de 80 de ori cuvantul "in ", unul dupa
        // altul, deoarece lipsesc \n si \r .

window(45,14,70,22); clrscr(); getch();
textbackground(B); textcolor(RED);
for(i=0; i<70; i++) {cprintf("C/C++ "); delay(25);}
        // S-a definit o fereastra activa in coltul din
        // dreapta jos, culoarea fondului fiind LIGHTGRAY
        // iar culoarea de afisare a textului RED (rosu).
        // S-a afisat de 70 de ori cuvantul "C/C++ ",
        // unul dupa altul, deoarece lipsesc \n si \r .

textbackground(RED); getch(); clrscr();
        // Ultima fereastra (fereastra activa) a devenit de
        // culoare RED. Fereastra din dreapta jos a disparut.
textbackground(RED); getch(); window(25, 8,50,16); clrscr();
        // A disparut fereastra din mijloc.
textbackground(RED); getch(); window( 5, 2,30,10); clrscr();
        // A disparut fereastra din stanga sus.
getch();

window( 1, 1,80,25); textbackground(B); textcolor(RED); clrscr();
        // Tot ecranul a devenit de culoare LIGHTGRAY.

gotoxy( 1, 1);
cputs("   \"Hominis mens discendo alitur et cogitando\"\n\r");
cputs("                - Proverb latin - \n\r");
cputs("(Mintea omului se cultiva prin invatatura si gandire)");
        // Incepand din pozitia 1,1 se face afisarea a trei
        // randuri de text.

gotoxy(1,5);
cputs("\"Knowledge is power\" - Francis Bacon");
        // Incepand din pozitia 1,5 se afiseaza un text.

getch();

movetext( 1, 1, 60,6, 15, 15);
        // S-a copiat continutul zonei din ecran determinata
        // de 1,1 si 60,6 intr-o alta zona a ecranului activ
        // care are coltul din stanga sus de coordonate  15,15.

getch(); return 0;
}
