#include "aaa2575_Powered_Arm.h"

using namespace std;

Powered_Arm::Powered_Arm(int mn, string n, int bl, int l, int wl, int ml)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = 100; //Max battery level is 100
	position = (0,0);
	length = l;
	weight_limit = wl;
	is_holding = false;
	int motor_limit = ml;
	motor_on = false;
}

bool Powered_Arm::move(int x, int y)
{

}

bool Powered_Arm::pick_up(int weight)
{

	cout << "Picking up object" << endl;

	if(weight > weight_limit)
	{
		cout << "This object is too heavy for me to lift." << endl;
		cout << "The motor will be turned on to lift this." << endl;
		is_holding = true;
		power_on();
	}

}

bool Powered_Arm::drop()
{

	cout << "Dropping object" << endl;

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