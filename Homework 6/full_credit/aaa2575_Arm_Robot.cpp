#include "aaa2575_Arm_Robot.h"

using namsepace std;

Arm_Robot::Arm_Robot(int mn, string n, int bl, int l, int wl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = 100; //Max battery level is 100
	position = (0,0);
	length = l;
	weight_limit = wl;
	is_holding = false;
}

bool Arm_Robot::move(int x, int y)
{


	if (x < length)
	{
		cout << "I cannot move here. This location is   past the length of my arm" << endl;
		return false;
	}
}

bool Arm_Robot::pick_up()
{

	int objectWeight;
	cout << "What is the weight of the object you want me to lift: ";
	cin >> objectWeight;

	if(is_holding == true)
	{
		cout << "I cannot pick up this object. I am already holding another object." << endl;
		return false;
	}

	else
	{
		if(objectWeight > weight_limit)
		{
			cout << "This object is too heavy I cannot carry it." << endl;
			cout << "The weight limit is: " << weight_limit;
			is_holding = false;
			return false;
		}
		else()
		{
			cout << "This object is under the weight limit."<< endl;
			cout << "I can pick up this object" << endl;
			is_holding = true;
			battery_level -= 1;
			return true;
		}
	}
}

bool Arm_Robot::Drop()
{
	if(is_holding == false)
	{
		cout << "There is no object to drop." << endl;
		return false;
	}
	else
	{
		cout << "Dropping Object" << endl;
		is_holding = false;
		battery_level -= 1;
		return true;
	}
}