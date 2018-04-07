#include "aaa2575_Book.h"
#include <iostream>

using namespace std;

Book::Book(string a, int cy, string t, string g, int idNum, string callNum):Media(idNum,callNum,t,g)
{
	author = a;
	copyright_year = cy;
	title = t;
	genre = g;
	id_number = idNum;
}

void Book::get_info()
{
	cout << "Title: " << title << endl;
	cout << "Book author: " << author << endl;
	cout << "Genre: " << genre << endl;
	cout << "Id Number: " << id_number << endl;
	cout << "Copyright Year: " << copyright_year << endl;
}
 
ostream& operator<<(ostream& ost, const Book& b_two)
{
	ost << b_two;
	return ost;
}