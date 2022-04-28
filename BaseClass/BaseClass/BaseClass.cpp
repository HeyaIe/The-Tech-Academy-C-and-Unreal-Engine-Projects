#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
    Rectangle x{5, 2};
    std::cout << x.GetArea() << std::endl;

    Triangle y{ 5, 5 };
    std::cout << y.GetArea() << std::endl;

    Circle z{ 10 };
    std::cout << z.GetArea() << std::endl;

    Shape* w = new Triangle(10, 10);
    std::cout << w->GetArea();

    delete w;
}
