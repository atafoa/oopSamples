#include "aaa2575_Mobile_Arm.h"

#include <iostream>

using namespace std;

bool Mobile_Arm::move(int x, int y) 
{
    return Mobile_Robot::move(x, y);
}

bool Mobile_Arm::move(int x, int y, int speed) 
{
    return Mobile_Robot::move(x, y, speed);
}

bool Mobile_Arm::move_arm(int x, int y) 
{
    return Super_Arm::move(x, y);
}

bool Mobile_Arm::move(int base_x, int base_y, int arm_x, int arm_y) 
{
    int distance = ceil(sqrt(pow(base_x - Mobile_Robot::position.first, 2) + pow(base_y - Mobile_Robot::position.second, 2)));
	int distanceFromOrigin = ceil(sqrt(pow(arm_x - base_x, 2) + pow(arm_y - base_y, 2)));

	if (distanceFromOrigin > Extendable_Arm::length) 
	{
		cout << Mobile_Robot::name << " unable to move to (" << base_x << ", " << base_y << ") it is outside of arm length" << endl;
		return false;
	}

	if (distanceFromOrigin > Extendable_Arm::length - Extendable_Arm::extend_length) 
	{
		if (!Extendable_Arm::is_extended)
			if (!Extendable_Arm::extend()) 
				return false;
	} 
	else 
	{
		if (Extendable_Arm::is_extended)
			if (!Extendable_Arm::retract()) 
				return false;
	}

	if ((Extendable_Arm::is_extended && Mobile_Robot::battery_level - (2 * distance) <= 0) || (Extendable_Arm::is_extended && Extendable_Arm::is_holding && Mobile_Robot::battery_level - (3 * distance) <= 0))
	 return false;

	if (Extendable_Arm::move(base_x, base_y)) 
	{
		Mobile_Robot::battery_level -= (Extendable_Arm::is_extended) ? distance : 0;
		return true;
	}

	return false;
}

bool Mobile_Arm::move(int base_x, int base_y, int arm_x, int arm_y, int speed) 
{
    int distance = ceil(sqrt(pow(base_x - Mobile_Robot::position.first, 2) + pow(base_y - Mobile_Robot::position.second, 2)));
	int distanceFromOrigin = ceil(sqrt(pow(arm_x - base_x, 2) + pow(arm_y - base_y, 2)));

	if (distanceFromOrigin > Extendable_Arm::length)
	{
		cout << Mobile_Robot::name << " unable to move to (" << base_x << ", " << base_y << ") it is outside of arm length" << endl;
		return false;
	}

	if (distanceFromOrigin > Extendable_Arm::length - Extendable_Arm::extend_length)
	{
		if (!Extendable_Arm::is_extended)
			if (!Extendable_Arm::extend())
			 return false;
	} 
	else
	{
		if (Extendable_Arm::is_extended)
			if (!Extendable_Arm::retract())
			 return false;
	}

	if ((Extendable_Arm::is_extended && Mobile_Robot::battery_level - (2 * distance) <= 0) || (Extendable_Arm::is_extended && Extendable_Arm::is_holding && Mobile_Robot::battery_level - (3 * distance) <= 0)) 
		return false;

	if (Extendable_Arm::move(base_x, base_y)) 
	{
		Mobile_Robot::battery_level -= (Extendable_Arm::is_extended) ? (Mobile_Robot::speed_level - 1) * distance : 0;
		return true;
	}

	return false;
}