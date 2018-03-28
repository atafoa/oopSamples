#ifndef Movie_H
#define Movie_H

#include "aaa2575_Media.h"

using namespace std;

class Movie: public Media
{
	public:
	Movie(int ry, string p, string d, vector<string> la, string t, int idNum);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Movie& m_two);

	private:
	int release_year;
	string producer;
	string director;
	vector<string> leading_actors;
	string title;
	int id_number;

};

#endif