#include <vector>
#include <string>
#include "aaa2575_Transaction_List.h"

using namespace std;

Transaction_List:: Transaction_List(string m)
{
	month = m;	
}

string Transaction_List:: get_month()
{
	return month;
}

void Transaction_List:: add_transaction(double transaction)
{
	transactions.push_back(transaction);
}

double Transaction_List:: average_transaction()
{
	int totalTransactions = transactions.size();
	if(totalTransactions == 0)
	{
	 	return 0;
	}

	double sum  = 0;
	
	for(double a : transactions)
	{
	 	sum += a;
	}

	double average = sum / totalTransactions;
	return average;
}


