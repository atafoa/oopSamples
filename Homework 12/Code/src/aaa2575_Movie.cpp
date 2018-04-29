#include "include/aaa2575_Movie.h"

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

string Movie::get_info()
{
	
	return  "Title: " + title + "Movie director: " + director + "Genre: " + genre + "Release Year: " + std::to_string(release_year) + "Producer: " + producer + "Id Number: " +  std::to_string(id_number) + "\n";
}
 
ostream& operator<<(ostream& ost, const Movie& m_two)
{
	ost << m_two;
	return ost;
}
