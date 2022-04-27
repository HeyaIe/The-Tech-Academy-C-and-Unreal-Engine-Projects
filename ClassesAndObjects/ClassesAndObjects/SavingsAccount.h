#pragma once
#include "Account.h"

class SavingsAccount : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
private:
	static constexpr const char* defName = "Unnamed Savings Account";
	static constexpr double defBalance = 0.0;
	static constexpr double defIntRate = 1.0;
protected:
	double intRate;
public:
	SavingsAccount(std::string name = defName, double balance = defBalance, double intRate = defIntRate);
	
	bool Deposit(double amount);
};

