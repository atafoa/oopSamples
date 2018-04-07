#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aa2575_Customer.h"

using namespace std;

class Transaction
{
	public:
	Transaction(int tNum, Librarian l, Customer c)
	double calculate_fee();
	void get_info();
	void check_in();
	void check_out();
	friend ostream& operator<<(ostream& ost, const Transaction& transaction_two);

	private:
	int transaction_number;
	Date check_out_date;
	Librarian librarian;
	Customer customer;
	vector<Media> media;
	vector<Bundle> bundle;
	Date check_in_date;
	Date due_date;

};

#endif