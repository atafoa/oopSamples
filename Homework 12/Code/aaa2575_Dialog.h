#ifndef DIALOG_H
#define DIALOG_H


#include <vector>
#include <iostream>
#include <gtkmm.h>

class Dialogs
{
	public:
		static void message(std::string msg, std::string title);
    	static std::string input(std::string msg, std::string title, std::string default_text = "", std::string cancel_text = "Exit");
   		static int question(std::string msg,std::string title,std::vector<std::string> buttons);
   private:

};

#endif
