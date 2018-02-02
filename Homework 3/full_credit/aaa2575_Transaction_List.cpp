#include <vector>
#include <string>
#include "aaa2575_Transaction_List.h"

using namespace std;

Transaction_List:: Transaction_List(string m)
{
	month = m;
	num_transactions = 0;		
}

string Transaction_List:: get_month()
{
	return month;
}

void Transaction_List:: add_transaction(double transaction)
{
	transactions.push_back(transaction);
	num_transactions += 1;
}

double Transaction_List:: average_transaction()
{
	if(num_transactions == 0)
	{
	 	return 0;
	}

	double sum  = 0;
	
	for(double a : transactions)
	{
	 	sum += a;
	}

	double average = sum / num_transactions;
	return average;
}


