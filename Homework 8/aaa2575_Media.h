#ifndef MEDIA_H
#define MEDIA_H

#include "aaa2575_Librarian.h"
#include <vector>
#include <iostream>

using namespace std;

class Media
{
	public:
	Media(int idNum, string callNum, string t, string g);
	bool is_checked_out();
	void get_info();
	friend ostream& operator<<(ostream& ost, const Media& media_two);

	private:
	bool checked_out;

	protected:
	int id_number;
	string call_number;
	string title;
	string genre;
}

#endif
