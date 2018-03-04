#include "aaa2575_Robot.h"

using namespace std;

Robot::Robot(int mn, string n, int bl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = 100;	//max battery level is 100%
	position = (0,0);

}

bool Robot::move(int x, int y)
{

	position.insert(make_pair(x,y));
	int distance;
	int power;

}

void Robot::charge() // returns battery level to max
{
	battery_level = 100;
}

double Robot::get_battery_percentage()
{
	double percent = (battery_level / 100)*100
	return percent;
}