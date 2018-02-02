#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include "aaa2575_Transaction_List.h"

using namespace std;

int main() 
{
	string month;
	double average;

	cout  << "Test #1" << endl;
	Transaction_List test1 {"May"};
	test1.add_transaction(150);
	test1.add_transaction(225.3);
	test1.add_transaction(78.9);
	test1.add_transaction(523.99);
	month = test1.get_month();
	cout << "The month for this transaction is: " << month << endl;
	average = test1.average_transaction();
	cout << "The average for this transaction is: " << average << endl;
	if(month != "May")
	{
		cout << "Error the month is not May " << endl;
	}
	if(average != 244.5475)
	{
		cout << "Error the average is incorrect " << endl;
	}
	cout << "\n";

	cout  << "Test #2" << endl;
	Transaction_List test2 {"March"};
	test2.add_transaction(150);
	test2.add_transaction(225.3);
	test2.add_transaction(78.9);
	test2.add_transaction(523.99);
	month = test2.get_month();
	cout << "The month for this transaction is: " << month << endl;
	average = test2.average_transaction();
	cout << "The average for this transaction is: " << average << endl;
	if(month != "May")
	{
		cout << "Error the month is not May " << endl;
	}
	if(average != 244.5475)
	{
		cout << "Error the average is incorrect " << endl;
	}
	cout << "\n";
	
	cout  << "Test #3" << endl;
	Transaction_List test3 {"May"};
	test3.add_transaction(150);
	test3.add_transaction(225.8);
	test3.add_transaction(78.9);
	test3.add_transaction(523.99);
	month = test3.get_month();
	cout << "The month for this transaction is: " << month << endl;
	average = test3.average_transaction();
	cout << "The average for this transaction is: " << average << endl;
	if(month != "May")
	{
		cout << "Error the month is not May " << endl;
	}
	if(average != 244.5475)
	{
		cout << "Error the average is incorrect " << endl;
	}
	cout << "\n";

	return 0;
}
