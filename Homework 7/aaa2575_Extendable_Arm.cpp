#include "aaa2575_Extendable_Arm.h"

using namespace std;

Extendable_Arm::Extendable_Arm(int mn, string n, int bl, int l, int wl,int el):Arm_Robot(mn,n,bl,l,wl), Robot(mn, n,bl)
{
	extend_length = el;
	is_extended = false;
}

bool Extendable_Arm::move(int x, int y)
{

	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
	int distanceFromOrigin = ceil(sqrt(pow(0-x,2) + pow(0-y,2)));

	if(length < distanceFromOrigin)
       if(length + extend_length < distanceFromOrigin)
            return false;
        else
            if(!is_extended)
                if(!extend())
                    return false;
    if(length >= distanceFromOrigin)
        if(is_extended)
            if(!retract())
                return false;
    
    if(is_holding)
        if(is_extended)
            distance *= 3;
        else
            distance *= 2;
            
    if(battery_level < distance)
        return false;
        
    battery_level =- distance;
    position = make_pair(x,y);
    
    return true;
}


bool Extendable_Arm::extend()
{
	if(is_extended == true || battery_level == 0)
	{
		cout <<"Error." << endl;
		return false;
	}

	battery_level -= 1;
	is_extended = true;
	return true;

}

bool Extendable_Arm::retract()
{
	if(is_extended == false || battery_level == 0)
	{
		cout <<"Error." << endl;
		return false;
	}
	
	is_extended = false;
	battery_level -= 1;
	return true;
}
