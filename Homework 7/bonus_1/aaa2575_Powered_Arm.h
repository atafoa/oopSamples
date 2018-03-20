#ifndef POWERED_ARM_H
#define POWERED_ARM_H

#include "aaa2575_Arm_Robot.h"

using namespace std;

class Powered_Arm : public virtual Arm_Robot 
{
	public:
	Powered_Arm(int mn, string n, int bl, int l, int wl, int ml, robotType t) : motor_limit(ml), motor_on(false), Robot(mn, n, bl, t), Arm_Robot(mn, n, bl, l, wl, t) {};
	bool move(int x, int y);
	bool pick_up(int weight);
	bool drop();

	protected:
	int motor_limit;
	bool motor_on;
	void power_on();
	void power_off();
};

#endif