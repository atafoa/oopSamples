#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "aaa2575_View.h"

class Controller{

public:
	Controller(Library& l, View& v) : library(l), view(v) {};
	void cli();
	void  execute_cmd(int cmd);
	
private:
	Library& library;
	View& view;




};

#endif
