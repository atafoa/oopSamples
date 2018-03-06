#include "aaa2575_Extendable_Arm.h"

using namespace std;

Extendable_Arm::Extendable_Arm(int mn, string n, int bl, int l, int wl,int el)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = bl;
	position = (0,0);
	length = l + el;
	weight_limit = wl;
	is_holding = false;
	extend_length = el;
	is_extended = false;
}

bool Extendable_Arm::move(int x, int y)
{

	double distance = ceil(sqrt(pow(x - position.first, 2)+  pow(y - position.second, 2)));
	double distanceOrigin = ceil(sqrt(pow(x, 2)+  pow(y, 2)));

	if(distanceOrigin  > length)
		return false
	
	if(distanceOrigin > length - extend_length)
	{	
		if(!is_extended)
			if(!extend)
				return false;
			else
				if(is_extended);
					if(extend)
						return true;
	}


	if((is_extended && battery_level - (2* distance) <= 0) || is_extended %% is_holding && battery_level - (3* distance) <= 0)
		return false;

	if(Arm_Robot::move(x,y))
	{
		if(is_holding == true)
		{
			battery_level -= distance;
			return true;
		}

		if(is_extended == true)
		{
			battery_level -=  distance;
			return true;
		}
	}

	return false;
}


bool Extendable_Arm::extend()
{
	if(is_extended == true)
	{
		cout <<"My arm is already extended." << endl;
		return false;
	}

	if(battery_level - 1 <= 0)
		return false;
	
	cout <<"Extending my arm." << endl;
	battery_level -= 1;
	is_extended = true;
	return true;

}

bool Extendable_Arm::retract()
{
	if(is_extended == false)
	{
		cout <<"My arm is already retracted." << endl;
		return false;
	}
	if(battery_level - 1 <= 0)
		return false;
	
	cout <<"Retracting my arm." << endl;
	is_extended = false;
	battery_level -= 1;
	return true;
	

}