#include "include/aaa2575_View.h"

string View::get_menu(){
	

	string menu = R"(
	
	1: Browse Media
	2: Browse Bundles
	3: Add Media
	4: Add bundle
	5: Create Librarian Account
	6: Create Customer Account
	7: Check in Media and Bundles
	8: Check out Media and Bundles
	9: Pay Balance
	0: Exit the program

	)";

	return menu;

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
