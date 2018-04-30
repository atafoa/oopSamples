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

string Media::to_string() const
{
	string temp;

	temp = "Title: " + title + " Id Number: " + std::to_string(id_number) + " Genre: " + genre + " Type: " + call_number;

	if(checked_out == true)
		return temp + " Status: Checked out \n";
	else
		return temp + " Status: Has not been checked out \n";
}

int Media::get_id()
{
	return id_number;
}

void Media::get_info()
{
	cout << "Title: " << title << endl;
	cout << "Id Number: " << id_number << endl;
	cout << "Genre: " << genre << endl;
	cout << "Type: " << call_number << endl;

	if(checked_out == true)
		cout << "Status: Checked out " << endl;
	else
		cout << "Status: Has not been checked out  " << endl;
}
 
ostream& operator<<(ostream& ost, const Media& media_two)
{
	ost << media_two;
	return ost;
}

bool Media::check_out()
{
	checked_out = true;
	return true;
}

bool Media::check_in()
{
	checked_out = false;
	return true;
}
