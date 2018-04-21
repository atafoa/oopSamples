#include "aaa2575_Library.h"
#include "aaa2575_Dialog.h"


class View
{
	public:
	View(Library& l) : library(l) {}
	string get_menu();
	string media_submenu();
	string browse_submenu();
	string media_header();
	string bundles_header();
	string check_in_submenu();
	string check_out_submenu();

	
	private:
	Library& library;
};
