#include "aaa2575_Arm_Robot.h"

using namespace std;

Arm_Robot::Arm_Robot(int mn, string n, int bl, int l, int wl):Robot(mn, n, bl)
{

	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = bl; //Max battery level is 100
	position = make_pair(0,0);
	length = l;
	weight_limit = wl;
	is_holding = false;
}

bool Arm_Robot::move(int x, int y)
{
	double distance = ceil(sqrt(pow(x - position.first, 2)+  pow(y - position.second, 2)));
	double distanceOrigin = ceil(sqrt(pow(x, 2)+  pow(y, 2)));

	if( distanceOrigin  <= length || is_holding == true && battery_life - (2*distance) > 0)
	{
		if( Robot::move(x,y))
		{
			battery_level -= distance;
			return true;
			
		}
	}

	return false;
}

bool Arm_Robot::pick_up(int weight)
{

	if(is_holding == true)
	{
		cout << "I cannot pick up this object. I am already holding another object." << endl;
		return false;
	}

	if((battery_level - 1) != 0)
	{
		if(weight > weight_limit)
		{
			cout << "This object is too heavy I cannot carry it." << endl;
			cout << "The weight limit is: " << weight_limit;
			is_holding = false;
			return false;
		}
		else
		{
			cout << "This object is under the weight limit."<< endl;
			cout << "I can pick up this object" << endl;
			is_holding = true;
			battery_level -= 1;
			return true;
		}
	}

	return false;
}

bool Arm_Robot::drop()
{

	cout << "Dropping object" << endl;
	
	if(is_holding == false)
	{
		cout << "There is no object to drop." << endl;
		return false;
	}
	
	if((battery_level - 1) != 0)
	{
		
		cout << "Dropping Object" << endl;
		is_holding = false;
		battery_level -= 1;
		return true;
	}

	return false;
}