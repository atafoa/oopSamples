#include "aaa2575_Mobile_Robot.h"

using namespace std;

Mobile_Robot::Mobile_Robot(int mn, string n,int bl):Robot(mn,n,bl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = bl;
	position = make_pair(0,0);
	speed_level = 1;
}

bool Mobile_Robot::move(int x, int y)
{
		if(battery_level == 0)
		{
			cout << "I have no charge left please recharge." << endl;
			return false;
		}

		cout << "Current speed is: "<< speed_level << endl;;

		int tempX = (x - position.first);
		int tempY = (y - position.second);

		tempX = pow(tempX,2);
		tempY = pow(tempY,2);

		double distance = sqrt(tempX + tempY);
		distance = ceil(distance);

		if(battery_level - distance <= 0)
		{
			cout << "Battery drained please recharge" << endl;
			return false; 
		}

		if(speed_level == 1)
		{
			battery_level -= (1*distance);
			position = make_pair(x,y);
			return true;
		}

		if(speed_level == 2)
		{
			battery_level -= (2*distance);
			position = make_pair(x,y);
			return true;
		}

		if(speed_level == 3)
		{
			battery_level -= (3*distance);
			position = make_pair(x,y);
			return true;
		}
}

bool Mobile_Robot::move(int x, int y, int speed)
{
	set_speed_level(speed);

	if(battery_level == 0)
	{
		cout << "I have no charge left please recharge." << endl;
		return false;
	}

	int tempX = (x - position.first);
	int tempY = (y - position.second);

	tempX = pow(tempX,2);
	tempY = pow(tempY,2);

	double distance = sqrt(tempX + tempY);
	distance = ceil(distance);

	if(battery_level - distance <= 0)
	{
		cout << "Battery drained please recharge" << endl;
		return false; 
	}

	if(speed_level == 1)
	{
		battery_level -= (1*distance);
		position = make_pair(x,y);
		return true;
	}

	if(speed_level == 2)
	{
		battery_level -= (2*distance);
		position = make_pair(x,y);
		return true;
	}

	if(speed_level == 3)
	{
		battery_level -= (3*distance);
		position = make_pair(x,y);
		return true;
	}


}

void Mobile_Robot::set_speed_level(int speed)
{
	speed_level = speed;
	cout << "Current speed is: "<< speed_level << endl;;
}