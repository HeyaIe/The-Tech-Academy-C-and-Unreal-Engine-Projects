#include "Checking.h"

Checking::~Checking()
{
}

void Checking::Withdraw(double amount)
{
	std::cout << "In Checking::withdraw" << std::endl;
}

void Checking::Print(std::ostream& os) const
{
	os << "Checking display";
}
