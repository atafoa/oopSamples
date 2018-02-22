#include <iostream>
#include <string>

using namespace std;

class Transaction
{
	public:
	Transaction(double p, string n);
	double get_price();
	string get_name();
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Transaction& trans_two);

	private:
	double price;
	string name;

};
