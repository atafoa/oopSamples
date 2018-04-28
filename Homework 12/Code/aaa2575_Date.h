#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date
{
	public:
	Date(int m, int d, int y);
	string to_string() const;
	double to_julianDate();
	Date set_date(int m,int d,int y);
	friend ostream& operator<<(ostream& ost, const Date& date_two);

	private:
	int year;
	int month;
	int day;
};

#endif
