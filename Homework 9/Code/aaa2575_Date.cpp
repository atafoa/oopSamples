#include "aaa2575_Date.h"
#include <iostream>

using namespace std;

Date::Date(int m, int d, int y)
{
	day = d;
	month = m;
	year = y;
}

double Date::to_julianDate()
{
	return (1461 * (year + 4800 + (month - 14)/ 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14)/ 12))) / 12 - (3*((year + 4900 + (month - 14)/ 12)/100)) / 4 + day - 32075;
}


string Date::to_string() const
{
	return  "On: "+std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

ostream& operator<<(ostream& ost, const Date& date_two)
{
	ost << date_two.to_string();
	return ost;
}

Date Date::operator = (Date const &date_two)
{
	Date d1{0,0,0};
	d1.month = date_two.month;
	d1.day = date_two.day;
	d1.year =  date_two.year;
	return d1;
}
