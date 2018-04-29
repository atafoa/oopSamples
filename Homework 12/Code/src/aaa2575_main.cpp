#include "include/aaa2575_Bundle.h"
#include "include/aaa2575_Media.h"
#include "include/aaa2575_Customer.h"
#include "include/aaa2575_Librarian.h"
#include "include/aaa2575_Television_Show_Season.h"
#include "include/aaa2575_Book.h"
#include "include/aaa2575_Movie.h"
#include "include/aaa2575_Dialog.h"
#include "include/aaa2575_Music_Album.h"
#include "include/aaa2575_Video_Game.h"
#include "include/aaa2575_Controller.h"
#include "include/aaa2575_Main_Window.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = 
    Gtk::Application::create(argc, argv, "Library");

	Main_Window main_window;
	return app->run(main_window);
}
