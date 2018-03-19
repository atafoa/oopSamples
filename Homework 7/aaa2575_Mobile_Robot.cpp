#include "aaa2575_Mobile_Robot.h"

using namespace std;

Mobile_Robot::Mobile_Robot(int mn, string n,int bl):Robot(mn,n,bl)
{
	speed_level = 1;
}

bool Mobile_Robot::move(int x, int y)
{
	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
    
    if(speed_level == 2)
        distance *= 2;
    if(speed_level == 3)
        distance *= 3;
    if(battery_level < distance)
        return false;
    
    battery_level -= distance;
    position = make_pair(x, y);
    return true; 	
}

bool Mobile_Robot::move(int x, int y, int speed)
{
	set_speed_level(speed);
	int distance = ceil(sqrt(pow(x-position.first,2) + pow(y-position.second,2)));
    
    if(speed_level == 2)
        distance *= 2;
    if(speed_level == 3)
        distance *= 3;
    if(battery_level < distance)
        return false;
    
    battery_level -= distance;
    position = make_pair(x, y);
    return true; 

}

void Mobile_Robot::set_speed_level(int speed)
{
	speed_level = speed;
	cout << "Current speed is: "<< speed_level << endl;;
}