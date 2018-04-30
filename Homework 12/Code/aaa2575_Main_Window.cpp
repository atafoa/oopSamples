#include "aaa2575_Main_Window.h"

Main_Window::Main_Window() {
    //set_border_width(10);
    set_default_size(400, 300);
    set_title("Arlington Public Library");

    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    Gtk::MenuBar *mb = Gtk::manage(new Gtk::MenuBar());
    vbox -> pack_start(*mb, Gtk::PACK_SHRINK, 0);


//File and Submenu
    Gtk::MenuItem *file = Gtk::manage(new Gtk::MenuItem("_File", true));
    mb -> append(*file);
    Gtk::Menu *fm = Gtk::manage(new Gtk::Menu());
    file -> set_submenu(*fm);

    Gtk::MenuItem *save = Gtk::manage(new Gtk::MenuItem("_Save", true));
    save -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::save_clicked));
    fm -> append(*save);

    Gtk::MenuItem *load = Gtk::manage(new Gtk::MenuItem("_Load", true));
    load -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::load_clicked));
    fm -> append(*load);

    Gtk::MenuItem *quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    quit -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::quit_clicked));
    fm -> append(*quit);


//Browse and submenu
    Gtk::MenuItem *browse = Gtk::manage(new Gtk::MenuItem("_Browse Catalog", true));
    mb -> append(*browse);
    Gtk::Menu *browse_submenu = Gtk::manage(new Gtk::Menu());
    browse -> set_submenu(*browse_submenu);

    Gtk::MenuItem *browse_media = Gtk::manage(new Gtk::MenuItem("_Browse Media", true));
    browse_media -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::browse_media_clicked));
    browse_submenu -> append(*browse_media);

    Gtk::MenuItem *browse_bundles= Gtk::manage(new Gtk::MenuItem("_Browse Bundles", true));
    browse_bundles -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::browse_bundles_clicked));
    browse_submenu -> append(*browse_bundles);

    Gtk::MenuItem *stock_levels= Gtk::manage(new Gtk::MenuItem("_Browse Checked Out Items", true));
    stock_levels -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::check_stock_levels));
    browse_submenu -> append(*stock_levels);

//Add and submenu
    Gtk::MenuItem *add = Gtk::manage(new Gtk::MenuItem("_Add Items", true));
    mb -> append(*add);
    Gtk::Menu *add_submenu = Gtk::manage(new Gtk::Menu());
    add -> set_submenu(*add_submenu);

    Gtk::MenuItem *add_media = Gtk::manage(new Gtk::MenuItem("_Add Media", true));
    add_media -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::add_media_clicked));
    add_submenu -> append(*add_media);

    Gtk::MenuItem *add_bundles= Gtk::manage(new Gtk::MenuItem("_Add Bundles", true));
    add_bundles -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::add_bundles_clicked));
    add_submenu -> append(*add_bundles);

//Create and submenu
    Gtk::MenuItem *create = Gtk::manage(new Gtk::MenuItem("_Accounts", true));
    mb -> append(*create);
    Gtk::Menu *create_submenu = Gtk::manage(new Gtk::Menu());
    create -> set_submenu(*create_submenu);

    Gtk::MenuItem *create_librarians = Gtk::manage(new Gtk::MenuItem("_Create Librarians", true));
    create_librarians-> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::create_librarians_clicked));
    create_submenu -> append(*create_librarians);

    Gtk::MenuItem *create_customers = Gtk::manage(new Gtk::MenuItem("_Create Customers", true));
    create_customers  -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::create_customers_clicked));
    create_submenu -> append(*create_customers);

    Gtk::MenuItem *pay_balance = Gtk::manage(new Gtk::MenuItem("_Pay Customers Balance", true));
    pay_balance  -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::pay_balance_clicked));
    create_submenu -> append(*pay_balance);

//Check in
    Gtk::MenuItem *check_in = Gtk::manage(new Gtk::MenuItem("_Check in", true));
    mb -> append(*check_in);
    Gtk::Menu *check_in_submenu = Gtk::manage(new Gtk::Menu());
    check_in -> set_submenu(*check_in_submenu);

    Gtk::MenuItem *check_in_media = Gtk::manage(new Gtk::MenuItem("_Check in Media", true));
    check_in_media-> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::check_in_media_clicked));
    check_in_submenu -> append(*check_in_media);

    Gtk::MenuItem *check_in_bundles= Gtk::manage(new Gtk::MenuItem("_Check in Bundles", true));
    check_in_bundles  -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::check_in_bundles_clicked));
    check_in_submenu -> append(*check_in_bundles);

//check out
    Gtk::MenuItem *check_out = Gtk::manage(new Gtk::MenuItem("_Check out", true));
    mb -> append(*check_out);
    Gtk::Menu *check_out_submenu = Gtk::manage(new Gtk::Menu());
    check_out -> set_submenu(*check_out_submenu);

    Gtk::MenuItem *check_out_media = Gtk::manage(new Gtk::MenuItem("_Check out Media", true));
    check_out_media-> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::check_out_media_clicked));
    check_out_submenu -> append(*check_out_media);

    Gtk::MenuItem *check_out_bundles= Gtk::manage(new Gtk::MenuItem("_Check out Bundles", true));
    check_out_bundles  -> signal_activate().connect(sigc::mem_fun(*this, &Main_Window::check_out_bundles_clicked));
    check_out_submenu -> append(*check_out_bundles);
    

    vbox -> show_all();
}

Main_Window::~Main_Window() {}

void Main_Window::quit_clicked()
{
    controller.execute_cmd(13); 
    hide();
}

void Main_Window::browse_media_clicked() 
{
    controller.execute_cmd(1);
}

void Main_Window::browse_bundles_clicked() 
{
    controller.execute_cmd(2);
}

void Main_Window::add_media_clicked() 
{
    controller.execute_cmd(3);
}

void Main_Window::add_bundles_clicked() 
{
    controller.execute_cmd(4);
}

void Main_Window::create_librarians_clicked() 
{
    controller.execute_cmd(5);
}

void Main_Window::create_customers_clicked() 
{
    controller.execute_cmd(6);
}

void Main_Window:: check_in_media_clicked()
{
    controller.execute_cmd(7);
}

void Main_Window:: check_in_bundles_clicked() 
{
    controller.execute_cmd(8);
}


void Main_Window:: check_out_media_clicked() 
{
    controller.execute_cmd(9);
}

void Main_Window:: check_out_bundles_clicked() 
{
    controller.execute_cmd(10);
}
void Main_Window:: pay_balance_clicked() 
{
    controller.execute_cmd(11);
}
void Main_Window::check_stock_levels()
{
    controller.execute_cmd(12);
}

void Main_Window::save_clicked()
{
    controller.execute_cmd(13);    
}

void Main_Window::load_clicked()
{
    controller.execute_cmd(14);
}