#pragma once
#include "Shape.h"
#include <cmath>

class Circle : public Shape {

public:
    Circle(double a) : Shape(a) {}
    virtual double area() const override;
};