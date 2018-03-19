#ifndef AAA2575_EXTENDABLE_ARM_H
#define AAA2575_EXTENDABLE_ARM_H

#include "aaa2575_Arm_Robot.h"

class Extendable_Arm : public virtual Arm_Robot
{

	public:
		Extendable_Arm(int mn, string n, int bl, int l, int wl, int el);
		bool move(int x, int y);
	protected:
		int extend_length;
		bool is_extended;
		bool extend();
		bool retract();
};

#endif // EXTENDABLE_ARM_H