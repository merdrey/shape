#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
    Circle(double rad) {
        radius = rad;
    }
    double area() override {
        return radius * radius * 3.14;
    }
    double perimeter() override {
        return 2 * radius * 3.14;
    }

private:
    double radius;
};

#endif // CIRCLE_H
