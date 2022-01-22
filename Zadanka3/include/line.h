//
// Created by Pepeni on 07.12.2021.
//

#ifndef JIPP2_LINE_H
#define JIPP2_LINE_H
#include <iostream>
#include <vector>
#include "Stop.h"

using namespace std;

class Line {
private:
    string number;
    string direction;
    vector<Stop *> stops;

public:
    Line(const string &number, const string &direction);

    void addStop(Stop * stop);

    void print();

};
#endif //JIPP2_LINE_H
