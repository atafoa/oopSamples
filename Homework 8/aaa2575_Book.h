#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book : public Media
{
	public:
	Book(string a, int cy, string t, string g, int idNum);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Book& b_two);

	private:
	string author;
	int copyright_year;
	string title;
	string genre;
	int id_number;

};

#endif