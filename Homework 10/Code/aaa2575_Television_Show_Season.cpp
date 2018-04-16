#include "aaa2575_Television_Show_Season.h"
#include <iostream>
using namespace std;

Television_Show_Season::Television_Show_Season(int ry, string p, vector<string> d, vector<string> la,int sn, string t, int idNum, string g, string callNum) : Media(idNum,callNum,t,g)
{
	release_year = ry;
	producer = p;
	director = d;
	leading_actors = la;
	season_number = sn;
	title = t;
	genre = g;
	id_number = idNum;
}

string Television_Show_Season::get_info()
{
	return "Show Title: " + title + "Genre: " + genre + "Producer: " + producer + "Season Number:  " + std::to_string(season_number) + "Id Number: " + std::to_string(id_number)+ "\n";
}
 
ostream& operator<<(ostream& ost, const Television_Show_Season& tss_two)
{
	ost << tss_two;
	return ost;
}
