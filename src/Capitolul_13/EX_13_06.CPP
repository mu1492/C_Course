// ex_13_06.cpp, pag. 286-288

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct { char  author[40];
	 char  title[65];
	 char  publ_house[35];
	 int   year;
	 int   n_pages;
	 float price_USD;
       } book ;

int main(void)
{ int i, k=0, n, YEAR;
  FILE *pf;

  clrscr();
//
  if((pf=fopen("BIBL_02", "ab"))==NULL)
    { printf("\n\n The file  BIBL_02  can not be opened\n");
      getch(); exit(1); }

  printf("\n The number of titles to be added in file : ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
   {    printf("\n Book number %d\n\n Author [max. 40 char] : ",
                i+1);
        scanf("%s", book.author);
        printf(" Title  [max. 65 char] : ");
        scanf("%s", book.title);
        printf("\t Publishing house [max. 35 char] : ");
        scanf("%s", book.publ_house);
        printf("\t Year [4 digits] : ");
        scanf("%4d", &book.year);
        printf("\t Number of pages : ");
        scanf("%d", &book.n_pages);
        printf("\t Price [USD]     : ");
        scanf("%f", &book.price_USD);
        fwrite(&book, sizeof(book), 1, pf);
    }
//      Fisierul  BIBL_02  cu  n  titluri a fost creat
  fclose(pf);
//      Fisierul  BIBL_02  a fost inchis
  if((pf=fopen("BIBL_02", "rb"))==NULL)
    { printf("\n\n The file BIBL_02 can not be opened\n");
      getch(); exit(1); }
//      Fisierul  BIBL_02  a fost deschis
  printf("\n\t Which is the year do you take interest ?  ");
  scanf("%d", &YEAR);
//
  while( !feof(pf) )
     { fread(&book, sizeof(book), 1, pf);
       if((book.year==YEAR)&&(!feof(pf)))
         { if(k==0)
             printf("\n\n\t The books that have been appeared"
                    " in %d are :", YEAR);
           printf("\n %s\n\t %s\n\t\t%s\n\t\t%d\n\t\t%d"
                  " pages\n\t\t(price - %6.2f USD)",
                    book.author, book.title,   book.publ_house,
                    book.year,   book.n_pages, book.price_USD  );
           getch(); k++;
         }
     }
//
  if(k!=0)
       printf("\n\n\t No other books !\n\n");
  else
       printf("\n\t The file does not contain books appeared "
                "in %4d\n", YEAR);
  getch();
//
  fseek(pf, 0,SEEK_SET);
  printf("\n\n\t The list of authors :\n\n");
  k=0;
  while( !feof(pf))
    {   fread(&book, sizeof(book), 1, pf);
        k++;
        if(!feof(pf))
           printf("\n %4d %s", k, book.author);
    }
  fclose(pf);
//remove("BIBL_02");

  getch();

  return 0;
}
