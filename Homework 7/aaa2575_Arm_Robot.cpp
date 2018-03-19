#include "aaa2575_Arm_Robot.h"

using namespace std;

Arm_Robot::Arm_Robot(int mn, string n, int bl, int l, int wl):Robot(mn, n, bl)
{

	length = l;
	weight_limit = wl;
	is_holding = false;
}

bool Arm_Robot::move(int x, int y)
{
	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
	int distanceFromOrigin = ceil(sqrt(pow(0-x,2) + pow(0-y,2)));

	if(is_holding)
		distance *= 2;

	 if(battery_level < distance || length < distanceFromOrigin)
        return false;
    
    battery_level =- distance;
    position = make_pair(x,y);
    return true;
}

bool Arm_Robot::pick_up(int weight)
{
	 if(weight_limit < weight || is_holding || battery_level == 0)
	{
		cout << "I cannot pick up this object." << endl;
		return false;
	}

	cout << "This object is under the weight limit."<< endl;
	cout << "I can pick up this object" << endl;
	is_holding = true;
	battery_level -= 1;
	return true;
}

bool Arm_Robot::drop()
{
	if(!is_holding || battery_level == 0)
	{
		cout << "There is no object to drop." << endl;
		return false;
	}

	
	cout << "Dropping Object" << endl;
	is_holding = false;
	battery_level -= 1;
	return true;
}
