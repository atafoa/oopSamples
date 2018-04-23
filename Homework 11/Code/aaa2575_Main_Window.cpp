#include "aaa2575_Main_Window.h"

Main_Window::Main_Window() {
    set_border_width(10);
    set_default_size(400, 300);
    set_title("Arlington Public Library");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::MenuBar *mb = Gtk::manage(new Gtk::MenuBar());
    vbox -> pack_start(*mb, Gtk::PACK_SHRINK, 0);

    Gtk::MenuItem *file = Gtk::manage(new Gtk::MenuItem("_File", true));
    mb -> append(*file);
    Gtk::Menu *fm = Gtk::manage(new Gtk::Menu());
    file -> set_submenu(*fm);

    Gtk::MenuItem *browse = Gtk::manage(new Gtk::MenuItem("_Browse Catalog", true));
    mb -> append(*browse);
    Gtk::Menu *browseSubmenu = Gtk::manage(new Gtk::Menu());
    browse -> set_submenu(*browseSubmenu);

    Gtk::MenuItem *browse_media = Gtk::manage(new Gtk::MenuItem("_Browse Media", true));
    browse_media -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::browse_media_clicked));
    browseSubmenu -> append(*browse_media);

    Gtk::MenuItem *browse_bundles= Gtk::manage(new Gtk::MenuItem("_Browse Bundles", true));
    browse_bundles -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::browse_bundles_clicked));
    browseSubmenu -> append(*browse_bundles);




    

    vbox -> show_all();
}

Main_Window::~Main_Window() {}

void Main_Window::browse_media_clicked() {
    controller.execute_cmd(2);
}
