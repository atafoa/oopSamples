#include "aaa2575_Music_Album.h"

#include <iostream>

Music_Album::Music_Album(int ry, string a, vector<string> tr, string t, int id_number, string g, string callNum) : Media(idNum,callNum,t,g)
{
	release_year = ry;
	artist = a;
	tracks = tr;
	title = t;
	id_number = idNum;
	genre = g;
}

void Music_Album::get_info()
{
	cout << call_number << endl;
	cout << "Album Title: " < title << endl;
	cout << "Artist: " << artist << endl;
	cout << "Genre: " << genre << endl;
	cout << "Release Year: " << release_year << endl;
	cout << "Id Number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Music_Album& ma_two)
{
	ost << ma_two;
	return ost;
}
