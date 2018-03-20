#include "aaa2575_Super_Arm.h"

#include <iostream>

using namespace std;

bool Super_Arm::move(int x, int y) 
{
    int distance = ceil(sqrt(pow(x - Extendable_Arm::position.first, 2) + pow(y - Extendable_Arm::position.second, 2)));
	int distanceFromOrigin = ceil(sqrt(pow(x, 2) + pow(y, 2)));

	if (distanceFromOrigin > Extendable_Arm::length || (Powered_Arm::motor_on && Extendable_Arm::battery_level - (3 * distance) <= 0) || (Powered_Arm::motor_on && Extendable_Arm::is_holding && Extendable_Arm::battery_level - (4 * distance) <= 0) || (Powered_Arm::motor_on && Extendable_Arm::is_holding && Extendable_Arm::is_extended && Extendable_Arm::battery_level - (5 * distance) <= 0)) 
		return false;

	if (Extendable_Arm::move(x, y)) 
	{
		Extendable_Arm::battery_level -= (Powered_Arm::motor_on) ? (2 * distance) : 0;
		return true;
	}

	return false;
}