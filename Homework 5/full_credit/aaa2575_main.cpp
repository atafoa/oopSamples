#include "aaa2575_Controller.h"

using namespace std;

int main()
{
	int onfileY,onfileM, onfileD,onfileH,onfileMin,onfileSec;
	string nameOnFile; double priceOnFile;
	string line;
	char removeChar;
	stringstream iss;

	Date date{0,0,0,0,0,0};
	Transaction transaction{0,""};
	Transaction_List  transactions{};

	ifstream myfile("aaa2575_save_file.txt");
	if(myfile.is_open())
	{
		if(myfile.eof())
		{
			myfile.close();
		}

		while(!myfile.eof())
		{
			getline(myfile,line);
			iss << line;
			iss >> onfileM;
			iss >> removeChar;
			iss >> onfileD;
			iss >> removeChar;
			iss >> onfileY;
			iss >> removeChar;
			iss >> onfileH;
			iss >> removeChar;
			iss >> onfileMin;
			iss >> removeChar;
			iss >> onfileSec;
			iss >> removeChar;
			iss >> priceOnFile;
			iss >> removeChar;
			iss >> nameOnFile;
			iss.str("");
			iss.clear();

			date = Date(onfileY,onfileM,onfileD,onfileH,onfileMin,onfileSec);
			transaction = Transaction(priceOnFile,nameOnFile);
			transactions.add_transaction(date,transaction);
	}
		if(myfile.bad())
			throw runtime_error("Bad");
	}

	View view (transactions);
	Controller controller (transactions, view);
	controller.cli();

return 0;
}
