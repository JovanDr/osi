#ifndef DATUM_RODJENJA_H
#define DATUM_RODJENJA_H

class Datum_Rodjenja {
    private:
        int dan;
        int mjesec;
        int godina;
    public:
        Datum_Rodjenja();

        int getDan();
        int getMjesec();
        int getGodina();

        void setDan(int dan);
        void setMjesec(int mjesec);
        void setGodina(int godina);

        bool provjeraDatumaRodjenja(int dan, int mjesec, int godina);
};

#endif