//
// Created by Pepeni on 30.11.2021.
//

#include <iostream>
#include "Klasy.h"
using namespace std;

Circle::Circle(double r){
    radius=r;
};

 double Circle::getArea(){
     double area = 2*3.14*r*r;
     cout<<area<<endl
 };

Rectangle::Rectangle(double a, double b){
    this->a=a;
    this->b=b;
};

 double Rectangle::getArea(){
     double area=a*b;
     cout<<area<<endl;
 };