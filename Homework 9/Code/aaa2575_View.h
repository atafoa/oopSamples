#include "aaa2575_Library.h"


class View
{
	public:
	View(Library& l) : library(l) {}
	string get_menu();
	string media_submenu();
	string browse_submenu();
	string media_header();
	string bundles_header();
	string save_header();
	string load_header();

	
	private:
	Library& library;
};
