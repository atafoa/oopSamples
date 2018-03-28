#ifndef Book_H
#define Book_H

#include "aaa2575_Media.h"

using namespace std;

class Book : public Media
{
	private:
	Book(string a, int cy);
	private:
	string author;
	int copyright_year;

}