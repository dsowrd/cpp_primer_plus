#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

class BankAccount {
private:
	std::string name;
	std::string acctnum;
	double balance;
public:
	BankAccount(const std::string & client, const std::string & num, double bal = 0.0);
	void show(void)const;
	void deposit(double cash);
	void withdraw(double cash);
};
#endif // !_ACCOUNT_H
