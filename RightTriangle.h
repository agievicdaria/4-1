#pragma once
#include "Shape.h"

class RightTriangle : public Shape {
private:
    double c;
public:
    RightTriangle(double a, double c) : Shape(a), c(c) {}
    virtual double area() const override;
};