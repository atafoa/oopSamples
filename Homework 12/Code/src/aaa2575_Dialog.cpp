#include "include/aaa2575_Dialog.h"
#include <stdlib.h>

//message prints out information for the user
void Dialogs::message(std::string msg, std::string title)
{
    Gtk::MessageDialog *dialog = new Gtk::MessageDialog(title);
    dialog->set_secondary_text(msg, true);
    dialog->run();
    
    
    dialog->close();
    while (Gtk::Main::events_pending())
        Gtk::Main::iteration();
    
    delete dialog;
}

//input allows the user to enter input as text and use it
std::string Dialogs::input(std::string msg, std::string title, std::string default_text, std::string cancel_text)
{
    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title(title);
    
    Gtk::Label *label = new Gtk::Label(msg);
    dialog->get_content_area()->pack_start(*label);
    label->show();
    
    dialog->add_button("Exit", 0);
    dialog->add_button("OK",1);
    dialog->set_default_response(1);
    
    Gtk::Entry *entry = new Gtk::Entry();
    entry->set_text(default_text);
    entry->set_max_length(50);
    entry->show();
    dialog->get_vbox()->pack_start(*entry);
    
   int result = dialog->run();
    std::string text = entry->get_text();
        
    
    dialog->close();
    while (Gtk::Main::events_pending())
        Gtk::Main::iteration();
    
    delete dialog;
    delete label;
    delete entry;

    if(result == 0)
       text = "0";
    
   return text;
}

//question allows us to get user input in form of an option
int Dialogs::question(std::string msg, std::string title,std::vector<std::string> buttons)
{
    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title(title);
    
    Gtk::Label *label = new Gtk::Label(msg);
    dialog->get_content_area()->pack_start(*label);
    label->show();
    
    for( int i = 0; i < buttons.size(); i++)
        dialog->add_button(buttons[i], i);
        
    int result = dialog->run();
    
    dialog->close();
    while (Gtk::Main::events_pending())
        Gtk::Main::iteration();
    
    delete dialog;
    delete label;
    return result;
}
