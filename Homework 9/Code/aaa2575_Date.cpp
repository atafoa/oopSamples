#include "aaa2575_Date.h"
#include <iostream>

using namespace std;

Date::Date(int m, int d, int y)
{
	day = d;
	month = m;
	year = y;
}

string Date::to_string() const
{
	return  "On: "+std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

bool Date::operator<(const Date& date_two) const
{
	if (this -> year < date_two.year)
		return true;
	if (this -> year > date_two.year)
		return false;
	if (this -> month < date_two.month)
		return true;
	if (this -> month > date_two.month)
		return false;
	if (this -> day < date_two.day)
		return true;
	if (this -> day > date_two.day)
		return false;
	return false;
}
ostream& operator<<(ostream& ost, const Date& date_two)
{
	ost << date_two.to_string();
	return ost;
}