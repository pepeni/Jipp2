//
// Created by Pepeni on 10.01.2022.
//

#include <iostream>
#include "Fiszki.h"
#include "Program.h"
#include "Polimorfizm.h"

using namespace std;

int main( int argc, char *argv[] ) {

    if ( argc == 2 ) {
        Poli1 *hello = new Poli2();
        hello->hello();
        Program start( argv[1] );
        start.main();

    }

    else{
        cout << "zla liczba argumentow. Jako argument wpisz tylko nazwe zbioru fiszek." << endl;
    }

}