//
// Created by Pepeni on 21.01.2022.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Biblioteka_dodatkowa.h"

using namespace std;


int random_number( int max ) {

    srand ( time( NULL ) );

    int rand_numb = rand() % max;

    return rand_numb;
}

double random_number( double max ) {

    srand (time(NULL));

    double rand_numb = (  rand() % (int)( max*1000 ) ) / 1000.;

    return rand_numb;

}


void compare( string answer, string *odpowiedz ) {

    if( *odpowiedz == answer ) {
        cout << "\nDobrze!" << endl;
    }

    else{
        cout << "\nZle!" << endl;
    }

}