#ifndef ROBOT_H
#define ROBOT_H

#include <cmath>
#include <string>

using namespace std;

enum robotType
{
  ARM_ROBOT,
  MOBILE_ROBOT,
  EXTENDABLE_ARM,
  POWERED_ARM,
  SUPER_ARM,
  MOBILE_ARM
};

class Robot 
{

  public:
  Robot(int mn, string n, int bl, robotType t) : model_number(mn), name(n), battery_life(bl), battery_level(bl), position(make_pair(0, 0)), type(t) {};
  virtual bool move(int x, int y) = 0;
  void charge();
  double get_battery_percentage();
  robotType get_Robot_Type();

  protected:
  int model_number;
  string name;
  int battery_life;
  int battery_level;
  pair<int, int> position;
  robotType type;
};

#endif