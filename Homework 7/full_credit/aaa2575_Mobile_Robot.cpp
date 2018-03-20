#include "aaa2575_Mobile_Robot.h"

#include <iostream>

using namespace std;

bool Mobile_Robot::move(int x, int y) 
{
	int distance = ceil(sqrt(pow(x - position.first, 2) + pow(y - position.second, 2)));

	if (battery_level - ((speed_level - 1) * distance) <= 0) 
		return false;

	bool flag = true;

	if (battery_level - distance <= 0) 
	{
		cout << name << " not enough power to move to (" << x << ", " << y << ")" << endl;
		flag = false;
	}

	battery_level -= distance;
	position = make_pair(x, y);
	cout << name << " moved to (" << x << ", " << y << ")" << endl;
	cout << name << " battery is at " << get_battery_percentage() << "%" << endl;

	if (flag) 
	{
		battery_level -= (speed_level - 1) * distance;
		cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
		return true;
	}

	return false;
}

bool Mobile_Robot::move(int x, int y, int speed) 
{

	if (speed < 1 || speed > 3)
	 return false;

	set_speed_level(speed);
	return move(x, y);
}

void Mobile_Robot::set_speed_level(int speed) 
{
	speed_level = speed;
	cout << name << " current speed is  " << speed << endl;
}