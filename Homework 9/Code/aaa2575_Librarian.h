#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <iostream>
#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include <string>
#include <vector>

using namespace std;

class Librarian
{
	public:
	Librarian(string n, int idNum);
	void check_out_media(int mediaID, vector<Media> media);
	void check_out_bundle(int bundleID, vector<Bundle> bundle);
	void check_in_media(int mediaID, vector<Media> media);
	void check_in_bundle(int bundleID, vector<Bundle> bundle);
	void get_info();
	string to_string() const;
	friend ostream& operator<<(ostream& ost, const Librarian& lb_two);
	


	private:
	string name;
	int id;

};

#endif
