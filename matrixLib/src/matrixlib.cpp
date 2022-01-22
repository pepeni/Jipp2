//
// Created by Pepeni on 20.10.2021.
//
#include <iostream>
#include "matrixlib.h"
using namespace std;

int ** addMatrix(int ** matrix1, int ** matrix2, int rows, int columns){
    int i,j;
    int ** matrixret = new int * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new int [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]+matrix2[i][j];
        }}
    return matrixret;
}

double ** addMatrix(double ** matrix1, double ** matrix2, int rows, int columns){
    int i,j;
    double ** matrixret = new double * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new double [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]+matrix2[i][j];
        }}
    return matrixret;
}

int ** subtractMatrix(int ** matrix1, int ** matrix2, int rows, int columns){
    int i,j;
    int ** matrixret = new int * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new int [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]-matrix2[i][j];
        }}
    return matrixret;
}

double ** subtractMatrix(double ** matrix1, double ** matrix2, int rows, int columns){
    int i,j;
    double ** matrixret = new double * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new double [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]-matrix2[i][j];
        }}
    return matrixret;
}

double ** multiplyMatrix(double ** matrix1, double ** matrix2, int rowsA, int columnsA, int columnsB){
    int i,j,k;
    double suma;
    double ** matrixret = new double * [rowsA];
    for(i=0;i<rowsA;i++){matrixret[i] = new double [columnsB];}
    for(i=0;i<rowsA;i++){
        for(j=0;j<columnsB;j++) {
            suma=0;
            for(k=0;k<columnsA;k++){suma+=matrix1[i][k]*matrix2[k][j];}
            matrixret[i][j]=suma;
        }}
    return matrixret;
}

int ** multiplyMatrix(int ** matrix1, int ** matrix2, int rowsA, int columnsA, int columnsB){
    int i,j,k, suma;
    int ** matrixret = new int * [rowsA];
    for(i=0;i<rowsA;i++){matrixret[i] = new int [columnsB];}
    for(i=0;i<rowsA;i++){
        for(j=0;j<columnsB;j++) {
            suma=0;
            for(k=0;k<columnsA;k++){suma+=matrix1[i][k]*matrix2[k][j];}
            matrixret[i][j]=suma;
        }}
    return matrixret;
}

int ** multiplyByScalar(int ** matrix1, int rows, int columns, int scalar){
    int i,j;
    int ** matrixret = new int * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new int [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]*scalar;
        }}
    return matrixret;
}

double ** multiplyByScalar(double ** matrix1, int rows, int columns, double scalar){
    int i,j;
    double ** matrixret = new double * [rows];
    for(i=0;i<rows;i++){matrixret[i] = new double [columns];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[i][j]=matrix1[i][j]*scalar;
        }}
    return matrixret;
}

int ** transpozeMatrix(int ** matrix1, int rows, int columns){
    int i,j;
    int ** matrixret = new int * [columns];
    for(i=0;i<columns;i++){matrixret[i] = new int [rows];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[j][i]=matrix1[i][j];
        }}
    return matrixret;
}

double ** transpozeMatrix(double ** matrix1, int rows, int columns){
    int i,j;
    double ** matrixret = new double * [columns];
    for(i=0;i<columns;i++){matrixret[i] = new double [rows];}
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++) {
            matrixret[j][i]=matrix1[i][j];
        }}
    return matrixret;
}

int ** powerMatrix(int ** matrix1, int rows, int columns, unsigned power){
    int i;
    int ** matrixret = matrix1;
    for(i=0;i<power-1;i++){
        matrixret = multiplyMatrix(matrixret,matrix1, rows, columns, rows);
    }
    return matrixret;
}

double ** powerMatrix(double ** matrix1, int rows, int columns, unsigned power){
    int i;
    double ** matrixret = matrix1;
    for(i=0;i<power-1;i++){
        matrixret = multiplyMatrix(matrixret,matrix1, rows, columns, rows);
    }
    return matrixret;
}


int determinantMatrix(int ** matrix1, int rows, int columns){
    int i,j,k,l, result=0, liczba=1;
    for(i=0;i<rows;i++){
        for(j=0,k=0+i,l=0;j<columns;j++,k++,l++) {
            if(k>=columns){k-=columns;}
            if(l>=columns){l-=columns;}
            liczba*=matrix1[k][l];
        }
        result+=liczba;
        liczba=1;
    }
    for(i=0;i<rows;i++){
        for(j=0,k=0+i,l=0;j<columns;j++,k--,l++) {
            if(k<0){k+=columns;}
            if(l>=columns){l-=columns;}
            liczba*=matrix1[k][l];
        }
        result-=liczba;
        liczba=1;
    }
    return result;
}

