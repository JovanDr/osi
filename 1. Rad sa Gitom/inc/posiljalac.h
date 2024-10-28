#ifndef POSILJALAC_H
#define POSILJALAC_H

#include "../inc/datum_rodjenja.h"

class Posiljalac{
private:
    // Атрибути потребни за израду метода
    char ime[20];
    char prezime[20];
    Datum_Rodjenja datum;
    char kod[9];

public:
    Posiljalac();

    // Гетери и сетери
    char *getIme() ;
    char *getPrezime();
    char *getKod();
    Datum_Rodjenja getDatum();
    
    void setIme( char * );
    void setPrezime( char * );
    void setKod(char *);
    void setDatum( Datum_Rodjenja );

    // Метода за провјеру имена пошиљаоца
    void provjeraImena(char*);
    void provjeraPrezimena(char *);

    // Метода за провјеру формата датума рођења

    // Метода за провјеру мјеста пакетомата

    // Метода за провјеру идентификационог кода
    bool provjeraKoda(char *);
};

#endif
    