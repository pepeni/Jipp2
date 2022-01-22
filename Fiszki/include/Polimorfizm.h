//
// Created by Pepeni on 21.01.2022.
//

#ifndef JIPP2_POLIMORFIZM_H
#define JIPP2_POLIMORFIZM_H
#include <iostream>
using namespace std;

class Poli1 {
public:

    /**
     * funkcja wyświetla napis "Poli1"
     */
    virtual void hello();

};


class Poli2 : public Poli1{
public:

    /**
     * Funkcja wyświtla napis "Hello"
     */
    void hello();

};

#endif //JIPP2_POLIMORFIZM_H
