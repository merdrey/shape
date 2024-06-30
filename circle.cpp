#include "circle.h"

Circle::Circle(double rad) {
    radius = rad;
}

double Circle::area() {
    return radius * radius * 3.14;
}

double Circle::perimeter() {
    return 2 * radius * 3.14;
}
