#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Customer.h"

using namespace std;

class Transaction
{
	public:
	Transaction(int tNum, Librarian lb, Customer c, Date check_in, Date due) : transaction_number(tNum), librarian{lb}, customer{c}, check_in_date{check_in}, due_date{due}, check_out_date{0,0,0} {} ;
	double calculate_fee();
	void get_info();
	void check_in();
	void check_out();
	string to_string() const;
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
