#include "aaa2575_Controller.h"

using namespace std;

int main()
{
	Transaction_List  transactions{};
	View view (transactions);
	Controller controller (transactions, view);
	controller.cli();

return 0;
}
