#include "SavingsAccount.h"



SavingsAccount::SavingsAccount(std::string name, double balance, double intRate)
	:Account{ name, balance }, intRate{ intRate } // Delegate parent constructor
{
}

bool SavingsAccount::Deposit(double amount)
{
	amount += amount * (intRate / 100);
	// Invoke parent class method
	return Account::Deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const SavingsAccount& account)
{
	os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.intRate << "%]";
	return os;
}
