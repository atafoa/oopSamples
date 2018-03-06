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

}

bool Mobile_Robot::move(int x, int y, int speed)
{

}

void Mobile_Robot::set_speed_level(int speed)
{
	/*cout << "I can move at three different speeds." << endl;
	cout << "1 slow speed" << endl;
	cout << "2 average speed" << endl;
	cout << "3 fast speed" << endl;*/
	speed_level = speed;
}