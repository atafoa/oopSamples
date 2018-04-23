#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "aaa2575_Controller.h"

class Main_Window : public Gtk::Window {
public:
    Main_Window();
    virtual ~Main_Window();

protected:
    Library library {};
    View view {library};
    Controller controller {library, view};
    void browse_media_clicked();
    void browse_bundles_clicked();
};

#endif
