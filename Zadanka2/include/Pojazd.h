//
// Created by Pepeni on 09.11.2021.
//

#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H

#include <iostream>

using namespace std;

class Pojazd {
private:

    string nr_rej;
    string nazwa;
    int ilosc_miejsc;
    string *imieINazw;
    string markaITyp;
    static string najnowsza_wersja_oprogramowania;
    string zainstalowana_wersja_oprogramowania = "v1.0";

public:
    Pojazd(string nr_rej, string nazwa, int ilosc_miejsc, string markaITyp);

    ~Pojazd();

    Pojazd(Pojazd &pojazd);

    void wypisz() const;

    void zmien(int miejsce, string imieinazwisko);

    string getname() const;
    string getnr_rejestr() const;
    string getmarkaityp() const;

    void setname(string nazwa);
    void setnr_rejestr(string nr_rej);

    void wypiszwersje() const;
    void zaktualizuj_oprogramowanie();

    void opublikujNoweOprogramowanie(string wersja);
};

#endif //JIPP2_POJAZD_H
