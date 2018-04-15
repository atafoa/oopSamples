#include <gtkmm.h>

int main(int argc, char *argv[])
{
    Gtk::Main kit(argc, argv);
    
    Gtk::MessageDialog *dialog  = new Gtk::MessageDialog{"Hello World"};
    
    dialog->set_secondary_text("this is a test", true);
    
    dialog -> run();    
}
