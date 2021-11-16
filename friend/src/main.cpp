//
// Created by Pepeni on 16.11.2021.
//

#include "Vector.h"
#include<iostream>

using namespace std;

int main(){
    Vector v1(1,2),v2(5,6);
    print(v2);
    print(v1);
    v2+=v1;
    print(v2);
    Vector v3=!v2;
    print(v3);
    Vector v4(1,2);
    bool a=v1==v4;
    cout<<a;
}