#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../inc/posiljalac.h"
// Имплементација метода

Posiljalac::Posiljalac() : ime(""), prezime(""){}

// Гетери и сетери
char *Posiljalac::getIme(){
    return this->ime;
}
char *Posiljalac::getPrezime(){
    return this->prezime;
}
void Posiljalac::setIme( char *a ){
    strcpy(this->ime, a);
}
void Posiljalac::setPrezime( char *a ){
    strcpy(this->prezime, a);
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