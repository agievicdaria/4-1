#pragma once

class Shape {
protected:
    double a;
    
public:
    Shape(double a) : a(a) {}
    virtual double area() const = 0;
    virtual ~Shape() {}
};