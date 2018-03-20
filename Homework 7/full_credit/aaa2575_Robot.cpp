#include "aaa2575_Robot.h"

#include <cmath>
#include <iostream>

using namespace std;

void Robot::charge() 
{
	battery_level = battery_life;
	cout << name << ": Battery fully charged" << endl;
}

double Robot::get_battery_percentage() 
{
	return ((double) battery_level / (double) battery_life) * 100;
}

string Robot::get_Robot_Type() 
{
	return type;
}