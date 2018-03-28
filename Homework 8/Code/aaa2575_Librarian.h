#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <iostream>
#include <string>

using namespace std;

class Librarian
{
	public:
	Librarian(string n, int idNum);
	void check_out();
	void check_in();
	void get_info();
	friend ostream& operator<<(ostream& ost, const Librarian& lb_two);


	private:
	string name;
	int id;

};

#endif