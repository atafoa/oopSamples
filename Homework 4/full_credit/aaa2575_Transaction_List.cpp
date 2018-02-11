#include "aaa2575_Transaction_List.h"

using namespace std;

bool Transaction_List:: add_transaction(Date date, Transaction transaction)
{
	return transactions.insert(make_pair(date,transaction)).second;
}

void Transaction_List:: list_transactions()
{
	if(transactions.size() == 0)
	{
		cout << "There are no transactions to display at this time \n"; << endl;
		return;
	}

	map<Date, Transaction>:: iterator it = transactions.begin();
	for(;it != transactions.end();it++)
	{
		cout<< it->first << " - " << it->second << endl;
	}
}

double Transaction_List:: get_average_transaction()
{
	map<Date, Transactions>:: iterator it = transactions.begin();
	int sum; = 0

	for(;it != transactions.end();it++)
	{
		sum += it->second;
	}

	int average = sum / transactions.size();
	return average;

}

string Transaction_List:: bonus()
{

}

string Transaction_List:: to_string()
{
	map<Date, Transaction> :: iterator it = transactions.begin();
	for(;it != transactions.end(); it++)
	{
		return std::to_string(it->first)+" "+std::to_string(it->second);
	}
}

ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two)
{
	ost << trans_list_two;
	return ost;
}

void Transaction_List:: delete_transaction_by_date(Date d);
{
	transactions.erase(d);
	return transactions;
}

void Transaction_List:: delete_transactions_by_name(string n);
{
	map<Date, Transaction>::iterator it = transactions.begin();
	for(;it != transactions.end();it++)
	{
		if(it->first == n)
		{
			transactions.erase(it->second);
			return transactions;

		}
	}
}
