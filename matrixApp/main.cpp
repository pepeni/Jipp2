//
// Created by Pepeni on 21.10.2021.
//

#include <iostream>
#include "matrixlib.h"
using namespace std;

int ** matrix(int rows, int columns);
double ** matrix(int rows, int columns, int dod);

int main(int argc, char* argv[]){
    bool start=false, addMatrixb=false, subtractMatrixb=false, multiplyMatrixb=false, multiplyByScalarb=false, transpozeMatrixb=false, powerMatrixb=false, determinantMatrixb=false, matrixIsDiagonalb=false, swapb=false, sortRowb=false, sortRowsInMatrixb=false;
    string argument;
    int wybor;
    cout<<"Wybierz 1 jesli chcesz uzywac macierzy typu int, lub 2 jesli macierzy typu double";
    cin>>wybor;
    if (wybor==1){
        if (argc>1){
            argument = argv[1];
            if (argument=="addMatrix"){start=true;addMatrixb=true;}
            else if (argument=="subtractMatrix"){start=true;subtractMatrixb=true;}
            else if (argument=="1"){start=true;multiplyMatrixb=true;}
            else if (argument=="multiplyByScalar"){start=true;multiplyByScalarb=true;}
            else if (argument=="transpozeMatrix"){start=true;transpozeMatrixb=true;}
            else if (argument=="powerMatrix"){start=true;powerMatrixb=true;}
            else if (argument=="determinantMatrix"){start=true;determinantMatrixb=true;}
            else if (argument=="matrixIsDiagonal"){start=true;matrixIsDiagonalb=true;}
            else if (argument=="swap"){start=true;swapb=true;}
            else if (argument=="sortRow"){start=true;sortRowb=true;}
            else if (argument=="sortRowsInMatrix"){start=true;sortRowsInMatrixb=true;}

            if (start==true){
                int rows=0, columns=0;

                cout<<"\nwprowadz liczbe wierszy: ";
                cin>>rows;
                cout<<"\nwprowadz liczbe kolumn: ";
                cin>>columns;

                int ** matrix1 = matrix(rows, columns);
                int ** matrixresult;

                if(addMatrixb==true){
                    int ** matrix2 = matrix(rows, columns);
                    matrixresult = addMatrix( matrix1, matrix2, rows, columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(subtractMatrixb==true){
                    int ** matrix2 = matrix(rows, columns);
                    matrixresult = subtractMatrix( matrix1, matrix2, rows, columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(multiplyMatrixb==true){
                    int columns2;
                    cout<<"\nwpisz liczbe kolumn macierzy 2: ";
                    cin>>columns2;
                    int ** matrix2 = matrix(columns, columns2);
                    matrixresult = multiplyMatrix( matrix1, matrix2, rows, columns,columns2);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns2;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(multiplyByScalarb==true){
                    int scalar;
                    cout<<"\nwpisz skalar, przez ktory bedzie mnozona macierz: ";
                    cin>>scalar;
                    matrixresult = multiplyByScalar( matrix1, rows, columns,scalar);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(transpozeMatrixb==true){
                    matrixresult = transpozeMatrix( matrix1, rows, columns);
                    int i,j;
                    for(i=0;i<columns;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<rows;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(powerMatrixb==true){
                    unsigned power;
                    cout<<"\ndo ktorej potegi chcesz pomnoiozyc macierz?: ";
                    cin>>power;
                    matrixresult = powerMatrix( matrix1, rows, columns,power);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(determinantMatrixb==true){
                    int result;
                    result=determinantMatrix(matrix1,rows,columns);
                    cout<<result<<" ";
                        }

                else if(matrixIsDiagonalb==true){
                    bool result;
                    result = matrixIsDiagonal(matrix1,rows,columns);
                    if(result){cout<<"\nTak! macierz jest diagonalna";}
                    else{cout<<"\nNie! macierz nie jest diagonalna";}
                }

                else if(swapb==true){
                    int x1,x2,y1,y2;
                    cout<<"\nwpisz nr. wiersza w ktorym znajduje sie zmienna1 ktora chcesz zamienic (wiersze rozpoczynaja sie od 0): ";
                    cin>>y1;
                    cout<<"\nwpisz nr. kolumny w ktorym znajduje sie zmienna1 ktora chcesz zamienic (kolumny rozpoczynaja sie od 0): ";
                    cin>>x1;
                    cout<<"\nwpisz nr. wiersza w ktorym znajduje sie zmienna2 ktora chcesz zamienic (wiersze rozpoczynaja sie od 0): ";
                    cin>>y2;
                    cout<<"\nwpisz nr. kolumny w ktorym znajduje sie zmienna2 ktora chcesz zamienic (kolumny rozpoczynaja sie od 0): ";
                    cin>>x2;

                    swap(matrix1[y1][x1],matrix1[y2][x2]);

                    cout<<"matrix["<<y1<<"]["<<x1<<"] = "<<matrix1[y1][x1]<<endl;
                    cout<<"matrix["<<y2<<"]["<<x2<<"] = "<<matrix1[y2][x2]<<endl;
                }

                else if(sortRowb==true){
                    int y1;
                    cout<<"\nwpisz nr. wiersza ktory chcesz posortowac (wiersze rozpoczynaja sie od 0): ";
                    cin>>y1;
                    sortRow(matrix1[y1],columns);
                    cout<<"matrix["<<y1<<"] = ";
                    for(int i=0;i<columns;i++){cout<<matrix1[y1][i]<<" ";}
                }

                else if(sortRowsInMatrixb==true){
                    sortRowsInMatrix(matrix1,rows,columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrix1[i][j]<<" ";
                        }}
                }
            }
            else{help();}
        }

        else{help();}}

    else if(wybor==2){
        if (argc>1){
            argument = argv[1];
            if (argument=="addMatrix"){start=true;addMatrixb=true;}
            else if (argument=="subtractMatrix"){start=true;subtractMatrixb=true;}
            else if (argument=="multiplyMatrix"){start=true;multiplyMatrixb=true;}
            else if (argument=="multiplyByScalar"){start=true;multiplyByScalarb=true;}
            else if (argument=="transpozeMatrix"){start=true;transpozeMatrixb=true;}
            else if (argument=="powerMatrix"){start=true;powerMatrixb=true;}
            else if (argument=="determinantMatrix"){start=true;determinantMatrixb=true;}
            else if (argument=="matrixIsDiagonal"){start=true;matrixIsDiagonalb=true;}
            else if (argument=="swap"){start=true;swapb=true;}
            else if (argument=="sortRow"){start=true;sortRowb=true;}
            else if (argument=="sortRowsInMatrix"){start=true;sortRowsInMatrixb=true;}

            if (start==true){
                int rows=0, columns=0;


                cout<<"\nwprowadz liczbe wierszy: ";
                cin>>rows;
                cout<<"\nwprowadz liczbe kolumn: ";
                cin>>columns;

                double ** matrix1 = matrix(rows, columns, 2);
                double ** matrixresult;

                if(addMatrixb==true){
                    double ** matrix2 = matrix(rows, columns,2);
                    matrixresult = addMatrix( matrix1, matrix2, rows, columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(subtractMatrixb==true){
                    double ** matrix2 = matrix(rows, columns,2);
                    matrixresult = subtractMatrix( matrix1, matrix2, rows, columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(multiplyMatrixb==true){
                    int columns2;
                    cout<<"\nwpisz liczbe kolumn macierzy 2: ";
                    cin>>columns2;
                    double ** matrix2 = matrix(columns, columns2,2);
                    matrixresult = multiplyMatrix( matrix1, matrix2, rows, columns,columns2);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns2;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(multiplyByScalarb==true){
                    int scalar;
                    cout<<"\nwpisz skalar, przez ktory bedzie mnozona macierz: ";
                    cin>>scalar;
                    matrixresult = multiplyByScalar( matrix1, rows, columns,scalar);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(transpozeMatrixb==true){
                    matrixresult = transpozeMatrix( matrix1, rows, columns);
                    int i,j;
                    for(i=0;i<columns;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<rows;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(powerMatrixb==true){
                    unsigned power;
                    cout<<"\ndo ktorej potegi chcesz pomnoiozyc macierz?: ";
                    cin>>power;
                    matrixresult = powerMatrix( matrix1, rows, columns,power);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrixresult[i][j]<<" ";
                        }}}

                else if(determinantMatrixb==true){
                    int result;
                    result=determinantMatrix(matrix1,rows,columns);
                    cout<<result<<" ";
                }

                else if(matrixIsDiagonalb==true){
                    bool result;
                    result = matrixIsDiagonal(matrix1,rows,columns);
                    if(result){cout<<"\nTak! macierz jest diagonalna";}
                    else{cout<<"\nNie! macierz nie jest diagonalna";}
                }

                else if(swapb==true){
                    int x1,x2,y1,y2;
                    cout<<"\nwpisz nr. wiersza w ktorym znajduje sie zmienna1 ktora chcesz zamienic (wiersze rozpoczynaja sie od 0): ";
                    cin>>y1;
                    cout<<"\nwpisz nr. kolumny w ktorym znajduje sie zmienna1 ktora chcesz zamienic (kolumny rozpoczynaja sie od 0): ";
                    cin>>x1;
                    cout<<"\nwpisz nr. wiersza w ktorym znajduje sie zmienna2 ktora chcesz zamienic (wiersze rozpoczynaja sie od 0): ";
                    cin>>y2;
                    cout<<"\nwpisz nr. kolumny w ktorym znajduje sie zmienna2 ktora chcesz zamienic (kolumny rozpoczynaja sie od 0): ";
                    cin>>x2;

                    swap(matrix1[y1][x1],matrix1[y2][x2]);

                    cout<<"matrix["<<y1<<"]["<<x1<<"] = "<<matrix1[y1][x1]<<endl;
                    cout<<"matrix["<<y2<<"]["<<x2<<"] = "<<matrix1[y2][x2]<<endl;
                }

                else if(sortRowb==true){
                    int y1;
                    cout<<"\nwpisz nr. wiersza ktory chcesz posortowac (wiersze rozpoczynaja sie od 0): ";
                    cin>>y1;
                    sortRow(matrix1[y1],columns);
                    cout<<"matrix["<<y1<<"] = ";
                    for(int i=0;i<columns;i++){cout<<matrix1[y1][i]<<" ";}
                }

                else if(sortRowsInMatrixb==true){
                    sortRowsInMatrix(matrix1,rows,columns);
                    int i,j;
                    for(i=0;i<rows;i++){
                        cout<<"\n"<<endl;
                        for(j=0;j<columns;j++){
                            cout<<matrix1[i][j]<<" ";
                        }}
                }
            }
            else{help();}
        }

        else{help();}}
}

int ** matrix(int rows, int columns){
    int ** matrix1 = new int * [rows];
    int i,j;
    for(i=0;i<rows;i++){matrix1[i] = new int [columns];}
    cout<<"\nwpisz macierz wierszami\n";
    for(i=0;i<rows;i++){
        cout<<"rzad: "<<i+1<<endl;
        for(j=0;j<columns;j++) {
            while(!(cin >> matrix1[i][j]))
            {
                cout<<"Musisz wprowadzic liczbe calkowita. wpisz te liczbe jeszcze raz: ";
                cin.clear();
                cin.sync();
            }}}
    return matrix1;
}

double ** matrix(int rows, int columns, int dod){
    double ** matrix1 = new double * [rows];
    int i,j;
    for(i=0;i<rows;i++){matrix1[i] = new double [columns];}
    cout<<"\nwpisz macierz wierszami\n";
    for(i=0;i<rows;i++){
        cout<<"rzad: "<<i+1<<endl;
        for(j=0;j<columns;j++) {
            while(!(cin >> matrix1[i][j]))
            {
                cout<<"Musisz wprowadzic liczbe calkowita. wpisz te liczbe jeszcze raz: ";
                cin.clear();
                cin.sync();
            }}}
    return matrix1;
}
