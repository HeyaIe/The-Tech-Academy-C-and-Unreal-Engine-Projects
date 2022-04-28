#include "Rectangle.h"


Rectangle::Rectangle(double height, double width):
	Rectangle{ "Null", height, width }
{
}

Rectangle::Rectangle(std::string color, double height, double width):
	Shape{ color }, height{ height }, width{ width }
{
}

double Rectangle::GetArea()
{
	return height * width;
}