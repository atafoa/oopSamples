#include "aaa2575_Mobile_Arm.h"


Mobile_Arm::Mobile_Arm (int mn, string n, int bl, int l, int wl, int el, int ml): Super_Arm(mn, n, bl, l, wl, el, ml), Mobile_Robot(mn, n, bl) 
{
	arm_position = make_pair(0,0);
}; 

bool Mobile_Arm::move (int x, int y)
{

}

bool Mobile_Arm::move (int x, int y, int speed)
{

}


bool Mobile_Arm::move_arm (int x, int y)
{

}

bool Mobile_Arm::move (int base_x, int base_y, int arm_x, int arm_y)
{

}

bool Mobile_Arm::move (int base_x, int base_y, int arm_x, int arm_y, int speed)
{

}
