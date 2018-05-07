#include "stdafx.h"
#include <string>
#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
	acctNumber = "";
	acctType = "";
	balance = 0;
	interestRate = 0;
}

// default constructor
// cpp file for class definitions and functions for default account
Account::Account(string acctNo, string type, double blnc, int rate)
{
	acctNumber = acctNo;
	acctType = type;
	balance = blnc;
	interestRate = rate;
}

void Account::Withdraw(double amount)
{
	balance = (balance - amount);
}

void Account::Deposit(double amount)
{
	balance = (balance + amount);
}

void Account::DisplayAccount()
{
	cout << "==================================================" << endl;
	cout << "Account Number: " << acctNumber << endl;
	cout << "Account Type: " << acctType << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate applied: " << interestRate << endl;
	cout << "==================================================" << endl;
}