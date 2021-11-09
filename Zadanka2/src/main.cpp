//
// Created by Pepeni on 09.11.2021.
//
#include <iostream>
#include "../include/Pojazd.h"

using namespace std;

int main(){
    Pojazd Bus("12AB4","Plastus",12,"Volvo Duran");
    Bus.zmien(5,"Wojtek Lader");
    Bus.wypisz();
    Bus.wypiszwersje();
    Bus.zaktualizuj_oprogramowanie();
    Bus.wypiszwersje();
    Bus.opublikujNoweOprogramowanie("v4.2");
    Bus.wypiszwersje();
    Bus.zaktualizuj_oprogramowanie();
    Bus.wypiszwersje();

}