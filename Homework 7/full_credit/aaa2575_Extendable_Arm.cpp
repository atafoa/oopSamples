#include "aaa2575_Extendable_Arm.h"

#include <iostream>

using namespace std;

bool Extendable_Arm::move(int x, int y)
 {
	int distance = ceil(sqrt(pow(x - position.first, 2) + pow(y - position.second, 2)));
	int distanceFromOrigin = ceil(sqrt(pow(x, 2) + pow(y, 2)));

	if (distanceFromOrigin > length) 
	{
		cout << name << " unable to move to (" << x << ", " << y << ") it is outside of arm length" << endl;
		return false;
	}

	if (distanceFromOrigin > length - extend_length) 
	{
		if (!is_extended)
			if (!extend()) 
				return false;
	}
	else 
	{
		if (is_extended)
			if (!retract())
			 	return false;
	}

	if ((is_extended && battery_level - (2 * distance) <= 0) || (is_extended && is_holding && battery_level - (3 * distance) <= 0)) 
		return false;
	
	if (Arm_Robot::move(x, y)) 
	{	
		battery_level -= (is_extended) ? distance : 0;
		return true;
	}

	return false;
}

bool Extendable_Arm::extend() 
{
	if (battery_level - 1 <= 0) 
		return false;

	is_extended = true;
	battery_level -= 1;
	cout << name << "'s arm is extended" << endl;
	cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
	return true;
}

bool Extendable_Arm::retract() 
{
	if (battery_level - 1 <= 0)
	 return false;
	is_extended = false;
	battery_level -= 1;
	cout << name << "'s arm is retracted" << endl;
	cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
	return true;
}