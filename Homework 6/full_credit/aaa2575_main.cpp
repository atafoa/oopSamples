#include "aaa2575_Robot.h"
#include "aaa2575_Arm_Robot.h"
#include "aaa2575_Extendable_Arm.h"
#include "aaa2575_Mobile_Robot.h"
#include "aaa2575_Powered_Arm.h"

int main()
{

	Robot megaMan {0001, "Mega Man", 100};
	cout << "Booting up Robot " << megaMan.get_name() << endl;
	cout << "Moving to (70, 70)" << endl;
	if(megaMan.move(70,70))
	{
		cout << megaMan.get_name() << " has successfully moved to ";
		megaMan.get_position();
		cout << endl;
		cout << megaMan.get_name() << " now has " << megaMan.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << megaMan.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Moving to (5,5)" << endl;	
	if(megaMan.move(5,5))
	{
		cout << megaMan.get_name() << " has successfully moved to ";
		megaMan.get_position();
		cout << endl;
		cout << megaMan.get_name() << " now has " << megaMan.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << megaMan.get_name() << " could not complete this move." << endl;
	}

	megaMan.charge();

	cout << endl << "Moving to (0,0)" << endl;
	if(megaMan.move(0,0))
	{
		cout << megaMan.get_name() << " has successfully moved to ";
		megaMan.get_position();
		cout << endl;
		cout << megaMan.get_name() << " now has " << megaMan.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << megaMan.get_name() << " could not complete this move." << endl;
	}

	cout <<  endl << "Moving to (5,5)" << endl;	
	if(megaMan.move(5,5))
	{
		cout << megaMan.get_name() << " has successfully moved to ";
		megaMan.get_position();
		cout << endl;
		cout << megaMan.get_name() << " now has " << megaMan.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << megaMan.get_name() << " could not complete this move." << endl;

	}

	cout << endl << endl;


	Mobile_Robot kitt {002,"KITT",100};
	cout << "Booting up Robot " << kitt.get_name() << endl;
	cout << "Moving to (10,10)" << endl;
	if(kitt.move(10,10,1))
	{	
		cout << kitt.get_name() << " has successfully moved to ";
		kitt.get_position();
		cout << endl;
		cout << kitt.get_name() << " now has " << kitt.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << kitt.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Moving to (20,20)" << endl;
	if(kitt.move(20,20,2))
	{	
		cout << kitt.get_name() << " has successfully moved to ";
		kitt.get_position();
		cout << endl;
		cout << kitt.get_name() << " now has " << kitt.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << kitt.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Moving to (30,30)" << endl;
	if(kitt.move(30,30,3))
	{	
		cout << kitt.get_name() << " has successfully moved to ";
		kitt.get_position();
		cout << endl;
		cout << kitt.get_name() << " now has " << kitt.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << kitt.get_name() << " could not complete this move." << endl;
	}

	kitt.charge();

	cout << endl << "Moving to (40,40)" << endl;
	if(kitt.move(40,40,3))
	{	
		cout << kitt.get_name() << " has successfully moved to ";
		kitt.get_position();
		cout << endl;
		cout << kitt.get_name() << " now has " << kitt.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << kitt.get_name() << " could not complete this move." << endl;
	}

	cout << endl << endl;


	Arm_Robot jeff {003, "Jeff", 100, 50, 10};
	cout << "Booting up Robot " << jeff.get_name() << endl;
	cout << "Moving to (10,10)" << endl;
	if(jeff.move(10,10))
	{	
		cout << jeff.get_name() << " has successfully moved to ";
		jeff.get_position();
		cout << endl;
		cout << jeff.get_name() << " now has " << jeff.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << jeff.get_name() << " could not complete this move." << endl;
	}
	cout << endl << "Picking up object of weight 5 at (10,10)" << endl;
	if(jeff.pick_up(5))
	{
		cout << jeff.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << jeff.get_name() << "could not complete this task" << endl;
	}

	cout << endl << "Moving with object to (30,30) " << endl;
	if(jeff.move(30,30))
	{	
		cout << jeff.get_name() << " has successfully moved to ";
		jeff.get_position();
		cout << endl;
		cout << jeff.get_name() << " now has " << jeff.get_battery_percentage() << "% battery remaining." << endl;
	}

	if(jeff.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	cout << endl << "Picking up object of weight 20" << endl;
	if(jeff.pick_up(20))
	{
		cout << jeff.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << jeff.get_name() << " could not complete this task" << endl;
	}

	cout << endl << "Moving to (60,60)" << endl;
	if(jeff.move(60,60))
	{	
		cout << jeff.get_name() << " has successfully moved to ";
		jeff.get_position();
		cout << endl;
		cout << jeff.get_name() << " now has " << jeff.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << jeff.get_name() << " could not complete this move." << endl;
	}

	cout << endl << endl;

	Extendable_Arm HK47 {004,"HK-47",100, 50, 10,10};
	cout << "Booting up Robot " << HK47.get_name() << endl;
	cout << "Moving to (5,5)" << endl;
	if(HK47.move(5,5))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Picking up object of weight 5" << endl;
	if(HK47.pick_up(5))
	{
		cout << HK47.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << HK47.get_name() << "could not complete this task" << endl;
	}


	cout << endl << "Moving to (10,10)" << endl;
	if(HK47.move(10,10))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}

	if(HK47.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	cout << endl << "Moving to (20,20) to pick up an object" << endl;
	if(HK47.move(20,20))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Picking up object of weight 5" << endl;
	if(HK47.pick_up(5))
	{
		cout << HK47.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << HK47.get_name() << "could not complete this task" << endl;
	}

	HK47.charge();
	cout << endl << "Moving to (50,50)" << endl;
	if(HK47.move(50,50))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}

	cout << endl;
	if(HK47.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	cout << endl << "Picking up object of weight 5" << endl;
	if(HK47.pick_up(5))
	{
		cout << HK47.get_name() << " has picked up this object" << endl;
	}
	HK47.charge();
	cout << endl << "Moving to (80,80) to pick up an object" << endl;
	if(HK47.move(90,90))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}

	if(HK47.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	cout << endl << "Moving to (200,200) to pick up an object" << endl;
	if(HK47.move(200,200))
	{	
		cout << HK47.get_name() << " has successfully moved to ";
		HK47.get_position();
		cout << endl;
		cout << HK47.get_name() << " now has " << HK47.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << HK47.get_name() << " could not complete this move." << endl;
	}


	cout << endl << endl;
	Powered_Arm roboCop {005, "ED-209", 100, 50, 10, 10};
	cout << "Booting up Robot " << roboCop.get_name() << endl;
	cout << "Moving to (10,10) to pick up object" << endl;
	if(roboCop.move(10,10))
	{	
		cout << roboCop.get_name() << " has successfully moved to ";
		roboCop.get_position();
		cout << endl;
		cout << roboCop.get_name() << " now has " << roboCop.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this move." << endl;
	}

	cout << endl << "Picking up object of weight 5" << endl;
	if(roboCop.pick_up(5))
	{
		cout << roboCop.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << roboCop.get_name() << "could not complete this task" << endl;
	}

	cout << endl <<"Moving to (20,20)" << endl;
	if(roboCop.move(20,20))
	{	
		cout << roboCop.get_name() << " has successfully moved to ";
		roboCop.get_position();
		cout << endl;
		cout << roboCop.get_name() << " now has " << roboCop.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this move." << endl;
	}

	if(roboCop.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	cout << endl <<"Moving to (30,30)" << endl;
	if(roboCop.move(30,30))
	{	
		cout << roboCop.get_name() << " has successfully moved to ";
		roboCop.get_position();
		cout << endl;
		cout << roboCop.get_name() << " now has " << roboCop.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this move." << endl;
	}

	cout << "Picking up object of weight 12" << endl;
	if(roboCop.pick_up(12))
	{
		cout << roboCop.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << roboCop.get_name() << "could not complete this task" << endl;
	}
	roboCop.charge();
	cout << endl <<"Moving to (40,40)" << endl;
	if(roboCop.move(40,40))
	{	
		cout << roboCop.get_name() << " has successfully moved to ";
		roboCop.get_position();
		cout << endl;
		cout << roboCop.get_name() << " now has " << roboCop.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this move." << endl;
	}


	if(roboCop.drop())
	{
		cout << "Object successfully dropped " << endl;
	}

	roboCop.charge();

	cout << endl <<"Moving to (50,50)" << endl;
	if(roboCop.move(50,50))
	{	
		cout << roboCop.get_name() << " has successfully moved to ";
		roboCop.get_position();
		cout << endl;
		cout << roboCop.get_name() << " now has " << roboCop.get_battery_percentage() << "% battery remaining." << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this move." << endl;
	}


	cout << endl << "Picking up object of weight 150" << endl;
	if(roboCop.pick_up(150))
	{
		cout << roboCop.get_name() << " has picked up this object" << endl;
	}
	else
	{
		cout << roboCop.get_name() << " could not complete this task" << endl;
	}
		return 0;
}
