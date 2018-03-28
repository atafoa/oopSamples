#include "aaa2575_Movie.h"

#include <iostream>

Movie::Movie(int ry, string p, string d, vector<string> la, string t, int idNum, string g, string callNum) : Media(idNum,callNum,t,g)
{
	release_year = ry;
	producer = p;
	director = d;
	leading_actors = la;
	title = t;
	id_number = idNum;
	genre = g;
}

void Movie::get_info()
{
	cout << call_number << endl;
	cout << "Title: " << title << endl;
	cout << "Movie director: " << director << endl;
	cout << "Genre: " << genre << endl;
	cout << "Release Year: " << release_year << endl;
	cout << "Producer: " << producer << endl;
	cout << "Id Number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Movie& m_two)
{
	ost << m_two;
	return ost;
}
