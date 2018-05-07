#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Inheritance of Account class & other defined variables/constructors for Savints
class Savings : public Account
{
private:
	double interestRate;
	double fee;

public:
	Savings(string acctNo, string type, double blnc, int rate);
	void CreateAccount();
	void AssessInterest();
	void Withdraw(double amount);
	void Deposit(double amount);
	void DisplayAccount();
};
