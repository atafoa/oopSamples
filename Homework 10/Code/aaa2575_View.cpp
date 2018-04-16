#include "aaa2575_View.h"

string View::get_menu(){



	string header = R"(
	==================================
	Arlington Public Library System
	==================================

	)";

	string menu = R"(
	
	1: Browse Catalog
	2: Add Media
	3: Add Bundle
	4: Create Customer Account
	5: Create Librarian Account
	6: Check in Media and Bundles
	7: Check out Media and Bundles
	8: Pay Balance
	0: Exit the program

	)";

	return Dialogs::message(menu,header);

}


string View:: check_in_submenu()
{
	string header = R"(
	=================
	Check In
	=================

	1: Check in Media
	2: Check in Bundle

	)";
	return header;
}

string View:: check_out_submenu()
{
	string header = R"(
	=================
	Check Out
	=================

	1: Check out Media
	2: Check out Bundle
	
	)";
	return header;
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

string View:: media_header()
{
	string header = R"(
	==========
	Media
	==========

	)";

	return header;
}

string View:: bundles_header()
{
	string header = R"(
	============
	Bundles
	============

	)";

	return header;
}

string View:: save_header()
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

string View:: load_header()
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

