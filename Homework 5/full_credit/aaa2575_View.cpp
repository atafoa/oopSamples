#include "aaa2575_View.h"

string View::get_menu(){

	string menu = R"(
	==================================
	Transaction List Managment System
	==================================

	1: Print all transactions
	2: Add a transaction
	3: Delete a transaction by date
	4: Delete all transactions by employee
	5: Average transaction value
	6: Find out who won the bonus
	0: Exit the program
	)";

	return menu;

}

string View:: view_all_transactions(){

	string header = R"(
		=================
		All Transactions
		=================
	)";

return header;
}

string View::prompt_for_date(){
	string prompt = "Input a date (MM/DD/YYYY HH:MM:SS)";
	return prompt;
}

string View::prompt_for_employeeName()
{
	string prompt = "Input the employee name: ";
	return prompt;
}
