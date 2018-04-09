#include "aaa2575_Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string n, int idNum, string p, string e, double b)
{
	name = n;
	id = idNum;
	phone = p;
	email = e;
	balance = b;
}

string Customer::to_string() const
{
	return "Customer Name: " + name + " ID Number: " +  std::to_string(id) + " Phone Number: " + phone + " Email: " + email + " Balance: " + std::to_string(balance);
}

void Customer::get_info()
{
	cout << "Customer Name: " << name << endl;
	cout << "ID Number: " << id << endl;
	cout << "Phone Number: " << phone << endl;
	cout << "Email: " << email << endl;
}

void Customer::get_balance()
{
	cout << name << " has a balance of " << balance << endl;
}

void Customer::pay_balance()
{
	if(balance != 0)
		balance = 0;
}
ostream& operator<<(ostream& ost, const Customer& c_two)
{
	ost << c_two;
	return ost;
}