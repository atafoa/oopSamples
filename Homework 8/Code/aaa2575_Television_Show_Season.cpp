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

void Television_Show_Season::get_info()
{
	cout <<"Television Show" << endl;
	cout << "Show Title: " << title << endl;
	cout << "Genre: " << genre << endl;
	cout << "Producer: " << producer << endl;
	cout << "Season Number:  " << season_number << endl;
	cout << "Id Number: " << id_number << endl;
}
 
ostream& operator<<(ostream& ost, const Television_Show_Season& tss_two)
{
	ost << tss_two;
	return ost;
}
