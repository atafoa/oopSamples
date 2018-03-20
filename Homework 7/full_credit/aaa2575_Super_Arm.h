#ifndef SUPER_ARM_H
#define SUPER_ARM_H

#include "aaa2575_Extendable_Arm.h"
#include "aaa2575_Powered_Arm.h"

class Super_Arm : public Extendable_Arm, public Powered_Arm 
{
	public:
    Super_Arm(int mn, string n, int bl, int l, int w, int el, int ml, string t) : Robot(mn, n, bl, t), Arm_Robot(mn, n, bl, l, w, t), Extendable_Arm(mn, n, bl, l, w, el, t), Powered_Arm(mn, n, bl, l, w, ml, t) {};
    bool move(int x, int y);
};

#endif