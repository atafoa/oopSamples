#ifndef Television_Show_Season_H
#define Television_Show_Season_H

#include "aaa2575_Media.h"

using namespace std;

class Television_Show_Season: public Media
{
	public:
	Television_Show_Season(int ry, string p, vector<string> d, vector<string> la, int sn, string t);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Television_Show_Season& tss_two);

	private:
	int release_year;
	string producer;
	vector<string> director
	vector<string> leading_actors;
	int season_number;
	string title;

};

#endif