#include "aaa2575_Extendable_Arm.h"

using namespace std;

Extendable_Arm::Extendable_Arm(int mn, string n, int bl, int l, int wl,int el):Arm_Robot(mn,n,bl,l,wl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = bl;
	position = make_pair(0,0);
	length = l;
	weight_limit = wl;
	is_holding = false;
	extend_length = el;
	is_extended = false;
}

bool Extendable_Arm::move(int x, int y)
{

	int tempX = (x-position.first);
	int tempY = (y-position.second);

	tempX = pow(tempX,2);
	tempY =  pow(tempY,2);

	double distance = sqrt(tempX+tempY);
	distance = ceil(distance);

	if(distance > length  && distance < (length + extend_length))
	{
		cout << "Extending my arm" << endl;
		extend();
	}
	
	if(distance < length && is_extended == true)
	{
		cout << "Arm doesn't need to be extended" << endl;
		retract();
		
	}
	if(distance > (length + extend_length))
	{
		cout << "Cannot reach" << endl;
		return false;
	}
	if(battery_level - distance <= 0)
	{
		cout << "Battery draining, please recharge" << endl;
		return false;
	}

	if(is_holding && (battery_level - (distance *2)) <= 0)
	{
		return false;
	}

	if(is_extended && (battery_level - (distance *2)) <= 0)
	{
		return false;
	}

	if(is_extended && is_holding)
	{
		battery_level -= distance;
	}
	
	Arm_Robot:: move(x,y);
	position = make_pair(x,y);
	return true;
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
	
	length = length + extend_length;
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
	length = length - extend_length;
	is_extended = false;
	battery_level -= 1;
	return true;
	

}
