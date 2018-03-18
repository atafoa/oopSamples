
#ifndef AAA2575_MOBILE_ARM_H
#define AAA2575_MOBILE_ARM_H
#include "aaa2575_Mobile_Robot.h"
#include "aaa2575_Super_Arm.h"

class Mobile_Arm : public Mobile_Robot, public Super_Arm
{
public:
  Mobile_Arm (int mn, string n, int bl, int l, int wl, int el, int ml);
  bool move (int x, int y);
  bool move (int x, int y, int speed);
  bool move_arm (int x, int y);
  bool move (int base_x, int base_y, int arm_x, int arm_y);
  bool move (int base_x, int base_y, int arm_x, int arm_y, int speed);

private:
  pair<int,int> arm_position;
};

#endif // MOBILE_ARM_H