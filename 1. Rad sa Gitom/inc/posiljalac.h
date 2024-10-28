class Posiljalac{
private:
    // Атрибути потребни за израду метода
    char ime[20];
    char prezime[20];
    char kod[9];
    char mjesto[4];
public:
    Posiljalac();

    // Гетери и сетери
    char *getIme() ;
    char *getPrezime();
    char *getKod();
    char *getMjesto();
    void setIme( char * );
    void setPrezime( char * );
    void setKod(char *);
    void setMjesto(char *);
    // Метода за провјеру имена пошиљаоца
    void provjeraImena(char*);
    void provjeraPrezimena(char *);
    // Метода за провјеру формата датума рођења

    // Метода за провјеру мјеста пакетомата
    void provjeraMjesta(char *);
    // Метода за провјеру идентификационог кода
    bool provjeraKoda(char *);
};