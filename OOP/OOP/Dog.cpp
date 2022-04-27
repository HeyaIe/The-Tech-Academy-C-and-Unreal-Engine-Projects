#include <iostream>
using std::cout;
using std::endl;

#include "Dog.h"

Dog::Dog(std::string breed, std::string color, double height, double weight):
	breed{ breed }, color{ color }, height{ height }, weight{ weight }
{

}
Dog::Dog() :
	Dog{"Unknown", "Null", 0.0, 0.0}
{

}

void Dog::Shake()
{
	cout << "Shake" << endl;
}

void Dog::Sit()
{
	cout << "Sit" << endl;
}

void Dog::LayDown()
{
	cout << "Lay down" << endl;
}