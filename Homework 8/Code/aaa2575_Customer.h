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
	void get_balance();
	friend ostream& operator<<(ostream& ost, const Customer& c_two);

	private:
	string name;
	int id;
	string phone;
	string email;
	double balance;

};

#endif