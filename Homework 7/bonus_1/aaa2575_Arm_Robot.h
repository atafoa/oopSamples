#ifndef ARM_ROBOT_H
#define ARM_ROBOT_H

#include "aaa2575_Robot.h"

using namespace std;

class Arm_Robot : public virtual Robot 
{

	public:
	Arm_Robot(int mn, string n, int bl, int l, int wl, robotType t) : length(l), weight_limit(wl), is_holding(false), Robot(mn, n, bl, t) {};
	bool move(int x, int y);
	bool pick_up(int weight);
	bool drop();

	protected:
	int length;
	int weight_limit;
	bool is_holding;
};

#endif