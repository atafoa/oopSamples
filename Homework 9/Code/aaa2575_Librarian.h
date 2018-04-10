#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <iostream>
#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include <string>

using namespace std;

class Librarian
{
	public:
	Librarian(string n, int idNum);
	void check_out_media();
	void check_out_bundle();
	void check_in_media();
	void check_in_bundle();
	void get_info();
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Librarian& lb_two);
	


	private:
	string name;
	int id;

};

#endif
