#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Certificate class declaration with Inheritance on Account class
class CDAccount : public Account
{
private:
	int term;
	double inputTerm;
	double termRateA;
	double termRateB;
	double fee;
	double balance;

public:
	CDAccount();
	CDAccount(string acctNo, string type, double blnc, int rate, int term, double inputTerm);
	void CreateAccount();
	void Withdraw(double amount);
	void AssessInterest(double inputTerm);
	void Deposit(double amount);
	void DisplayAccount();
};
