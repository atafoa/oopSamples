#include "aaa2575_Movie.h"

#include <iostream>

Video_Game::Video_Game(int ry, string s, int idNum) : Media(int idNum, int callNum, string t, string g)
{
	release_year = ry;
	studio = s;
	title = t;
	id_number = idNum;
}

void Video_Game::get_info()
{
	cout << "Title: " << title << endl;
	cout << "Release Year: " << release_year << endl;
	cout << "Studio: " << studio << endl;
	cout << "ID number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Video_Game& v_two)
{
	ost << v_two;
	return ost;
}
