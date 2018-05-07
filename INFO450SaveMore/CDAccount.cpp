#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "CDAccount.h"
using namespace std;

CDAccount::CDAccount() : Account()
{
	term = 5;
}

CDAccount::CDAccount(string acctNo, string type, double blnc, int rate, int term, double inputTerm) : Account(acctNo, type, blnc, rate)
{
	termRateA = ((balance * 0.10) * 5);
	termRateB = ((balance * 0.05) * inputTerm);
	// Term rates defined here
}

void CDAccount::CreateAccount()
{
	cout << "Please enter the amount you would like to deposit in your new account: \n" << endl;
	cin >> balance;
	cout << "Your balance is now\n " << balance << endl;
}

void CDAccount::Withdraw(double amount)
{
	balance = (balance - amount);
}

void CDAccount::AssessInterest(double inputTerm)
{
	if (term >= 5)
	{
		termRateA = ((balance * 0.10) * 5);

	}
	else if (term <= 5)
	{
		termRateB = ((balance * 0.05) * inputTerm);
	}

}

void CDAccount::Deposit(double amount)
{
	balance = balance + amount;
}

void CDAccount::DisplayAccount()
{
	cout << "Enter account number: " << endl;
	cin >> acctNumber;
	cout << "==================================================" << endl;
	cout << "Account Number: " << acctNumber << endl;
	cout << "Account Type: " << acctType << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate applied: " << interestRate << endl;
	cout << "Term: " << term << endl;
	cout << "==================================================" << endl;
}