//
// Created by Pepeni on 20.10.2021.
//

#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H

#include <iostream>
using namespace std;

int ** addMatrix(int ** matrix1, int ** matrix2, int rows, int columns);
double ** addMatrix(double ** matrix1, double ** matrix2, int rows, int columns);
int ** subtractMatrix(int ** matrix1, int ** matrix2, int rows, int columns);
double ** subtractMatrix(double ** matrix1, double ** matrix2, int rows, int columns);
double ** multiplyMatrix(double ** matrix1, double ** matrix2, int rowsA, int columnsA, int columnsB);
int ** multiplyMatrix(int ** matrix1, int ** matrix2, int rowsA, int columnsA, int columnsB);
double ** multiplyMatrix(double ** matrix1, double ** matrix2, int rowsA, int columnsA, int columnsB);
int ** multiplyByScalar(int ** matrix1, int rows, int columns, int scalar);
double ** multiplyByScalar(double ** matrix1, int rows, int columns, double scalar);
int ** transpozeMatrix(int ** matrix1, int rows, int columns);
double ** transpozeMatrix(double ** matrix1, int rows, int columns);
int ** powerMatrix(int ** matrix1, int rows, int columns, unsigned power);
double ** powerMatrix(double ** matrix1, int rows, int columns, unsigned power);
int determinantMatrix(int ** matrix1, int rows, int columns);
double determinantMatrix(double ** matrix1, int rows, int columns);
bool matrixIsDiagonal(int ** matrix1, int rows, int columns);
bool matrixIsDiagonal(double ** matrix1, int rows, int columns);
void swap(int &a, int &b);
void swap(double &a, double &b);
void sortRow(int *tab, int n);
void sortRow(double *tab, int n);
void sortRowsInMatrix(int ** matrix1, int rows, int columns);
void sortRowsInMatrix(double ** matrix1, int rows, int columns);
void help();


#endif //JIPP2_MATRIXLIB_H
