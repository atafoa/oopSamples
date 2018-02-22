#include "aaa2575_Controller.h"

using namespace std;

int main()
{

	Transaction_List  transactions{};
	ifstream myfile("aaa2575_save_file.txt");
	if(myfile.is_open())
	{
	//read in and add transactions
		if(myfile.eof())
		{
			cout << "End of file";
			return 0;
		}
		if(myfile.bad())
			throw runtime_error("Bad");
	}

	View view (transactions);
	Controller controller (transactions, view);
	controller.cli();




	return 0;
}
