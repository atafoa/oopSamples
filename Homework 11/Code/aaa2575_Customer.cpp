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
	return "Customer Name: " + name + "\n ID Number: " +  std::to_string(id) + "\n Phone Number: " + phone + "\n Email: " + email + "\n Balance: " + std::to_string(balance);
}

void Customer::get_info()
{
	cout << "Customer Name: " << name << endl;
	cout << "ID Number: " << id << endl;
	cout << "Phone Number: " << phone << endl;
	cout << "Email: " << email << endl;
}

int Customer::get_id()
{
	return id;
}

string Customer::get_balance()
{
	return name + " has a balance of " + std::to_string(balance);
}
void Customer::set_balance(double bal)
{
	balance = bal;
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
