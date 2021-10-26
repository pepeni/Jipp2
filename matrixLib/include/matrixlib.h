//
// Created by Pepeni on 20.10.2021.
//

#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
using namespace std;
/**
 * Funkcja dodaje do siebie dwie wprowadzone macierze [C]=[A]+[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rows liczba wierszy macierzy A i B
 * @param columns liczba kolumn macierzy A i B
 * @return zwraca macierz C
 */
int ** addMatrix(int ** matrix1, int ** matrix2, int rows, int columns);
/**
 * Funkcja dodaje do siebie dwie wprowadzone macierze [C]=[A]+[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rows liczba wierszy macierzy A i B
 * @param columns liczba kolumn macierzy A i B
 * @return zwraca macierz C
 */
double ** addMatrix(double ** matrix1, double ** matrix2, int rows, int columns);

/**
 * Funkcja odejmuje do siebie dwie wprowadzone macierze [C]=[A]-[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rows liczba wierszy macierzy A i B
 * @param columns liczba kolumn macierzy A i B
 * @return zwraca macierz C
 */
int ** subtractMatrix(int ** matrix1, int ** matrix2, int rows, int columns);

/**
 * Funkcja odejmuje do siebie dwie wprowadzone macierze [C]=[A]-[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rows liczba wierszy macierzy A i B
 * @param columns liczba kolumn macierzy A i B
 * @return zwraca macierz C
 */
double ** subtractMatrix(double ** matrix1, double ** matrix2, int rows, int columns);

/**
 * Funkcja mnoży dwie wprowadzone macierze [C]=[A]*[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rowsA liczba wierszy macierzy A
 * @param columnsA liczba kolumn macierzy A i liczba wierszy macierzy B
 * @param columnsB liczba kolumn macierzy B
 * @return zwraca macierz C
 */
double ** multiplyMatrix(double ** matrix1, double ** matrix2, int rowsA, int columnsA, int columnsB);

/**
 * Funkcja mnoży dwie wprowadzone macierze [C]=[A]*[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rowsA liczba wierszy macierzy A
 * @param columnsA liczba kolumn macierzy A i liczba wierszy macierzy B
 * @param columnsB liczba kolumn macierzy B
 * @return zwraca macierz C
 */
int ** multiplyMatrix(int ** matrix1, int ** matrix2, int rowsA, int columnsA, int columnsB);

/**
 * Funkcja mnoży dwie wprowadzone macierze [C]=[A]*[B]
 * @param matrix1 Macierz pierwsza [A]
 * @param matrix2 Macierz druga [B]
 * @param rowsA liczba wierszy macierzy A
 * @param columnsA liczba kolumn macierzy A i liczba wierszy macierzy B
 * @param columnsB liczba kolumn macierzy B
 * @return zwraca macierz C
 */
double ** multiplyMatrix(double ** matrix1, double ** matrix2, int rowsA, int columnsA, int columnsB);

/**
 * Funkcja mnoży macierz z skalarem [C]=[A]*S
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @param scalar skalar, przez ktory chcemy przemnozyc macierz S
 * @return zwraca macierz C
 */
int ** multiplyByScalar(int ** matrix1, int rows, int columns, int scalar);

/**
 * Funkcja mnoży macierz z skalarem [C]=[A]*S
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @param scalar skalar, przez ktory chcemy przemnozyc macierz S
 * @return zwraca macierz C
 */
double ** multiplyByScalar(double ** matrix1, int rows, int columns, double scalar);

/**
 * Funkcja transpozycjonuje macierz [C]=[A]^T
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return zwraca macierz C
 */
int ** transpozeMatrix(int ** matrix1, int rows, int columns);

/**
 * Funkcja transpozycjonuje macierz [C]=[A]^T
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return zwraca macierz C
 */
double ** transpozeMatrix(double ** matrix1, int rows, int columns);

/**
 * Funkcja podnosi macierz do wybranej potegi [C]=[A]^n
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @param power liczba do ktorej potegi chcemy podniesc macierz n
 * @return zwraca macierz C
 */
int ** powerMatrix(int ** matrix1, int rows, int columns, unsigned power);

/**
 * Funkcja podnosi macierz do wybranej potegi [C]=[A]^n
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @param power liczba do ktorej potegi chcemy podniesc macierz n
 * @return zwraca macierz C
 */
double ** powerMatrix(double ** matrix1, int rows, int columns, unsigned power);

/**
 * Funkcja liczy wyznacznik macierzy [A]
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return Zwraca wyznacznik macierzy
 */
int determinantMatrix(int ** matrix1, int rows, int columns);

/**
 * Funkcja liczy wyznacznik macierzy [A]
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return Zwraca wyznacznik macierzy
 */
double determinantMatrix(double ** matrix1, int rows, int columns);

/**
 * Funkcja sprawdza, czy macierz jest diagonalna
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return Zwraca true, jesli macierz jest diagonalna, lub false, jesli nie jest
 */
bool matrixIsDiagonal(int ** matrix1, int rows, int columns);

/**
 * Funkcja sprawdza, czy macierz jest diagonalna
 * @param matrix1 Macierz pierwsza [A]
 * @param rows liczba wierszy macierzy A
 * @param columns liczba kolumn macierzy A
 * @return Zwraca true, jesli macierz jest diagonalna, lub false, jesli nie jest
 */
bool matrixIsDiagonal(double ** matrix1, int rows, int columns);

/**
 * Funkcja zamienia wartosciami zmienne podane jako argumenty: a-->b i b-->a
 * @param a pierwsza zmienna ktora chcemy zamienic
 * @param b druga zmienna ktora chcemy zamienic
 */
void swap(int &a, int &b);

/**
 * Funkcja zamienia wartosciami zmienne podane jako argumenty: a-->b i b-->a
 * @param a pierwsza zmienna ktora chcemy zamienic
 * @param b druga zmienna ktora chcemy zamienic
 */
void swap(double &a, double &b);

/**
 * sortuje tablice podana jako argument
 * @param tab tablica ktora ma zostac posortowana
 * @param n liczba elemnetow tablicy
 * @param n liczba elemnetow tablicy
 */
void sortRow(int *tab, int n);
void sortRow(double *tab, int n);

/**
 * sortuje wszystkie wiersze w macierzy
 * @param matrix1 macierz ktora mamy zamiar posortowac
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void sortRowsInMatrix(int ** matrix1, int rows, int columns);

/**
 * sortuje wszystkie wiersze w macierzy
 * @param matrix1 macierz ktora mamy zamiar posortowac
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void sortRowsInMatrix(double ** matrix1, int rows, int columns);

/**
 * zwraca pomoc
 */
void help();


#endif //JIPP2_MATRIXLIB_H
