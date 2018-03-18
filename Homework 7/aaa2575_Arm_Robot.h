#ifndef AAA2575_ARM_ROBOT_H
#define AAA2575_ARM_ROBOT_H

#include "aaa2575_Robot.h"

class Arm_Robot : public virtual Robot 
{
	public:
		Arm_Robot(int mn, string n, int bl, int l, int wl);
		bool move(int x, int y);
		bool pick_up(int weight);
		bool drop();
	protected:
		int length;
		int weight_limit;
		bool is_holding;
};

#endif //ARM_ROBOT_H
