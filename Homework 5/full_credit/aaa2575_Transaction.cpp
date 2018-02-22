#include "aaa2575_Transaction.h"

using namespace std;

Transaction::Transaction(double p, string n)
{
	price = p;
	name = n;
}
double Transaction::get_price()
{
	return price;
}
string Transaction::get_name()
{
	return name;
}
string Transaction::to_string() const
{
	return "Employee: "+name + " Price: " + std::to_string(price);
}
ostream& operator<<(ostream& ost, const Transaction& trans_two)
{
	ost << trans_two.to_string();
	return ost;
}
