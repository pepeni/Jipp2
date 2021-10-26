//
// Created by Pepeni on 26.10.2021.
//
#include<iostream>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    int przebieg;
};

int najnowszy(samochod * tablica,int ilosc_sam){
    int najmn=tablica[0].rok_produkcji, i, indeks=0;
    for(i=0;i<ilosc_sam;i++){
        if(najmn<tablica[i].rok_produkcji){najmn=tablica[i].rok_produkcji;
        indeks=i;}}

        return indeks;
}

int main(){
    samochod samochody[]={{"Ford","Mondeo",2011,"Szybki",432453},{"Dodge","challenger", 1999,"Niebieski", 31425},
                          {"Toyota","Supra",2001,"Fiolet",208763}, {"Lexus","IS 200",2004,"Czarny",546412}};

    for (int i = 0; i < 4; i++)
    {
        cout << samochody[i].marka << "\t" << samochody[i].model << "\t" << samochody[i].rok_produkcji <<    	  "\t" << samochody[i].kolor << "\t"<< samochody[i].przebieg<<"\n";
    }
    int a= najnowszy(samochody,4);
    cout<<samochody[a].rok_produkcji;
    return 0;
}