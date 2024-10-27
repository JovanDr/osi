#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime> // library za trenutno vrijeme
#include "../inc/posiljalac.h"
#include "../inc/datum_rodjenja.h"


// Имплементација метода

Posiljalac::Posiljalac() : ime(""), prezime("") {}

// Гетери и сетери
char *Posiljalac::getIme(){
    return this->ime;
}
char *Posiljalac::getPrezime(){
    return this->prezime;
}
Datum_Rodjenja Posiljalac::getDatum(){
    return this->datum;
}
void Posiljalac::setIme( char *a ){
    strcpy(this->ime, a);
}
void Posiljalac::setPrezime( char *a ){
    strcpy(this->prezime, a);
}
void Posiljalac::setDatum( Datum_Rodjenja x){
    if(x.provjeraDatumaRodjenja(x.getDan(), x.getMjesec(), x.getGodina()) == true){
        datum = x;
        printf("Datum validan!");
    }
}

// Метода за провјеру имена пошиљаоца
void Posiljalac::provjeraImena(char *ime){
    int n = strlen(ime);
    if(strlen(ime) < 20){
        for(; *ime && *ime >= 'A' && *ime <= 'z'; ime++);
        if(!(*ime)){
            ime -= n;
            setIme(ime);
            printf("Ime korisnika je validno!\n");
            return;
        } 
    }
    printf("Ime korisnika nije validno!\n");
}
void Posiljalac::provjeraPrezimena(char *prezime){
    int n = strlen(prezime);
    if(strlen(prezime) < 1){
        for(; *prezime && *prezime >= 'A' && *prezime <= 'z'; prezime++);
        if(!(*prezime)){
            prezime -= n;
            setPrezime(prezime);
            printf("Prezime korisnika je validno!\n");
            return;
        } 
    }
    printf("Prezime korisnika nije validno!\n");
}

// Метода за провјеру формата датума рођења

// Метода за провјеру мјеста пакетомата

// Метода за провјеру идентификационог кода