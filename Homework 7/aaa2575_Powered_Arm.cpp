#include "aaa2575_Powered_Arm.h"
#include <cmath>

using namespace std;

Powered_Arm::Powered_Arm(int mn, string n, int bl, int l, int wl, int ml):Arm_Robot(mn,n,bl,l,wl), Robot(mn,n,bl)
{
	motor_limit = ml;
	motor_on = false;
}

bool Powered_Arm::move(int x, int y)
{
	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
	int distanceFromOrigin = ceil(sqrt(pow(0-x,2) + pow(0-y,2)));

	if(is_holding)
        if(motor_on)
            distance *= 4;
        else
            distance *= 2;
    else
        if(motor_on)
            distance *= 3;

	if(battery_level < distance || length < distanceFromOrigin)
	    return false;
	    
	battery_level -= distance;
	position = make_pair(x,y);
	return true;
}

bool Powered_Arm::pick_up(int weight)
{
	if(battery_level == 0 || is_holding)
        return false;
    if(weight_limit < weight)
        if(motor_limit < weight)
            return false;
        else
            power_on();
        
    is_holding = true;
    battery_level -= 1; 
    return true;

}

bool Powered_Arm::drop()
{
	 if(!is_holding || battery_level == 0)
        return false;
    
    is_holding = false;
  	power_off();
    battery_level -= 1;
    return true;
}

void Powered_Arm::power_on()
{
	motor_on = true;
}

void Powered_Arm::power_off()
{
	motor_on = false;

}