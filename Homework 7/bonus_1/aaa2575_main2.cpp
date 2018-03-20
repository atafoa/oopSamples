#include <iostream>
#include <vector>

#include "aaa2575_Mobile_Arm.h"

using namespace std;

int main() 
{
    vector<Robot *> robots;

	Robot *armR = new Arm_Robot(2, "Ash", 100, 10, 5, ARM_ROBOT);
	Robot *extendableR = new Extendable_Arm(3, "Wall-e", 100, 10, 5, 5, EXTENDABLE_ARM);
	Robot *poweredR = new Powered_Arm(4, "Navi", 100, 10, 10, 15, POWERED_ARM);
	Robot *mobileR = new Mobile_Robot(5, "Kith", 100, MOBILE_ROBOT);
    Robot *superR = new Super_Arm(1, "Jolt", 100, 10, 5, 5, 15, SUPER_ARM);
	Robot *mobileAR = new Mobile_Arm(2, "Red Ronin", 100, 10, 5, 5, 15, MOBILE_ARM);

    robots.push_back(armR);
    robots.push_back(extendableR);
    robots.push_back(poweredR);
    robots.push_back(mobileR);
    robots.push_back(superR);
    robots.push_back(mobileAR);

    Arm_Robot *arm;
    Extendable_Arm *earm;
    Powered_Arm *par;
    Mobile_Robot *mr;
    Super_Arm *sar;
    Mobile_Arm *mar;

    for (Robot *robot : robots) 
    {
        switch(robot -> get_Robot_Type())
        {
            case ARM_ROBOT:
            arm = dynamic_cast<Arm_Robot*>(robot);
            arm->move(2, 2);
            arm->pick_up(3);
            arm->move(3, 3);
            arm->drop();
            arm->move(240, 240);
            arm->pick_up(240);
            break;

            case EXTENDABLE_ARM:
            earm = dynamic_cast<Extendable_Arm*>(robot);
            earm->move(4, 4);
            earm->pick_up(4);
            earm->move(2, 2);
            earm->drop();
            earm->move(6, 6);
            earm->pick_up(205);
            break;

            case POWERED_ARM:
            par = dynamic_cast<Powered_Arm*>(robot);
            par->move(4, 4);
            par->pick_up(2);
            par->move(3, 3);
            par->drop();
            par->pick_up(13);
            break;

            case MOBILE_ROBOT:
            mr = dynamic_cast<Mobile_Robot*>(robot);
            mr->move(4, 4);
            mr->move(3, 3, 2);
            break;

            case SUPER_ARM:
            sar = dynamic_cast<Super_Arm*>(robot);
            sar->move(4, 4);
            sar->pick_up(5);
            sar->move(3, 3);
            sar->drop();
            sar->move(8, 8);
            sar->pick_up(12);
            sar->pick_up(200);
            break;

            case MOBILE_ARM:
            mar = dynamic_cast<Mobile_Arm*>(robot);
            mar->move(4, 4);
            mar->pick_up(5);
            mar->move(3, 3, 6, 6);
            mar->drop();
            break;
        }

        cout << endl;
    }

    return 0;
}