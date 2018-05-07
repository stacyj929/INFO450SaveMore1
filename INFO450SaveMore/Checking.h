#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Inheritance of Account class, definitions of specific constructors for Checking
class Checking : public Account
{
private:
	double balance;
	double fee;
public:
	Checking();
	Checking(string acctNo, string type, double blnc, int rate);
	void CreateAccount();
	void Withdraw(double amount);
	void Deposit(double amount);
	void OrderChecks(double checks, double amount);
	void DisplayAccount();
};