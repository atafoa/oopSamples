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
    void quit_clicked();
    void browse_media_clicked();
    void browse_bundles_clicked();
    void add_media_clicked();
    void add_bundles_clicked();
    void create_librarians_clicked();
    void create_customers_clicked();
    void check_in_media_clicked();
    void check_in_bundles_clicked();
    void check_out_media_clicked();
    void check_out_bundles_clicked();
    void pay_balance_clicked();
};

#endif
