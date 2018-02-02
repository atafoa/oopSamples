#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include "aaa2575_Transaction_List.h"

using namespace std;

int main()
{
	vector <Transaction_List> allTransactions;
	char addMonth = 'Y';
	string month;
	double newTransaction = 0;

	while(toupper(addMonth) != 'N')
	{
		cout << "Please enter the name of the month: ";
		cin >> month;
		cout << endl;
		Transaction_List temp{month};
		cout << "Enter your transactions below. Please enter -999 to stop. " <<endl;
		cout << "Please enter a transaction: ";
			cin >> newTransaction;
		while ( newTransaction != -999)
		{
			temp.add_transaction (newTransaction);
			cout << "Please enter a transaction: ";
			cin >> newTransaction;
		}
		allTransactions.push_back(temp);
		cout << "\nDo you want to enter another transaction N for No: ";
		cin >> addMonth;
	}

	cout << endl << "Monthly Averages are " << endl;
	for(Transaction_List list : allTransactions)
	{
		cout << list.get_month() << ": " << list.average_transaction() << endl;
	}

	return 0;
}


