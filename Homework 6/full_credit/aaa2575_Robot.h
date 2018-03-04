#ifndef AAA2575_ROBOT_H
#define AAA2575_ROBOT_H

#include <iostream>
#include <string>
using namespace std

class Robot
{
	public:
		Robot(int mn, string n, int bl);
		bool move(int x, int y);
		void charge();
		double get_battery_percentage();

	protected:
		int model_number;
		string name;
		int battery_life;
		int battery_level;
		pair<int,int> position;
};

#endif	//ROBOT_H


