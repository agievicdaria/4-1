#pragma once
#include "Shape.h"

class Trapeze : public Shape {
private:
    double b;
    double c;

public:
    Trapeze(double a, double b, double c) : Shape(a), b(b), c(c) {}
    virtual double area() const override;
};
