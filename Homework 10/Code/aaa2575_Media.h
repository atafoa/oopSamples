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
	int get_id();
	void get_info();
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Media& media_two);
	
	protected:
	int id_number;
	string call_number;
	string title;
	string genre;
	bool checked_out;
};

#endif
