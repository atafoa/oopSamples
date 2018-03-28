#ifndef MEDIA_H
#define MEDIA_H

#include <vector>
#include <iostream>

using namespace std;

class Media
{
	public:
	Media(int idNum, string callNum, string t, string g);
	bool check_out();
	bool check_in();
	void get_info();
	friend ostream& operator<<(ostream& ost, const Media& media_two);

	private:
	bool checked_out;

	protected:
	int id_number;
	string call_number;
	string title;
	string genre;
};

#endif
