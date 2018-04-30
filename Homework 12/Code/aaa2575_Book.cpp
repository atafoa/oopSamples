#include "aa2575_Book.h"
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

string Book::get_info()
{
	 return "Title: " + title + "Book author: " + author + "Genre: " + genre + "Id Number: " + std::to_string(id_number) + "Copyright Year: " + std::to_string(copyright_year) + "\n";
}
 
ostream& operator<<(ostream& ost, const Book& b_two)
{
	ost << b_two;
	return ost;
}