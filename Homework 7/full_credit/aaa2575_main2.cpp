#include <iostream>
#include <vector>

#include "aaa2575_Mobile_Arm.h"

using namespace std;

int main() 
{
    vector<Robot *> robots;

	Robot *armR = new Arm_Robot(2, "Ash", 100, 10, 5, "Arm_Robot");
	Robot *extendableR = new Extendable_Arm(3, "Wall-e", 100, 10, 5, 5, "Extendable_Arm");
	Robot *poweredR = new Powered_Arm(4, "Navi", 100, 10, 10, 15, "Powered_Arm");
	Robot *mobileR = new Mobile_Robot(5, "Kith", 100, "Mobile_Robot");
    Robot *superR = new Super_Arm(1, "Jolt", 100, 10, 5, 5, 15, "Super_Arm");
	Robot *mobileAR = new Mobile_Arm(2, "Red Ronin", 100, 10, 5, 5, 15, "Mobile_Arm");

    robots.push_back(armR);
    robots.push_back(extendableR);
    robots.push_back(poweredR);
    robots.push_back(mobileR);
    robots.push_back(superR);
    robots.push_back(mobileAR);

    for (Robot *robot : robots) 
    {
        string robotType = robot->get_Robot_Type();

        if (robotType == "Arm_Robot")
        {
            Arm_Robot *arm = dynamic_cast<Arm_Robot*>(robot);
            arm->move(2, 2);
            arm->pick_up(3);
            arm->move(3, 3);
            arm->drop();
            arm->move(240, 240);
            arm->pick_up(240);
        } 
        else if (robotType == "Extendable_Arm")
         {
            Extendable_Arm *earm = dynamic_cast<Extendable_Arm*>(robot);
            earm->move(4, 4);
            earm->pick_up(4);
            earm->move(2, 2);
            earm->drop();
            earm->move(6, 6);
            earm->pick_up(205);
        } 
        else if (robotType == "Powered_Arm") 
        {
            Powered_Arm *par = dynamic_cast<Powered_Arm*>(robot);
            par->move(4, 4);
            par->pick_up(2);
            par->move(3, 3);
            par->drop();
            par->pick_up(13);
        } 
        else if (robotType == "Mobile_Robot") 
        {
            Mobile_Robot *mr = dynamic_cast<Mobile_Robot*>(robot);
            mr->move(4, 4);
            mr->move(3, 3, 2);
        } 
        else if (robotType == "Super_Arm") 
        {
            Super_Arm *sar = dynamic_cast<Super_Arm*>(robot);
            sar->move(4, 4);
            sar->pick_up(5);
            sar->move(3, 3);
            sar->drop();
            sar->move(8, 8);
            sar->pick_up(12);
            sar->pick_up(200);
        } 
        else if (robotType == "Mobile_Arm") 
        {
            Mobile_Arm *mar = dynamic_cast<Mobile_Arm*>(robot);
            mar->move(4, 4);
            mar->pick_up(5);
            mar->move(3, 3, 6, 6);
            mar->drop();
        } 
        else 
        {
            cout << "Invalid Robot Type!" << endl;
        }

        cout << endl;
    }

    return 0;
}