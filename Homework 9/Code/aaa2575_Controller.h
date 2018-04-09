#include "aaa2575_View.h"

class Controller{

public:
	Controller(Library& l, View& v) : library(l), view(v) {};
	void cli();
	void  execute_cmd(int cmd);
	void save(int choice);
	void load(int choice);
	
private:
	Library& library;
	View& view;




};