double determinantMatrix(double ** matrix1, int rows, int columns){
    int i,j,k,l, liczba=1;
    double result=0;
    for(i=0;i<rows;i++){
        for(j=0,k=0+i,l=0+i;j<columns;j++,k++,l++) {
            if(k>=columns){k-=columns;}
            if(l>=columns){l-=columns;}
            liczba*=matrix1[k][l];
        }
        result+=liczba;
        liczba=1;
    }
    for(i=0;i<rows;i++){
        for(j=0,k=0+i,l=0+i;j<columns;j++,k--,l--) {
            if(k<0){k+=columns;}
            if(l<0){l+=columns;}
            liczba*=matrix1[k][l];
        }
        result-=liczba;
        liczba=1;
    }
    return result;
}

bool matrixIsDiagonal(int ** matrix1, int rows, int columns){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(matrix1[i][j]!=0&&i!=j){return false;}
        }}
    return true;
}

bool matrixIsDiagonal(double ** matrix1, int rows, int columns){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(matrix1[i][j]!=0&&i!=j){return false;}
        }}
    return true;
}

void swap(int &a, int &b){
    int pom;
    pom = a;
    a = b;
    b = pom;
}

void swap(double &a, double &b){
    double pom;
    pom = a;
    a = b;
    b = pom;
}

void sortRow(int *tab, int n){
    int i;
    while(n>1){
        for(i=0;i<n-1;i++){
            if(tab[i]>tab[i+1]){swap(tab[i],tab[i+1]);}
        }
        n=n-1;
    }
}

void sortRow(double *tab, int n){
    int i;
    while(n>1){
        for(i=0;i<n-1;i++){
            if(tab[i]>tab[i+1]){swap(tab[i],tab[i+1]);}
        }
    }
}

void sortRowsInMatrix(int ** matrix1, int rows, int columns){
    int i;
    for(i=0;i<rows;i++){
        sortRow(matrix1[i],columns);
    }
}

void sortRowsInMatrix(double ** matrix1, int rows, int columns){
    int i;
    for(i=0;i<rows;i++){
        sortRow(matrix1[i],columns);
    }
}

void help(){
    string doc = """------------Pomoc!------------\n"
                   "Argumenty:\n"
                   "\n"
                   "addMatrix\n"
                   "    po wpisaniu macierzy 1, a nastepnie macierzy 2 dodaje obie macierze do siebie. [A]+[B]\n"
                   "\n"
                   "subtractMatrix\n"
                   "    po wpisaniu macierzy 1, a nastepnie macierzy 2 odejmuje od macierzy 1 macierz 2. [A]-[B]\n"
                   "\n"
                   "multiplyMatrix\n"
                   "    po wpisaniu macierzy 1,liczby kolumn macierzy 2, a nastepnie macierzy 2 mnozy macierz 1 z macierza 2. [A]*[B]\n"
                   "\n"
                   "multiplyByScalar\n"
                   "    po wpisaniu macierzy i skalara przez ktorego mnozymy macierz, mnozy je. [A]*S\n"
                   "\n"
                   "transpozeMatrix\n"
                   "    po wpisaniu macierzy tworzy jej transpozycje [A]^T\n"
                   "\n"
                   "powerMatrix\n"
                   "    podnosi wpisana macierz do wybranej potegi n. [A]^n\n"
                   "\n"
                   "determinantMatrix\n"
                   "    liczy jaki jest wyznacznik wpisanej macierzy\n"
                   "\n"
                   "matrixIsDiagonal\n"
                   "    sprawdza czy wpisana macierz jest diagonalna\n"
                   "\n"
                   "swap\n"
                   "    zmienia dwie wartosci w macierzy miejscami\n"
                   "\n"
                   "sortRow\n"
                   "    sortuje wybrany wiersz w macierzy\n"
                   "\n"
                   "sortRowsInMatrix\n"
                   "    sortuje wszystkie wiersze macierzy\n""";


    cout<<doc<<endl;
}