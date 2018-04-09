#include "aaa2575_Transaction.h"
#include <iostream>

using namespace std;

Transaction::Transaction(int tNum, Librarian l, Customer c, Date check_in, Date due)
{
	transaction_number = tNum;
	check_out_date = {0,0,0};
	librarian = l;
	customer = c;
	check_in_date = check_in;
	due_date =  due;
}


void Transaction::get_info()
{
	cout << "Transaction ID: "<< transaction_number << endl;
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
	double julianDate1 = due_date.to_julianDate();
	double julianDate2 = check_in_date.to_julianDate();
	double difference = julianDate2 - julianDate1;
	if (difference <= -)
		return 0;
	else
		return 2 * difference;
}

ostream& operator<<(ostream& ost, const Transaction& transaction_two)
{
	ost << transaction_two;
	return ost;
}