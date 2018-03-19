#ifndef AAA2575_SUPER_ARM_H
#define AAA2575_SUPER_ARM_H

#include "aaa2575_Extendable_Arm.h"
#include "aaa2575_Powered_Arm.h"

class Super_Arm: public  Extendable_Arm, public Powered_Arm,
{
	public:
		Super_Arm(int mn, string n, int bl, int l, int wl, int el, int ml): Extendable_Arm(mn, n, bl, l, wl, el), Powered_Arm(mn,n,bl, l, wl, ml), Robot(mn,n,bl){};
		bool move(int x, int y);
};

#endif //SUPER_ARM_H