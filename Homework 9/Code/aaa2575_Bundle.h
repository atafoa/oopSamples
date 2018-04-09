#ifndef BUNDLE_H
#define BUNDLE_H

#include "aaa2575_Media.h"

#include <iostream>

using namespace std;

class Bundle : public Media
{
	public:
	Bundle(string n, int idNum, string callNum, string t, string g);
	bool check_out();
	void get_info();
	void list_items();
	void add_to_bundle(Media media);
	void remove_from_bundle(int id);
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Bundle& bundle_two);

	private:
	bool checked_out;
	string name;
	vector<Media> medias;

};

#endif

