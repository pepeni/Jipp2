//
// Created by Pepeni on 26.10.2021.
//
#include<iostream>
using namespace std;
/*
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
}*/

class PolaFigur{
private :
    int a = 0;
    int b = 0;
    int c = 0;
    double r = 0;
    int pole_powierzchni_prostopadloscianu(){
        int wynik = 2*a*b+2*b*c+2*a*c;
        return wynik;
    }
    double objetosc_kuli(){
        double wynik =(4./3)*3.14*r*r*r;
        return wynik;
    }
    void funkcja_kwad(){
        cout<<"f(x) = "<<a<<" x^2 + "<<b<<" x + "<<c<<endl;
    }
public:
    void zmienzmienne(int a1,int b2,int c3){
        a=a1;
        b=b2;
        c=c3;
    }
    void zmienr(double r1){
        r=r1;
    }
    void uruchom(){
        int wynik1;
        double wynik2;
        wynik1=pole_powierzchni_prostopadloscianu();
        wynik2=objetosc_kuli();
        cout<<"pp prostopadl = "<<wynik1<<endl;
        cout<<"objetosc kuli = "<<wynik2<<endl;
        funkcja_kwad();
    }
};

int main(){
    PolaFigur nowyObiekt ;
    int a,b,c;
    double r;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>r;
    nowyObiekt.zmienzmienne(a,b,c);
    nowyObiekt.zmienr(r);
    nowyObiekt.uruchom();
    return 0;
}