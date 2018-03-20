#include "aaa2575_Arm_Robot.h"

#include <iostream>

using namespace std;

bool Arm_Robot::move(int x, int y) 
{
	int distance = ceil(sqrt(pow(x - position.first, 2) + pow(y - position.second, 2)));
	int distanceFromOrigin = ceil(sqrt(pow(x, 2) + pow(y, 2)));

	if (distanceFromOrigin > length) 
	{
		cout << name << " unable to move to (" << x << ", " << y << ") (outside of arm length)" << endl;
		return false;
	}

	if ((is_holding && battery_level - (2 * distance) <= 0)) 
		return false;

	bool flag = true;
	if (battery_level - distance <= 0) 
	{
		cout << name << " not enough power to move to (" << x << ", " << y << ")" << endl;
		flag = false;
	}

	battery_level -= distance;
	position = make_pair(x, y);
	

	if(flag)
	{
		battery_level -= (is_holding) ? distance : 0;
		cout << name << " moved to (" << x << ", " << y << ")" << endl;
		cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
		return true;
	}
	return false;
}

bool Arm_Robot::pick_up(int weight) 
{
	if (!is_holding) 
	{
		if (weight > weight_limit) 
		{
			cout << name << " unable to pick up weight of " << weight << " (exceeds weight limit)" << endl;
			return false;
		}

		if (battery_level - 1 <= 0) 
			return false;

		is_holding = true;
		battery_level -= 1;
		cout << name << " picked up weight of " << weight << endl;
		cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
		return true;
	}

	return false;
}

bool Arm_Robot::drop() 
{
	if (is_holding) 
	{
		if (battery_level - 1 <= 0) 
			return false;
		
		is_holding = false;
		battery_level -= 1;
		cout << name << " dropped object" << endl;
		cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
		return true;
	}

	return false;
}