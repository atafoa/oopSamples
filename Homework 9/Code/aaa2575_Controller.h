#include "aaa2575_View.h"

class Controller{

public:
	Controller(Transaction_List& t, View& v) : transactions(t), view(v) {};
	void cli();
	void  execute_cmd(int cmd);
	void delete_transaction_by_date();
	void input_transaction_date();
	void save(int choice);
	void load(int choice);
	ifstream inFile;




private:
	Transaction_List& transactions;
	View& view;




};
