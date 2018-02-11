#include "aaa2575_Date.h"

using namespace std;

Date:: Date(int y,int m, int d, int h, int min, int s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = min;
	second = s;
}

string Date:: to_string()
{
	return std::to_string(month) + " " + std::to_string(day) + " " + std::to_string(year) + " " + std::to_string(hour) + " " + std::to_string(minute) + " " + std::to_sting(second);
}

bool Date::operator< (const Date& date_two)
{
	return ((this->year < date_two.year) && (this->month < date_two.month) && (this->day < date_two.day));
}
ostream& operator<<(ostream& ost, const Date& date_two);
{
	ost << date_two.to_string();
	return ost;
}
