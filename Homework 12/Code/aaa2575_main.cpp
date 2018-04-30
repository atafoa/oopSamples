#include "aaa2575_Main_Window.h"
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
