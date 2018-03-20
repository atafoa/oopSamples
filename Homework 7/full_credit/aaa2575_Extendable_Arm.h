#ifndef EXTENDABLE_ARM_H
#define EXTENDABLE_ARM_H

#include "aaa2575_Arm_Robot.h"

using namespace std;

class Extendable_Arm : public virtual Arm_Robot 
{
	public:
	Extendable_Arm(int mn, string n, int bl, int l, int wl, int el, string t) : extend_length(el), is_extended(false), Robot(mn, n, bl, t), Arm_Robot(mn, n, bl, el + l, wl, t) {};
	bool move(int x, int y);

	protected:
	int extend_length;
	bool is_extended;
	bool extend();
	bool retract();
};

#endif