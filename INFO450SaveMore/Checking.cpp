#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Checking.h"
using namespace std;

Checking::Checking() : Account()
{
	fee = 5.00;
}

Checking::Checking(string acctNo, string type, double blnc, int rate) : Account(acctNo, type, blnc, rate)
{
	interestRate = 0;
}

void Checking::CreateAccount()
{
	cout << "Please enter the amount you would like to deposit in your new account: \n" << endl;
	cin >> balance;
	cout << "Your balance is now\n " << balance << endl;
}

void Checking::OrderChecks(double checks, double amount)
{
	checks = (amount - balance) - 15.00;

	cout << "Enter the amount you would like to put on the check: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << checks << " after the transaction" << endl;
}

void Checking::Withdraw(double amount)
{
	balance = (balance - amount) - fee;
	// withdraw amount given including the $5 fee added onto transaction
}

void Checking::Deposit(double amount)
{
	balance = (balance + amount);
}

void Checking::DisplayAccount()
{
	cout << "Enter account number: " << endl;
	cin >> acctNumber;
	cout << "==================================================" << endl;
	cout << "Account Number: " << acctNumber << endl;
	cout << "Account Type: " << acctType << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate applied: " << interestRate << endl;
	cout << "==================================================" << endl;
}
