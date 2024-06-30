#include <iostream>
#include "circle.h"
#include "rectangle.h"

void printShapeInfo(Shape* shape) {
    std::cout << "area: " << shape->area() << std::endl;
    std::cout << "perimeter: " << shape->perimeter() << std::endl;
}

int main()
{
    Rectangle rect = Rectangle(50, 50);
    Circle circle = Circle(50);
    printShapeInfo(&rect);
    printShapeInfo(&circle);
    return 0;
}
