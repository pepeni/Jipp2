//
// Created by Pepeni on 30.11.2021.
//

#ifndef JIPP2_KLASY_H
#define JIPP2_KLASY_H
#include <iostream>
using namespace std;

class Figure{
public:
    virtual double getArea() = 0;

};

class Circle : public Figure{
private:
    double radius;
public:
    Circle(double r);
    double getArea();
};

class Rectangle : public Figure{
private:
    double a,b;
public:
    Rectangle(double a, double b);
    double getArea();
};

#endif //JIPP2_KLASY_H
