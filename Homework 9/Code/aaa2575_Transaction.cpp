#include "aaa2575_Transaction.h"
#include <iostream>

using namespace std;


string Transaction::to_string() const
{
	string librarianInfo = librarian.Librarian::to_string();
	string customerInfo = customer.Customer::to_string();

	return "Transaction ID: " +  std::to_string(transaction_number) + librarianInfo + customerInfo;

}

void Transaction::get_info()
{
	cout << "Transaction ID: "<< transaction_number << endl;
	cout << "Employee " << endl;
	librarian.get_info();
	cout << "Bill To: " << endl;
	customer.get_info();
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
	if (difference <= 0)
		return 0;
	else
		return 2 * difference;
}

ostream& operator<<(ostream& ost, const Transaction& transaction_two)
{
	ost << transaction_two;
	return ost;
}
