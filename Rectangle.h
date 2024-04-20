#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    double b;

public:
    Rectangle(double a, double b) : Shape(a), b(b) {}
    virtual double area() const override;
};
