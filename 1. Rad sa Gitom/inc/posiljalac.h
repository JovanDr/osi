class Posiljalac{
private:
    // Атрибути потребни за израду метода
    char ime[20];
    char prezime[20];
public:
    Posiljalac();

    // Гетери и сетери
    char *getIme() ;
    char *getPrezime();
    void setIme( char * );
    void setPrezime( char * );
    
    // Метода за провјеру имена пошиљаоца
    void provjeraImena(char*);
    void provjeraPrezimena(char *);
    // Метода за провјеру формата датума рођења

    // Метода за провјеру мјеста пакетомата

    // Метода за провјеру идентификационог кода

};