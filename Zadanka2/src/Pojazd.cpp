//
// Created by Pepeni on 09.11.2021.
//

#include "../include/Pojazd.h"


Pojazd::Pojazd(string nr_rej,string nazwa, int ilosc_miejsc, string markaITyp){
    this->nr_rej=nr_rej;
    this->nazwa=nazwa;
    this->ilosc_miejsc=ilosc_miejsc;
    this->markaITyp=markaITyp;
    imieINazw=new string[ilosc_miejsc];
    for(int i=0;i<ilosc_miejsc;i++){
        imieINazw[i]="puste";
    }
}

void Pojazd::opublikujNoweOprogramowanie(string wersja) {
    najnowsza_wersja_oprogramowania=wersja;
}

string Pojazd::najnowsza_wersja_oprogramowania="v2.3";

void Pojazd::wypiszwersje() const{
    cout<<"\n"<<zainstalowana_wersja_oprogramowania<<endl;
}

void Pojazd::zaktualizuj_oprogramowanie(){
    zainstalowana_wersja_oprogramowania=najnowsza_wersja_oprogramowania;
}

void Pojazd::wypisz() const{
    cout <<"\nnr. rejestracyjny: " << nr_rej<<"\nnazwa: "<<nazwa<< "\nilosc miejsc: "<< ilosc_miejsc<<"\nImiona i nazw zajetych miejsc: ";
    for(int i = 0;i<ilosc_miejsc;i++){
        cout<<"\n"<<i<<"-"<<imieINazw[i];
    }
    cout<<"\nmarka i typ: "<<markaITyp;
}

void Pojazd::zmien(int miejsce, string imieinazwisko){
    imieINazw[miejsce]=imieinazwisko;
};

string Pojazd::getname() const{
    return nazwa;
}

string Pojazd::getnr_rejestr() const{
    return nr_rej;
}

string Pojazd::getmarkaityp() const{
    return markaITyp;
}

void Pojazd::setname(string nazwa) {
    this->nazwa=nazwa;
}

void Pojazd::setnr_rejestr(string nr_rej) {
    this->nr_rej=nr_rej;
}

Pojazd::Pojazd(Pojazd &pojazd){
    nr_rej=pojazd.nr_rej;
    nazwa=pojazd.nazwa;
    ilosc_miejsc=pojazd.ilosc_miejsc;
    markaITyp=pojazd.markaITyp;
    for(int i=0;i<ilosc_miejsc;i++){
        imieINazw[i]=pojazd.imieINazw[i];
    }
}

Pojazd::~Pojazd() {
    delete [] imieINazw;
}


