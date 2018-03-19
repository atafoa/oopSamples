#include "aaa2575_Super_Arm.h"

using namespace std;

bool Super_Arm::move(int x, int y)
{
	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
	int distanceFromOrigin = ceil(sqrt(pow(0-x,2) + pow(0-y,2)));

	if(is_holding)
		if(motor_on)
			if(is_extended)
				distance *= 5;
			else
				distance *= 4;
		else
			if(is_extended)
				distance  *= 3;
			else
				distance *= 2;
	else
		if(is_extended)
			distance *= 2;

	

	if(battery_level < distance || length < distanceFromOrigin)
	    return false;

	battery_level -= distance;
	position = make_pair(x,y);
	return true;

}

