//
// Created by Pepeni on 16.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H


class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    friend void print(Vector &vec);

    Vector operator+(const Vector &rhs) const;

    Vector operator-(const Vector &rhs) const;

    friend Vector operator*(Vector v1, Vector v2);

    friend bool operator==(Vector v1, Vector v2);

    friend Vector operator*(const int &lhs, Vector v1);

    Vector &operator+=(const Vector &rhs);

    Vector operator!();
};

#endif //JIPP2_VECTOR_H
