#include "aaa2575_Television_Show_Season.h"

#include <iostream>

Televison_Show_Season::Televison_Show_Season(int ry, string p, vector<string> d, vector<string> la, string t, int idNum) : Media(int idNum, int callNum, string t, string g)
{
	release_year = ry;
	producer = p;
	director = d
	leading_actors = la;
	season_number = sn;
	title = t;
	id_number = idNum;
}

void Televison_Show_Season::get_info()
{
	cout << "Show Title: " < title << endl;
	cout << "Producer: " << producer << endl;
	cout << "Season Number:  " << season_number << endl;
	cout << "Id Number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Televison_Show_Season& tss_two)
{
	ost << tss_two;
	return ost;
}
