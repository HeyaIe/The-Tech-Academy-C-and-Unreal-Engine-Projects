#include <iostream>
#include "AccountUtil.h"

void Display(const std::vector<Account>& accounts)
{
	std::cout << "====Accounts====" << std::endl;

	for (const Account& acc : accounts)
	{
		std::cout << acc << std::endl;
	}
}
void Deposit(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n====Depositing to Accounts====" << std::endl;
	
	for (Account& acc : accounts)
	{
		if (acc.Deposit(amount))
		{
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		}
		else
		{
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
		}
	}
}
void Withdraw(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n====Withdrawing from Accounts====" << std::endl;

	for (Account& acc : accounts)
	{
		if (acc.Withdraw(amount))
		{
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		}
		else
		{
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
		}
	}
}

void Display(const std::vector<SavingsAccount>& accounts)
{
	std::cout << "====Accounts====" << std::endl;

	for (const SavingsAccount& acc : accounts)
	{
		std::cout << acc << std::endl;
	}
}
void Deposit(std::vector<SavingsAccount>& accounts, double amount)
{
	std::cout << "\n====Depositing to Accounts====" << std::endl;

	for (SavingsAccount& acc : accounts)
	{
		if (acc.Deposit(amount))
		{
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		}
		else
		{
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
		}
	}
}
void Withdraw(std::vector<SavingsAccount>& accounts, double amount)
{
	std::cout << "\n====Withdrawing from Accounts====" << std::endl;

	for (SavingsAccount& acc : accounts)
	{
		if (acc.Withdraw(amount))
		{
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		}
		else
		{
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
		}
	}
}