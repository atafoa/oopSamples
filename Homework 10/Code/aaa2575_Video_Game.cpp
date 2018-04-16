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

string Video_Game::get_info()
{
	return  "Title: " + title + "Genre: " + genre + "Release Year: " + std::to_string(release_year) + "Studio: " + studio + "ID number: " + std::to_string(id_number) + "\n";
}
 
ostream& operator<<(ostream& ost, const Video_Game& v_two)
{
	ost << v_two;
	return ost;
}
