#include "dialog.h"
//#include <iostream>

int main (int argc, char* argv[])
{
    Gtk::Main kit(argc, argv);
    
    //Dialogs::message("test", "Title");
    //std::cout << Dialogs::input("What's your name?", "Question") << std::endl;
    std::vector<std::string> buttons = {"No", "Yes", "Maybe"};
    std::string input("Test","Title","Yes","No");
    std::cout << Dialogs::message("Test message", "Title");
    std::cout << Dialogs::question("does this work?", "Test", buttons) << std::endl; 
    return 0;
}
