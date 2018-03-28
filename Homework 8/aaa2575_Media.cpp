#include "aaa2575_Media.h"

#include <iostream>

Media::Media(int idNum, string callNum, string t, string g)
{
	id_number = idNum;
	call_number = callNum;
	title = t;
	genre = g;
	checked_out = false;
}

void Media::get_info()
{
	cout << "Id Number: " << id_number << endl;
	cout << "Title: " << title << endl;
	cout << "Genre: " << genre << endl;
	cout << "Call Number: " << call_number << endl;
	cout << "Status: " << checked_out << endl;
}
 
ostream& operator<<(ostream& ost, const Media& media_two)
{
	ost << media_two;
	return ost;
}

/*bool Media::is_checked_out()
{
	if(Librarian::check_out() == true)
	{
		checked_out = true;
		return true;
	}

	return false;

}*/