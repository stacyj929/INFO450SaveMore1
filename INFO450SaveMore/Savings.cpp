#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"
using namespace std;

Savings::Savings(string acctNo, string type, double blnc, int rate) : Account(acctNo, type, blnc, rate)
{
	fee = 2.00;
	balance = blnc;

}

void Savings::CreateAccount()
{
	cout << "Please enter the amount you would like to deposit in your new account: \n" << endl;
	cin >> balance;
	cout << "Your balance is now\n " << balance << endl;

}

void Savings::AssessInterest()
{
	// Interest rate calculations if account is at $10000, above or below
	if (balance <= 10000)
	{
		interestRate = ((0.01 / 12) * balance);
		balance = (interestRate + balance);
	}

	else if (balance >= 10000)
	{
		interestRate = ((0.02 / 12) * balance);
		balance = (interestRate + balance);
	}

	cout << "Your new balance is: " << balance << " after the transaction" << endl;
	return DisplayAccount();
}

void Savings::Withdraw(double amount)
{
	balance = (balance - amount) - fee;

	cout << "Enter the amount you'd like to withdraw: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << balance << endl;
}

void Savings::Deposit(double amount)
{
	balance = balance + amount;

	cout << "Enter the amount you'd like to deposit: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << balance << endl;
}

void Savings::DisplayAccount()
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