#ifndef VIDEO_GAME_H
#define VIDEO_GAME_H

#include "aaa2575_Media.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Video_Game : public Media
{
	public:
	Video_Game(int ry, string s, int idNum, string t, string g, string callNum);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Video_Game& v_two);

	private:
	int release_year;
	string studio;
	string title;
	int id_number;
	string genre;

};

#endif