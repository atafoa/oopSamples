#include "aaa2575_Movie.h"

#include <iostream>

Movie::Movie(int ry, string p, string d, vector<string> la, string t, int idNum) : Media(int idNum, int callNum, string t, string g)
{
	release_year = ry;
	producer = p;
	director = d;
	leading_actors = la;
	title = t;
	id_number = idNum;
}

void Movie::get_info()
{
	cout << "Title: " << title << endl;
	cout << "Movie director: " << director << endl;
	cout << "Release Year: " << release_year << endl;
	cout << "Producer: " << producer << endl;
	cout << "Id Number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Movie& m_two)
{
	ost << m_two;
	return ost;
}
