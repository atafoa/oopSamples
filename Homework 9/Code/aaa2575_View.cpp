#include "aaa2575_View.h"

string View::get_menu(){

	string menu = R"(
	==================================
	Arlington Public Library System
	==================================

	1: Browse Catalog
	2: Add Media
	3: Add Bundle
	4: Create Customer Account
	5: Create Librarian Account
	6: Check in Media
	7: Check out Media
	8: Pay Balance
	9: Save records
	10: Load records
	0: Exit the program

	)";

	return menu;

}

string View:: media_submenu()
{

	string header = R"(
		=========
		Media
		=========

		1: Add Books
		2: Add Movies
		3: Add Video game
		4: Add Music Album
		5: Add Television Show Season

	)";

return header;
}

string View:: browse_submenu()
{
	string header = R"(
	================
	Browse Catalog
	================

	1: Browse Media
	2: Browse Bundles

	)";

	return header;
}

string view:: media_header()
{
	string header = R"(
	==========
	Media
	==========

	)";

	return header;
}

string view:: bundles_header()
{
	string header = R"(
	============
	Bundles
	============

	)";

	return header;
}

string view:: save_header()
{
	string header = R"(
	===================
	Save Functionality
	===================

	1: Yes Save this information
	0: Do not save this information

	)";

	return header;
}

string view:: load_header()
{
	string header = R"(
	===================
	Load Functionality
	===================

	1: Yes Load this information
	0: Do not load this information

	)";

	return header;
}

