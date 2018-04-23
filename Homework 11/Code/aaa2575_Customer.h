#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

class Customer
{
	public:
	Customer(string n, int idNum, string p, string e, double b);
	void get_info();
	string get_balance();
	void pay_balance();
	void set_balance(double bal);
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Customer& c_two);

	protected:
	string name;
	int id;
	string phone;
	string email;
	double balance;

};

#endif