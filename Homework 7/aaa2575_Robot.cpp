#include "aaa2575_Robot.h"

using namespace std;

Robot::Robot(int mn, string n, int bl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = bl;	//max battery level is 100%
	position = make_pair(0,0);

}

bool Robot::move(int x, int y)
{
	if(battery_level == 0)
	{
		cout << "I have no charge left please recharge." << endl;
		return false;
	}

	int tempX = (x - position.first);
	int tempY = (y - position.second);

	tempX = pow(tempX,2);
	tempY = pow(tempY,2);

	double distance = sqrt(tempX + tempY);
	distance = ceil(distance);

	if(battery_level - distance <= 0)
	{
		cout << "Battery drained please recharge." << endl;
		return false; 
	}

	battery_level -= (1*distance);
	position = make_pair(x,y);
	return true;
}

void Robot::charge() // returns battery level to max
{
	battery_level = battery_life;
	cout << "Battery has been fully charged." << endl;
}

double Robot::get_battery_percentage()
{
	double percent = (battery_level * 100);
	percent = percent / 100;
	cout << "Battery is at " << percent <<" %" << "percent"<< endl;
	return percent;
}

string Robot::get_name()
{
	return name;
} 

void Robot::get_position()
{
	cout << "(" << position.first << ", " <<   position.second << ")";
}
