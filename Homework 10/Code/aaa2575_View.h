#include "aaa2575_Library.h"
#include "aaa2575_Dialog.h"


class View
{
	public:
	View(Library& l) : library(l) {}
	void get_menu();
	string media_submenu();
	void browse_submenu();
	string media_header();
	string bundles_header();
	string save_header();
	string load_header();
	string check_in_submenu();
	string check_out_submenu();

	
	private:
	Library& library;
};
