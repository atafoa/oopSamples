#include "aaa2575_Transaction_List.h"
#include <iostream>

using namespace std;

//function declarations
void printList();
void addTransactions();
void deleteByDate();
void deleteByEmployee();

//global vairables
Transaction_List transactions{};

int main()
{
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
				addTransactions();
				cout << "The list of transactions has been updated";
				printList();
				break;
			case 3:
				deleteByDate();
				cout << "The list of transactions has been updated";
				printList();
				break;
			case 4:
				deleteByEmployee();
				cout << "The list of transactions has been updated";
				printList();
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
	double p;
	string n;

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
	cout << "Please enter the amount of the transaction: ";
	cin >> p;
	cout << "Please enter the employee that handled the transaction: ";
	cin >> n;

	Date date{y,m,d,h,min,sec};
	Transaction transaction{p,n};

	if(transactions.add_transaction(date, transaction))
		cout << "Transaction added";
}

void deleteByDate()
{
	int y,m,d,h,min,sec;
	cout << "Before deleting a new transaction I need a little more information";
	cout << "In what year was the transaction made: ";
	cin >> y;
	cout << "In what month was the transaction  made: ";
	cin >> m;
	cout << "On what day was the transaction  made: ";
	cin >> d;
	cout << "What is the hour the transaction was made: ";
	cin >> h;
	cout << "What is the minute the transaction was made: ";
	cin >> min;
	cout << "What is the second the transaction was made: ";
	cin >> sec;

	Date d{y,m,d,h,min,sec};

	if(transaction.delete_transaction_by_date(d))
		cout << "Transaction deleted";
}

void deleteByEmployee()
{
	string employeeName;
	cout << "What is the name of the Employee that handled the transaction: ";
	cin >> employeeName;

	if (transactions.delete_transactions_by_name(employeeName))
		cout << "Transaction deleted";
}
