#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double, double);
    double area() override;
    double perimeter() override;
private:
    double width;
    double height;
};
#endif // RECTANGLE_H
