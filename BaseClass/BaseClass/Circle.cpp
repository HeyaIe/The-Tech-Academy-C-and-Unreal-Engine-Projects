#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(double radius):
	Shape{ "Null" }, radius{ radius }
{
}

double Circle::GetArea()
{
	return M_PI * radius * radius;
}