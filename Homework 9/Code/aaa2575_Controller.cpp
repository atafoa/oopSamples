#include "aaa2575_Controller.h"

void Controller:: cli()
{
	int cmd = -1;
	while(cmd != 0)
	{
		cout << view.get_menu() << endl;
		cout << "What would you like to do: ";
		cin >> cmd;
		execute_cmd(cmd);
	}
}

void Controller:: execute_cmd(int cmd)
{
	string t; string g; int id;
	string a; int cy;
	int ry; string studio; string d; vector<string> la; int size; vector<string> la2;
	string artist; vector<string> tracks;
	string producer; vector<string> director; int seasonNum;
	string n; string temp;
	string phone; string email; double balance;

	int subMenu;
	int choice = 0;

	if( cmd < 0 || cmd > 10)
	{
		throw runtime_error("Input invalid Number has to be from 0 to 8");
	}

	switch (cmd)
	{
		case 1:
			cout << view.browse_submenu() << endl;
			cout << "What would you like to do: ";
			cin >> subMenu;

			if(subMenu < 1 || subMenu  > 2)
			{
				throw runtime_error("Input invalid Number has to be either 1 or 2");
			}

			switch(subMenu)
			{
				case 1:
				cout << view.media_header() << endl;
				library.browse_media();
				break;

				case 2:
				cout << view.bundles_header() << endl;
				library.browse_bundles();
				break;
			}
			break;

		case 2:
			cout << view.media_submenu() << endl;
			cout << "What would you like to do: ";
			cin >> subMenu;

			if(subMenu < 1 || subMenu  > 5)
			{
				throw runtime_error("Input invalid Number has to be from 1 to 5");
			}

			switch(subMenu)
			{
				case 1:
				cout << "What is the title of this book: ";
				cin >> t;
				cout << "Who is the author of this book: ";
				cin >> a;
				cout  << "What is the copyright year: ";
				cin >> cy;
				cout << "What is the genre of this book: ";
				cin >> g;
				cout << "ID number: ";
				cin >> id;
				library.create_new_book(a,cy,t,g,id, "Book");
				break;

				case 2:
				cout << "What is the title of this movie: ";
				cin >> t;
				cout  << "When is the release year: ";
				cin >> ry;
				cout << "Who produced this movie: ";
				cin >> producer;
				cout << "What is the genre of this movie: ";
				cin >> g;
				cout << "Who is the director of this movie: ";
				cin >> d;
				cout << "How many leading actors: ";
				cin >> size;

				for(int i = 0; i < size; i++)
				{
					cout << "Enter a leading actor's name: ";
					cin >> temp;
					la.push_back(temp);
				}

				cout << "ID number: ";
				cin >> id;

				library.create_new_movie(ry, producer, d, la, t, id,g,"Movie");
				break;

				case 3:
				cout << "What is the title of this video game: ";
				cin >> t;
				cout  << "When is the release year: ";
				cin >> ry;
				cout << "What studio produced this movie: ";
				cin >> studio;
				cout << "What is the genre of this movie: ";
				cin >> g;
				cout << "ID number: ";
				cin >> id;
				library.create_new_video_game(ry, studio, id, t,g, "Video Game");
				break;

				case 4:
				cout << "What is the title of this album: ";
				cin >> t;
				cout  << "Who is the artist: ";
				cin >> artist;
				cout  << "When is the release year: ";
				cin >> ry;
				cout << "What is the genre of this album: ";
				cin >> g;
				cout << "How many tracks are in this album: ";
				cin >> size;

				for(int i = 0; i < size; i++)
				{
					cout << "Track " << i+1 << ": ";
					cin >> temp;
					tracks.push_back(temp);
				}

				cout << "ID number: ";
				cin >> id;
				library.create_new_music_album(ry, artist, tracks, t, id, g, "Music Album");
				break;

				case 5:
				cout << "What is the title of this show: ";
				cin >> t;
				cout  << "Who is the producer: ";
				cin >> producer;
				cout  << "When is the release year: ";
				cin >> ry;
				cout << "What is the genre of this show: ";
				cin >> g;
				cout << "What is the season number: ";
				cin >> seasonNum;
				cout << "How many directors directed this show ";
				cin >> size;

				for(int i = 0; i < size; i++)
				{
					cout << "Name a director: ";
					cin >> temp;
					director.push_back(temp);
				}

				cout << "How many leading actors: ";
				cin >> size;

				for(int i = 0; i < size; i++)
				{
					cout << "Enter a leading actor's name: ";
					cin >> temp;
					la2.push_back(temp);
				}


				cout << "ID number: ";
				cin >> id;
				library.create_new_television_show_season(ry, producer, director, la2,seasonNum,t, id, g, "Television Show");
				break;
			}
			break;

		case 3:
			cout << "What is the name of this bundle: ";
			cin >> n;
			cout << "ID Number: ";
			cin >> id;
			cout << "What is the type of this bundle: ";
			cin >> t;
			cout << "What is the genre of items in this bundle: ";
			cin >> g;
			library.create_new_bundle(n,id,"Bundle",t,g);
			library.add_to_bundle(n,id,"Bundle",t,g);
			cout << view.bundles_header() << endl;
			library.browse_bundles();
			break;
		case 4:
			cout << "What is the name of the librarian: ";
			cin >> n;
			cout << "ID number: ";
			cin >> id;
			library.create_new_librarian(n,id);
			break;
		case 5:
			cout << "What is the customer's name: ";
			cin >> n;
			cout << "What is the customer's phone number. Enter in the form 361-550-2335: ";
			cin >>  phone;
			cout << "What is the cutomer's email: ";
			cin >> email;
			cout << "Customer's balance: ";
			cin >> balance;
			cout << "ID Number: ";
			cin >> id;
			library.create_new_customer(n,id,phone,email,balance);
			break;
		case 6:
			library.check_in();
			break;

		case 7:
			library.check_out();
			break;

		case 8:
			library.pay_balance();
			break;

		case 9:
			cout << view.save_header()<< endl;
			cin >> choice;
			save(choice);
			break;

		case 10:
			cout << view.load_header()<< endl;
			cin >> choice;
			load(choice);
			break;

		case 0:
			cout << "Now exiting the program\n";
			break;
	}
}

void Controller::save(int choice)
{
	string file_name;

	if(choice == 1)
	{
		cout << " What would you like to name the save file: ";
		cin >> file_name;
		library.save(file_name);
	}
	else
	{
		cout  << "Save functionality disabled, Information will not be saved" << endl;
	}
}


void Controller::load(int choice)
{

	string file_name;

	if(choice == 1)
	{
		cout << "What is the name of the file where the list of media stored: ";
		cin >> file_name;
		library.load_media(file_name);

		cout << "What is the name of the file where the list of bundles is stored: ";
		cin >> file_name;
		library.load_bundle(file_name);

		cout << "What is the name of the file where the list of librarians are stored: ";
		cin >> file_name;
		library.load_librarian(file_name);

		cout << "What is the name of the file where the list of customers are stored: ";
		cin >> file_name;
		library.load_customer(file_name);
	}
	else
		cout << "Load functionality will be turned off" << endl;
}
