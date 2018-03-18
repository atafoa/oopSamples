#ifndef AAA2575_MOBILE_ROBOT_H
#define AAA2575_MOBILE_ROBOT_H

#include "aaa2575_Robot.h"

using namespace std;

class Mobile_Robot: public virtual Robot 
{
	public:
		Mobile_Robot(int mn, string n, int bl);
		bool move(int x, int y);
		bool move(int x, int y, int speed);

	protected:
		int speed_level;
		void set_speed_level(int speed);
};

#endif //MOBILE_ROBOT