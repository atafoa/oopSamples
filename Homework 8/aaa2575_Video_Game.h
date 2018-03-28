#ifndef VIDEO_GAME_H
#define VIDEO_GAME_H

#include <iostream>
#include <string>

using namespace std;

class Video_Game : public Media
{
	public:
	Video_Game(int ry, string s, string t, int idNum);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Video_Game& v_two);

	private:
	int release_year;
	string studio;
	string title;
	int id_number;

};

#endif