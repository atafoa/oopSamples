#ifndef MOBILE_ARM_H
#define MOBILE_ARM_H

#include "aaa2575_Super_Arm.h"
#include "aaa2575_Mobile_Robot.h"

using namespace std;

class Mobile_Arm : public Super_Arm, public Mobile_Robot 
{

	public:
    Mobile_Arm(int mn, string n, int bl, int l, int w, int el, int ml, robotType t) : Robot(mn, n, bl, t), Arm_Robot(mn, n, bl, l, w, t), Super_Arm(mn, n, bl, l, w, el, ml, t), Mobile_Robot(mn, n, bl, t) {};
    bool move(int x, int y);
    bool move(int x, int y, int speed);
    bool move_arm(int x, int y);
    bool move(int base_x, int base_y, int arm_x, int arm_y);
    bool move(int base_x, int base_y, int arm_x, int arm_y, int speed);

	private:
	pair<int, int> arm_position;

};

#endif