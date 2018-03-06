#include "aaa2575_Powered_Arm.h"

using namespace std;

Powered_Arm::Powered_Arm(int mn, string n, int bl, int l, int wl, int ml):Arm_Robot(mn,n,bl,l,wl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level =  bl;
	position = make_pair(0,0);
	length = l;
	weight_limit = wl;
	is_holding = false;
	int motor_limit = ml;
	motor_on = false;
}

bool Powered_Arm::move(int x, int y)
{
	double distance = ceil(sqrt(pow(x - position.first, 2)+  pow(y - position.second, 2)));
	double distanceOrigin = ceil(sqrt(pow(x, 2)+  pow(y, 2)));

	if(distanceOrigin  > length)
		return false;
	
	if(Arm_Robot::move(x,y))
	{
		if(is_holding == true)
		{
			battery_level -= distance;
			return true;
		}

		if(motor_on == true)
		{
			battery_level -=  (2*distance);
			return true;
		}
	}

	return false;
}

bool Powered_Arm::pick_up(int weight)
{

	cout << "Picking up object" << endl;

	if(is_holding == true)
	{
		cout << "Already Holding another object." << endl;
		return false;
	}

	if(weight > weight_limit)
	{
		cout << "This object is too heavy for me to lift." << endl;
		cout << "The motor will be turned on to lift this." << endl;
		is_holding = true;
		power_on();
		return true;
	}

}

bool Powered_Arm::drop()
{

	cout << "Dropping object" << endl;

	if(is_holding == false)
	{
		cout << "There is no object to drop" << endl;
		return false;
	}

	if(motor_on == true)
	{
		cout << "Turning the motor off." << endl;
		is_holding = false;
		power_off(); 
	}

}

void Powered_Arm::power_on()
{
	motor_on = true;
}

void Powered_Arm::power_off()
{
	motor_on = false;

}