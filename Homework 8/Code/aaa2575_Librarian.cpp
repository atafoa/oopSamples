#include "aaa2575_Librarian.h"

using namespace std;

Librarian::Librarian(string n, int idNum)
{
	name = n;
	id = idNum;
}

void Librarian::get_info()
{
	cout << "Librarian name: " << name << endl;
	cout << "ID number: " << id << endl;
}

void Librarian::check_out()
{

}

void Librarian::check_in()
{

}

ostream& operator<<(ostream& ost, const Librarian& lb_two)
{
	ost << lb_two;
	return ost;
}