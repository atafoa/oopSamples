#include "aaa2575_Extendable_Arm.h"

using namespace std;

Extendable_Arm:: Extendable_Arm(int mn, string n, int bl, int l, int wl,int el)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = 100;
	position = (0,0);
	length = l + el;
	weight_limit = wl;
	is_holding = false;
	extend_length = el;
	is_extended = false;
}

bool Extendable_Arm::move(int x, int y)
{

}

bool Extendable_Arm::extend()
{
	if(is_extended == true)
	{
		cout <<"My arm is already extended." << endl;
		return false;
	}
	else
	{
		cout <<"Extending my arm." << endl;
		battery_level -= 1;
		is_extended = true;
		return true;

	}

}

bool Extendable_Arm::retract()
{
	if(is_extended == false)
	{
		cout <<"My arm is already retracted." << endl;
		return false;
	}
	else
	{
		cout <<"Retracting my arm." << endl;
		is_extended = false;
		battery_level -= 1;
		return true;
	}

}