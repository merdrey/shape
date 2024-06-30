#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double area() override {
        return width * height;
    }
    double perimeter() override {
        return (width + height) * 2;
    }
private:
    double width;
    double height;
};

#endif // RECTANGLE_H
