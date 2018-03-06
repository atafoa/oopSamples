#ifndef AAA2575_POWERED_ARM_H
#define AAA2575_POWERED_ARM_H
#include "aaa2575_Arm_Robot.h"

class Powered_Arm: public Arm_Robot
{
	public:
		Powered_Arm(int mn, string n, int bl, int l, int wl, int ml);
		bool move(int x, int y);
		bool pick_up(int weight);
		bool drop();

	private:
		int motor_limit;
		bool motor_on;
		void power_on();
		void power_off();		
};

#endif //POWERED_ARM_H