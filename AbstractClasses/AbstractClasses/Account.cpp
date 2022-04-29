#include "Account.h"

void Account::Withdraw(double amount)
{
	std::cout << "In Account::withdraw" << std::endl;
}

void Account::Print(std::ostream& os) const
{
	os << "Account display";
}