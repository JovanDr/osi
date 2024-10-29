#include <stdio.h>
#include <stdlib.h>
#include "../inc/datum_rodjenja.h"
#include <string.h>
#include <stdbool.h>
#include "../inc/posiljalac.h"
#include "posiljalac.cpp"
#include "datum_rodjenja.cpp"

// Главни програм
int main()
{
    // Тест
    /*Posiljalac p;
    char a[10] = "Janko";
    char b[10] = "Yankov";
    p.provjeraImena(a);
    p.provjeraPrezimena(b);
    */

    /*
    Posiljalac p;
    Datum_Rodjenja x;
    int dd = 10;
    int mm = 6;
    int gggg = 2007;
    
    if(x.provjeraDatumaRodjenja(dd, mm, gggg)){
        p.setDatum(x);
    } else printf("Datum nije validan!");
    */

   
    /*
    Posiljalac p;
    char mjesto[4] = "tre";
    p.provjeraMjesta(mjesto);
    */
    
    
    /* Posiljalac p;
    char kod[9] = "11532322";
    p.provjeraKoda(kod);
    */
    
    // Кориснички интерфејс
    char ime[20],prezime[20];
    Posiljalac p;
    printf("Brza pošta 'Brzi'\n");
    p.getIme();
    p.getPrezime();
    // prezime i provjera
    printf("Unesite vaše prezime:\n");
    scanf("%s",prezime);
    while(!p.provjeraPrezimena(prezime))
    {
        printf("Vaš unos nije ispravan, pokusajte opet: \n");
        scanf("%s",prezime);
    }
    // ime i provjera
    printf("Unesite vaše ime:\n");
    scanf("%s",ime);
    while(!p.provjeraImena(ime)){
        printf("Vaš unos nije ispravan, pokusajte opet: \n");
        scanf("%s",ime);
    }
    // datum rodj
    int d,m,g;
    Datum_Rodjenja kor;
    kor.getDan();
    kor.getMjesec();
    kor.getGodina();
    do
    {
        printf("Unesite datum reodjenja format xx xx xxxx:\n");
        scanf("%d %d %d",&d,&m,&g); 
    }while(!kor.provjeraDatumaRodjenja(d,m,g));
    //mjesto
    char mjesto[10];
    printf("Unesite mjesto isporuke:\n");
    p.getMjesto();
    do
    {
        scanf("%s",mjesto);
    }while(!p.provjeraMjesta(mjesto));
    // kod
    char kod[10];
    printf("Unesite 8-znakovni kod:\n");
    p.getKod();
    do
    {
        scanf("%s",kod);
    }while(!p.provjeraKoda(kod));
    // test
    printf("\n");
    p.ispis(p.getIme());
    p.ispis(p.getPrezime());
    kor.ispis(kor.getDan(),kor.getMjesec(),kor.getGodina());
    p.ispis(p.getMjesto());
    p.ispis(p.getKod());
    return 0;
}