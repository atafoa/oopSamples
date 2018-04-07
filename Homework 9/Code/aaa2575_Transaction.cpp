#include "aaa2575_Transaction.h"
#include <iostream>

using namespace std;

Transaction::Transaction(int tNum, Librarian l, Customer c)
{
	transaction_number = tNum;
	check_out_date = {0,0,0};
	librarian = l;
	customer = c;
	check_in_date = {0,0,0};
	due_date = {0,0,0};
}

void Transaction::get_info()
{
	cout << "Transaction" << endl;
	cout << "Employee " << endl;
	librarian.get_info();
	cout << "Bill To: " << endl;
	customer.get_info();
	cout << "Description: " << endl;
	bundle.get_info();
	media.get_info();

}

void Transaction::check_in()
{

}

void Transaction::check_out()
{

}


double Transaction::calculate_fee()
{

}

ostream& operator<<(ostream& ost, const Transaction& transaction_two)
{
	ost << transaction_two;
	return ost;
}