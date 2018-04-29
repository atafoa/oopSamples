#include "include/aaa2575_Music_Album.h"

#include <iostream>

Music_Album::Music_Album(int ry, string a, vector<string> tr, string t, int idNum, string g, string callNum) : Media(idNum,callNum,t,g)
{
	release_year = ry;
	artist = a;
	tracks = tr;
	title = t;
	id_number = idNum;
	genre = g;
}

string Music_Album::get_info()
{
	return "Album Title: " + title + "Artist: " + artist + "Genre: " + genre +"Release Year: " + std::to_string(release_year) + "Id Number: " + std::to_string(id_number)+ "\n";
}
 
ostream& operator<<(ostream& ost, const Music_Album& ma_two)
{
	ost << ma_two;
	return ost;
}
