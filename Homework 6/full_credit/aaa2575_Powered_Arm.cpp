#include "aaa2575_Powered_Arm.h"
#include <cmath>
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
	motor_limit = ml;
	motor_on = false;
}

bool Powered_Arm::move(int x, int y)
{
	int tempX = (x-position.first);
	int tempY = (y-position.second);

	tempX = pow(tempX,2);
	tempY = pow(tempY,2);
	double distance = sqrt(tempX + tempY);
	distance = ceil(distance);

	if(battery_level - distance <= 0)
	{
		cout << "Battery draining, please recharge" << endl;
		return false;
	}

	if(is_holding && (battery_level -(distance * 2) <= 0))
	{
		cout << "Battery draining, please recharge" << endl;
		return false;
	}

	if(motor_on && (battery_level - (2 * distance)) <= 0)
	{
		cout << "Battery draining, please recharge" << endl;
		return false;
	}

	if(is_holding && motor_on)
	{
		battery_level -= (4 * distance);
		position = make_pair(x,y);
	}

	else if(motor_on)
	{
		battery_level -= (3*distance);
		position = make_pair(x,y);

	}
	else
	{
		Arm_Robot::move(x,y);
	}

	return true;
}

bool Powered_Arm::pick_up(int weight)
{
	if(is_holding == true)
	{
		cout << "Already Holding another object." << endl;
		return false;
	}

	if(weight > weight_limit)
	{
		cout << "This object is too heavy for me to lift." << endl;
		cout << "The motor will be turned on to lift this." << endl;
		power_on();
	}
	if(weight > (weight_limit + motor_limit))
	{
		cout << "This object is too heavy" << endl;
		return false;
	}
	else
	{
		is_holding = true;
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
		return true;
	}

	is_holding = false;
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