//
// Created by Pepeni on 17.10.2021.
//
#include <iostream>
#include "calc.h"

using namespace std;

int add(int a,int b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float volume(float a, float b, float h, float high){
    return ((a+b)/2)*h*high;
}

void help(int error){
    string docs, error1, error2, errormess;
    docs="""Simple calculatur\n"
         "simpleCalc [nazwa dzialania]\n"
         "\n"
         "Dzialania:\n"
         "add [a] [b]\n"
         "    Dodawanie dwoch liczb ([a] i [b]) calkowitych.\n"
         "\n"
         "subtract [a] [b]\n"
         "    Odejmowanie dwoch liczb ([a] - [b]).\n"
         "\n"
         "volume [a] [b] [c] [d]\n"
         "    Oblicznie objetosci graniastoslupa prostego o podstawie prostokata, gdzie [a], [b] to podstawy trapezu, [c] wysokosc podstawy, [d] wysokosc graniastoslupa\n"
         "\n"
         "help\n"
         "    wyswietla te oto pomoc\n""";
    error2 = "Podales zly argument\n";
    error1 = "Zla liczba argumentow\n";
    if (error == 0){errormess="";}
    if (error == 1){errormess=error1;}
    else {errormess=error2;}
    cout<<errormess<<docs<<endl;
}
