//#include "aaa2575_Transaction_List.h"
#include <iostream>

using namespace std;

//function declarations
void printList();





int main()
{
	Transaction_List transactions{};
	cout << "\nWelcome to the Transaction List Managment Solution. \n";
	cout << "Please make a selection from the following menu: \n";
	cout << "1: Print all transactions\n";
	cout << "2: Add a transaction\n";
	cout << "3: Delete a transaction by date\n";
	cout << "4: Delete all transactions by employee\n";
	cout << "5: Average transaction value\n";
	cout << "6: Find out who won the bonus\n"
	cout << "0: Exit the program\n"<< endl;

	int choice

	do
	{
		cout << "What would you like to do: ";
		cin >> choice;
		cout << "You chose: " << choice;
		switch (choice)
		{
			case 1:
				printList();
				break;
			case 2:
				//add a new transaction
				break;
			case 3:
				//delete transaction by date
				break;
			case 4:
				//delete transaction by employee
				break;
			case 5:
				// find average transaction;
				break;
			case 6:
				//bonus
				break;
			case 0:
				cout << "Now exiting the program\n";
				break;

		}

	}while( choice != 0);
}

void printList()
{
	cout << "Now printing all transactions";
	transactions.list_transactions();
}

void addTransactions()
{

	int y,m,d,h,min,sec;
	
	cout << "Before adding a new transaction I need a little more information";
	cout <<  "What is the year the transaction was made: ";
	cin >> y;
	cout << "What is the month the transaction was made: ";
	cin >> m;
	cout << "What is the day the transaction was made: ";
	cin >> d;
	cout << "The hour the transaction was made: ";
	cin >> h;
	cout << "The minute the transaction was made: ";
	cin >> min;
	cout << "The second the transaction was made: ";
	cin >> sec;

	Date date{y,m,d,h,min,sec};
	transactions
}
