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
    if(strlen(ime) < 1){
        setIme(ime);
    }
    else{
        printf("Ime korisnika nije validno!\n");
    }
}
void Posiljalac::provjeraPrezimena(char *prezime){
    if(strlen(prezime) < 1){
        setPrezime(prezime);
    }
    else{
        printf("Prezime korisnika nije validno!\n");
    }
}

// Метода за провјеру формата датума рођења

// Метода за провјеру мјеста пакетомата

// Метода за провјеру идентификационог кода