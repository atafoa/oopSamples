#ifndef Movie_H
#define Movie_H

#include "aaa2575_Media.h"

using namespace std;

class Movie: public Media
{
	public:
	Movie(string a, int cy);
	private:
	string author;
	int copyright_year;

}