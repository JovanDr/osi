#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime> // library za trenutno vrijeme
#include <stdbool.h>
#include "../inc/posiljalac.h"
#include "../inc/datum_rodjenja.h"


// Имплементација метода

Posiljalac::Posiljalac() : ime(""), prezime(""), kod(""), mjesto(""){}

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
char *Posiljalac::getKod(){
    return this->kod;
}
char *Posiljalac::getMjesto(){
    return this->mjesto;
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
void Posiljalac :: setKod(char *s){
    strcpy(this->kod, s);
}
void Posiljalac::setMjesto(char *m){
    strcpy(this->mjesto, m);
}
//gligo
        void Posiljalac::ispis(char *a){
        printf("%s\n",a);}
//gligo
// Метода за провјеру имена пошиљаоца
int Posiljalac::provjeraImena(char *ime){
    int n = strlen(ime);
    if(strlen(ime) < 20){
        for(; *ime && *ime >= 'A' && *ime <= 'z'; ime++);
        if(!(*ime)){
            ime -= n;
            setIme(ime);
            return 1;
        }
    }
    return 0;
}
int Posiljalac::provjeraPrezimena(char *prezime){
    int n = strlen(prezime);
    if(strlen(prezime) < 20){
        for(; *prezime && *prezime >= 'A' && *prezime <= 'z'; prezime++);
        if(!(*prezime)){
            prezime -= n;
            setPrezime(prezime);
            return 1;
        } 
    }
    return 0;
}

// Метода за провјеру формата датума рођења

// Метода за провјеру мјеста пакетомата
int Posiljalac::provjeraMjesta(char* mjesto){
    if(strlen(mjesto) > 3 || strlen(mjesto)<1){
        printf("Nije validan unos mjesta, mora imati minimalno 2 slova!\n");
        return 0;
    }
    for(int i=0; i<strlen(mjesto); i++){
        if(mjesto[i] < 'A' || mjesto[i] > 'Z'){
            printf("Oznaka mjesta mora biti iskljucivo velikim latinicnim slovima!\n");
            return 0;
        }
    }
    setMjesto(mjesto);
    printf("Mjesto je validno i postavljeno.\n");
    return 1;
}
// Метода за провјеру идентификационог кода
bool Posiljalac :: provjeraKoda(char *kod){
    int duzinaKoda = strlen(kod);
    if (duzinaKoda != 8 ) { // Provjera dužine koda
        printf("Kod nije validan!\n");
        return false;
    }
    for(int i = 0; i < duzinaKoda; i++){ // Provjera da li su cifre brojevi od 0 do 9
        if( kod[i] < '0' || kod[i] > '9' ) {
            printf("Kod nije validan!\n");
            return false;
        }    
    }
    if(kod[0] != '1' || kod [1] != '1' ) { // Provjera da li su prve dvije cifre 1
        printf("Kod nije validan!\n");
        return false;
    }
    int posljednjaCifra = kod[7] - '0'; 
    if( posljednjaCifra % 2 != 0 ){ // Provjera da li je posljednja cifra parna   
        printf("Kod nije validan!\n");
        return false;
    }
    printf("Kod je validan!\n");
    setKod(kod);
    return true;
}