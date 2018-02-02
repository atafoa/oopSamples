#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Transaction_List 
{
	public: 
	Transaction_List(string m);
	string get_month();
	void add_transaction( double transaction);
	double average_transaction();

	private:
	string month;
	vector <double> transactions;
	int num_transactions;
};
