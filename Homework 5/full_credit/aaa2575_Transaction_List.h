#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include "aaa2575_Transaction.h"
#include "aaa2575_Date.h"


using namespace std;

class Transaction_List
{
	public:
	Transaction_List();
	bool add_transaction(Date date, Transaction transaction);
	void list_transactions();
	double get_average_transaction();
	string bonus();
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two);
	void delete_transaction_by_date(Date d);
	void delete_transactions_by_name(string n);

	private:
	map<Date,Transaction> transactions;
};
