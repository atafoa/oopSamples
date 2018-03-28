#ifndef MUSIC_ALBUM_H
#define MUSIC_ALBUM_H

#include <iostream>
#include <string>

using namespace std;

class Music_Album : public Media
{
	public:
	Music_Album(int ry, string a, vector<string> tr, string t, int idNum);
	void get_info();
	friend ostream& operator<<(ostream& ost, const Music_Album& ma_two);

	private:
	int release_year;
	string artist;
	vector<string> tracks;
	string title;
	int id_number;

};

#endif