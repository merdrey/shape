#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
    Circle(double);
    double area() override;
    double perimeter() override;
private:
    double radius;
};

#endif // CIRCLE_H
