#include "aaa2575_Video_Game.h"

#include <iostream>

Video_Game::Video_Game(int ry, string s, int idNum, string t, string g, string callNum) : Media(idNum,callNum,t,g)
{
	release_year = ry;
	studio = s;
	title = t;
	id_number = idNum;
	genre = g;
}

void Video_Game::get_info()
{
	cout << call_number << endl;
	cout << "Title: " << title << endl;
	cout << "Genre: " << genre << endl;
	cout << "Release Year: " << release_year << endl;
	cout << "Studio: " << studio << endl;
	cout << "ID number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Video_Game& v_two)
{
	ost << v_two;
	return ost;
}
