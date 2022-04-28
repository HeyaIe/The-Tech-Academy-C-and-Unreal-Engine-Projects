#include "Shape.h"

Shape::Shape() :
	Shape{ "Null" }
{
}

Shape::Shape(std::string color):
	color{ color }
{
}
