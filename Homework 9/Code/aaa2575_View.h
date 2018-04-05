#include "aaa2575_Transaction_List.h"

class View{

public:
	View(Transaction_List& t) : transactions(t) {}
	string get_menu();
	string view_all_transactions();
	string prompt_for_date();
	string prompt_for_employeeName();

private:
	Transaction_List& transactions;
};
