#include "aaa2575_Controller.h"

void Controller:: cli()
{
	int cmd = -1;
	while(cmd != 0)
	{
		cout << view.get_menu() << endl;
		cout << "What would you like to do: ";
		cin >> cmd;
		execute_cmd(cmd);
	}
}

void Controller:: execute_cmd(int cmd)
{
	string userInput;
	stringstream ss;
	char removeChar;
	double average;
	int y; int m; int d; int h; int min; int sec; double p; string n;
	Date date{0,0,0,0,0,0};
	Transaction t{0,""};
	string employeeName;

	int choice = 0;

	if( cmd < 0 || cmd > 8)
	{
		throw runtime_error("Input invalid Number has to be from 0 to 6");
	}

	switch (cmd)
	{
		case 1:
			cout <<view.view_all_transactions() << endl;
			transactions.list_transactions();
			break;
		case 2:
			cout << "Before adding a new transaction I need a little more information \n";
			input_transaction_date();
			cout <<view.view_all_transactions() << endl;
			transactions.list_transactions();
			cout << endl;

			break;
		case 3:
			cout << "Before deleting a new transaction I need a little more information" << endl;
			delete_transaction_by_date();
			cout <<view.view_all_transactions() << endl;
			transactions.list_transactions();
			break;
		case 4:
			cout << view.prompt_for_employeeName();
			cin >> employeeName;
			transactions.delete_transactions_by_name(employeeName);
			cout <<view.view_all_transactions() << endl;
			transactions.list_transactions();
			break;
		case 5:
			average = transactions.get_average_transaction();
			cout << "The average of all transactions is: " << average << endl;
			break;
		case 6:
			cout << "The winner of the bonus is: " << transactions.bonus() << endl;
			break;
		case 7:
			cout << "Would you like to turn on load functionality: " << endl;
			cout << "Enter 1 for yes and 0 for no: ";
			cin >> choice;
			load(choice);
			break;
		case 8:
			cout << "Would you like to turn on save functionality: " << endl;
			cout << "Enter 1 for yes and 0 for no: ";
			cin >> choice;
			save(choice);
			break;
		case 0:
			cout << "Now exiting the program\n";
			break;
	}
}

void Controller::delete_transaction_by_date()
{
	cout << view.prompt_for_date() << endl;
	string userInput;
	stringstream ss;
	char removeChar;
	int y; int m; int d; int h; int min; int sec;
	Date date{0,0,0,0,0,0};
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
}

void Controller:: input_transaction_date()
{
	cout << view.prompt_for_date()<< endl;
	string userInput;
	stringstream ss;
	char removeChar;
	int y; int m; int d; int h; int min; int sec; double p; string n;
	Date date{0,0,0,0,0,0};
	Transaction t{0,""};
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
}

void Controller:: save(int choice)
{
	if(choice == 1)
	{
		cout << "Now saving these transactions " << endl << endl;
		transactions.list_transactions();
		transactions.save_to_file();
	}
	else
	{
		cout << "Save functionality will be turned off" << endl;
	}
}

void Controller:: load(int choice)
{
	if(choice == 1)
	{
		cout << "Now loading these transactions " << endl << endl;


		int onfileY,onfileM, onfileD,onfileH,onfileMin,onfileSec;
		string nameOnFile; double priceOnFile;
		string line;
		char removeChar;
		stringstream iss;

		Date d{0,0,0,0,0,0};
		Transaction t{0,""};


		inFile.open("aaa2575_save_file.txt");
		if(inFile.is_open())
		{
			if(inFile.eof())
			{
				inFile.close();
			}

			while(!inFile.eof())
			{
				getline(inFile,line);
				iss << line;
				iss >> onfileM;
				iss >> removeChar;
				iss >> onfileD;
				iss >> removeChar;
				iss >> onfileY;
				iss >> removeChar;
				iss >> onfileH;
				iss >> removeChar;
				iss >> onfileMin;
				iss >> removeChar;
				iss >> onfileSec;
				iss >> removeChar;
				iss >> priceOnFile;
				iss >> removeChar;
				iss >> nameOnFile;
				iss.str("");
				iss.clear();

				d = Date(onfileY,onfileM,onfileD,onfileH,onfileMin,onfileSec);
				t = Transaction(priceOnFile,nameOnFile);
				transactions.add_transaction(d,t);
			}
				if(inFile.bad())
					throw runtime_error("Bad");
		}
		transactions.list_transactions();
	}
	else
		cout << "Load functionality will be turned off" << endl;
}
