#include "aaa2575_Powered_Arm.h"

#include <iostream>

using namespace std;

bool Powered_Arm::move(int x, int y) 
{
	double d = ceil(sqrt(pow(x - position.first, 2) + pow(y - position.second, 2)));
	double d_or = ceil(sqrt(pow(x, 2) + pow(y, 2)));
	if (d_or > length || (motor_on && battery_level - (3 * d) <= 0) || (motor_on && is_holding && battery_level - (4 * d) <= 0)) return false;

	if (Arm_Robot::move(x, y)) {
		battery_level -= (motor_on) ? (2 * d) : 0;
		return true;
	}

	return false;
}

bool Powered_Arm::pick_up(int weight) 
{
	if (weight > motor_limit) 
	{
		cout << name << " unable to pick up weight it is too heavy for motor" << endl;
		return false;
	}

	if (!is_holding) 
	{
		if (battery_level - 1 <= 0) 
			return false;

		if (weight > weight_limit) 
			power_on();

		is_holding = true;
		battery_level -= 1;
		cout << name << " picked up weight of " << weight << endl;
		cout << name << " battery is at " << get_battery_percentage() << "%" << endl;
		return true;
	}

	return false;
}

bool Powered_Arm::drop() 
{
	if (is_holding) 
	{
		if (battery_level - 1 <= 0) 
			return false;

		if (motor_on)
		 	power_off();
		 
		is_holding = false;
		battery_level -= 1;
		cout << name << " dropped object" << endl;
		return true;
	}

	return false;
}

void Powered_Arm::power_on() 
{
	motor_on = true;
	cout << name << " Motor ON" << endl;
}

void Powered_Arm::power_off() 
{
	motor_on = false;
	cout << name <<" Motor OFF" << endl;
}