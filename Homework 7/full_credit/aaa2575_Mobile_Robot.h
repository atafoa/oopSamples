#ifndef MOBILE_ROBOT_H
#define MOBILE_ROBOT_H

#include "aaa2575_Robot.h"

using namespace std;

class Mobile_Robot : public virtual Robot 
{
	public:
	Mobile_Robot(int mn, string n, int bl, string t) : speed_level(1), Robot(mn, n, bl, t) {};
	bool move(int x, int y);
	bool move(int x, int y, int speed);

	protected:
	int speed_level;
	void set_speed_level(int speed);
};

#endif