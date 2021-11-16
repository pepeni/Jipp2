//
// Created by Pepeni on 16.11.2021.
//
#include<Vector.h>
#include<math.h>
#include <iostream>

using namespace std;
Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void print(Vector &vec){
    cout<<vec.x<<", "<<vec.y<<endl;
}

Vector Vector::operator+(const Vector &rhs) const{
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator-(const Vector &rhs) const{
    return {x - rhs.x, y - rhs.y};
}

Vector operator*(Vector v1, Vector v2){
    return{v1.x*v2.x,v1.y*v2.y};
}

bool operator==(Vector v1, Vector v2){
    if(v1.x==v2.x&&v1.y==v2.y){return true;}
    else{return false;}
}

Vector operator*(const int &lhs, Vector v1){
    return {v1.x*lhs, v1.y*lhs};
}

Vector &Vector::operator+=(const Vector &rhs){
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator!(){
    return{-x,-y};
}