#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime> // library za trenutno vrijeme
#include "../inc/datum_rodjenja.h"

Datum_Rodjenja::Datum_Rodjenja() : dan(0), mjesec(0), godina(0) {}

int Datum_Rodjenja::getDan(){
    return this->dan;
}
int Datum_Rodjenja::getMjesec(){
    return this->mjesec;
}
int Datum_Rodjenja::getGodina(){
    return this->godina;
}

void Datum_Rodjenja::setDan(int d){
    this->dan = d;
}
void Datum_Rodjenja::setMjesec(int m){
    this->mjesec = m;
}
void Datum_Rodjenja::setGodina(int g){
    this->godina = g;
}

bool Datum_Rodjenja::provjeraDatumaRodjenja(int dan, int mjesec, int godina){

    // Odredjivanje trenutnog datuma
    std::time_t t = std::time(nullptr);
    std::tm* trenutniDatum = std::localtime(&t);
    int tdan = trenutniDatum->tm_mday;
    int tmjesec = trenutniDatum->tm_mon + 1;
    int tgodina = trenutniDatum->tm_year + 1900;

    // Uopstena provjera unesenog datuma rodjenja
    if(godina <= 1900 || godina > tgodina-18) return false;
    if(mjesec <= 0 || mjesec > 12) return false;
    if(dan <= 0 || dan > 31) return false;

    // Provjera u slucaju navrsenog punoljetstva
    if(godina == (tgodina - 18) && mjesec > tmjesec) return false;
    else if(godina == (tgodina - 18) && mjesec == tmjesec && dan > tdan) return false;
    
    // Provjera za prestupnu i neprestupnu godinu
    if((!(godina % 4) && godina % 100) || !(godina % 400)){
        if(mjesec == 4 || mjesec == 6 || mjesec == 9 || mjesec == 11){
            if(dan > 30) return false;
        } else if(mjesec == 2) {
            if(dan > 29) return false;
        }
    } else{
        if(mjesec == 4 || mjesec == 6 || mjesec == 9 || mjesec == 11){
            if(dan > 30) return false;
        } else if(mjesec == 2) {
            if(dan > 28) return false;
        }
    }

    setDan(dan);
    setMjesec(mjesec);
    setGodina(godina);
    return true;
}
void Datum_Rodjenja::ispis(int a,int b,int c)
{
    printf("%d.%d.%d\n",a,b,c);
}