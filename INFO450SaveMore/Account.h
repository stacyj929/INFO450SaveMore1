#pragma once
#include <string>
using namespace std;

// Class declaration for bank account object 
class Account
{
protected:
	string acctNumber;
	string acctType;
	double balance;
	int interestRate;

public:
	Account();
	Account(string acctNo, string type, double blnc, int rate);
	virtual void CreateAccount() = 0;
	virtual void Withdraw(double amount);
	virtual void Deposit(double amount);
	virtual void DisplayAccount();
};
