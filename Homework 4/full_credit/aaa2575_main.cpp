#include "aaa2575_Transaction_List.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	cout << "\nWelcome to the Transaction List Managment Solution. \n";
	cout << "Please make a selection from the following menu: \n";
	cout << "1: Print all transactions\n";
	cout << "2: Add a transaction\n";
	cout << "3: Delete a transaction by date\n";
	cout << "4: Delete all transactions by employee\n";
	cout << "5: Average transaction value\n";
	cout << "6: Find out who won the bonus\n";
	cout << "0: Exit the program\n" << endl;

	Transaction_List transactions;
	int choice;
	string userInput;
	stringstream ss;
	char removeChar;
	double average;
	int y; int m; int d; int h; int min; int sec; double p; string n;
	Date date{0,0,0,0,0,0};
	Transaction t{0,""};
	string employeeName;

	do
	{
		cout << "What would you like to do: ";
		cin >> choice;

		if( choice < 0 || choice > 6)
		{
			cout << "Input invalid Number has to be from 0 to 6" << endl;
			return 0;
		}

		switch (choice)
		{
			case 1:
				cout << "Printing all transactions\n" << endl;
				transactions.list_transactions();
				break;
			case 2:
				cout << "Before adding a new transaction I need a little more information \n";
				cout << "Please enter the date the transaction was made in the form of mm/dd/yyyy" << endl;
				cin >> userInput;
				ss << userInput;
				ss >> m;
				ss >> removeChar;
				ss >> d;
				ss >> removeChar;
				ss >> y;
				ss >> removeChar;
				ss.str("");
				ss.clear();

				cout << "Please enter the time the transaction occurred in the form hh:mm:ss" << endl;
				cin >> userInput;
				ss << userInput;
				ss >> h;
				ss >> removeChar;
				ss >> min;
				ss >> removeChar;
				ss >> sec;
				date = Date(y,m,d,h,min,sec);
				ss.str("");
				ss.clear();

				cout << "What was the amount of the transaction: ";
				cin >> p;
				cout << "What is the name of the employee who handled the transaction: ";
				cin >> n;
				t = Transaction(p,n);
				if(!transactions.add_transaction(date,t))
					cout << "\nThe list of transactions could not be updated\n";
				else
					cout << "\n Transaction List Updated\n";
				cout << endl;
				transactions.list_transactions();
				cout << endl;
				break;
			case 3:
				cout << "Before deleting a new transaction I need a little more information" << endl;
				cout << "Please enter the date the transaction was made in the form of mm/dd/yyyy" << endl;
				cin >> userInput;
				ss << userInput;
				ss >> m;
				ss >> removeChar;
				ss >> d;
				ss >> removeChar;
				ss >> y;
				ss >> removeChar;
				ss.str("");
				ss.clear();

				cout << "Please enter the time the transaction occurred in the form hh:mm:ss" << endl;
				cin >> userInput;
				ss << userInput;
				ss >> h;
				ss >> removeChar;
				ss >> min;
				ss >> removeChar;
				ss >> sec;
				date = Date(y,m,d,h,min,sec);
				ss.str("");
				ss.clear();
				transactions.delete_transaction_by_date(date);
				cout << endl <<  "The list of transactions has been updated\n" << endl;
				transactions.list_transactions();
				cout << endl;
				break;
			case 4:
				cout << "What is the name of the Employee that handled the transaction: ";
				cin >> employeeName;
				transactions.delete_transactions_by_name(employeeName);
				cout << "\nThe list of transactions has been updated\n";
				transactions.list_transactions();
				cout << endl;
				break;
			case 5:
				average = transactions.get_average_transaction();
				cout << "The average of all transactions is: " << average << endl;
				break;
			case 6:
				cout << "The winner of the bonus is: " << transactions.bonus() << endl;
				break;
			case 0:
				cout << "Now exiting the program\n";
				break;

		}

	}while( choice != 0);
}
