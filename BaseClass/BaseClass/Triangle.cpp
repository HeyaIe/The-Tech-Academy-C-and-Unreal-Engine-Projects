#include "Triangle.h"

Triangle::Triangle(double base, double height):
    Shape{ "Null" }, base{ base }, height{ height }
{
}

double Triangle::GetArea()
{
    return (base * height) / 2;
}
