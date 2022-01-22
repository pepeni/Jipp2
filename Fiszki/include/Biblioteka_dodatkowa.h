//
// Created by Pepeni on 21.01.2022.
//

#ifndef JIPP2_BIBLIOTEKA_DODATKOWA_H
#define JIPP2_BIBLIOTEKA_DODATKOWA_H

#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Szablon, który sumuje dwie liczby tego samego rodzaju
 * @tparam T Nasz rodzaj liczby
 * @param a liczba a
 * @param b liczba b
 * @return liczba c (= a+b)
 */
template <typename T>
T sum( T a, T b ) {
    return a + b;
}

/**
 * Funkcja przeciążona, zwraca losową liczbę int z przedziału (0,max)
 * @param max maxymalna liczba
 * @return losowa liczba int
 */
int random_number( int max );

/**
 * Funkcja przeciążona, zwraca losową liczbę double z przedziału (0,max)
 * @param max maxymalna liczba
 * @return losowa liczba double
 */
double random_number( double max );

/**
 * Funkcja porównuje oba argumenty ze sobą. Jeśli są identyczne, wypisuje 'Dobrze!', jęśli są inne, wyisuje 'Źle!'
 * @param answer pierwszy argument typu string
 * @param odpowiedz drugi argument typu string
 */
void compare( string answer, string *odpowiedz );

#endif //JIPP2_BIBLIOTEKA_DODATKOWA_H
