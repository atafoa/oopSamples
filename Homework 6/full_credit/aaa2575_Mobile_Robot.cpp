#include "aaa2575_Mobile_Robot.h"

using namespace std;

Mobile_Arm::Mobile_Arm(int mn, string n,int bl)
{
	model_number = mn;
	name = n;
	battery_life = bl;
	battery_level = 100;
	position = (0,0);
	speed_level = 1

}

bool Mobile_Arm::move(int x, int y)
{

}

bool Mobile_Arm::move(int x, int y, int speed)
{

}

void Mobile_Arm::set_speed_level(int speed)
{
	/*cout << "I can move at three different speeds." << endl;
	cout << "1 slow speed" << endl;
	cout << "2 average speed" << endl;
	cout << "3 fast speed" << endl;*/
	speed_level = speed;
}