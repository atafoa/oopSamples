#include <iostream>
#include <string>

using namespace std;

class Date
{
	public:
	Date(int y,int m, int d, int h, int min, int s);
	string to_string();
	bool operator<(const Date& date_two);
	ostream& operator<<(ostream& ost, const Date& date_two);

	private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;

};
