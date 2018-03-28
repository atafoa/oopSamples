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

ostream& operator<<(ostream& ost, const Customer& c_two)
{
	ost << c_two;
	return ost;
}