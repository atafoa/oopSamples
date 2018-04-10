#include "aaa2575_Controller.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Customer.h"

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

	Librarian l{"",0}; Customer c{"",0,"","",0.0}; int month; int day; int year; int tNum;

	int subMenu;
	int choice = 0;

	if( cmd < 0 || cmd > 8)
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
				cout << endl;
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
				cout << endl;
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
				cout << endl;
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
				cout << endl;
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
				cout << endl;
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
			cout << endl;
			l = library.create_new_librarian(n,id);
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
			cout << endl;
			c = library.create_new_customer(n,id,phone,email,balance);
			break;
		case 6:

			cout << view.check_in_submenu() << endl;
			cout  << "What would you like to check in: ";
			cin >> subMenu;

			if(subMenu == 1)
			{	
				cout << "What is the ID of the media you want to check in: ";
				cin >> id;
				cout << "What is the name of the librarian: ";
				cin >> n;
				cout << "ID number: ";
				cin >> id;
				cout << endl;
				l = library.create_new_librarian(n,id);

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
				cout << endl;
				c = library.create_new_customer(n,id,phone,email,balance);

				cout << "What is the check in date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;

				Date check_in1{month, day, year};

				cout << "What is the check in date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;
				Date due1{month, day, year};

				cout << "What is the transaction number";
				cin >> tNum;

				library.check_in_media(l,c,id,check_in1,due1,tNum);
			}

			if(subMenu == 2)
			{	
				cout << "What is the ID of the bundle you want to check in: ";
				cin >> id;
				cout << "What is the name of the librarian: ";
				cin >> n;
				cout << "ID number: ";
				cin >> id;
				cout << endl;
				l = library.create_new_librarian(n,id);

				cout << "What is the customer's name: ";
				cin >> n;
				cout << "What is the customer's phone number. Enter in the form 361-550-2335: ";
				cin >>  phone;
				cout << "What is the customer's email: ";
				cin >> email;
				cout << "Customer's balance: ";
				cin >> balance;
				cout << "ID Number: ";
				cin >> id;
				cout << endl;
				c = library.create_new_customer(n,id,phone,email,balance);

				cout << "What is the check in date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;

				Date check_in2{month, day, year};

				cout << "What is the check in date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;
				Date due2{month, day, year};

				cout << "What is the transaction number";
				cin >> tNum;

				library.check_in_bundle(l,c,id,check_in2,due2,tNum);
				}
			break;

		case 7:

			cout << view.check_out_submenu() << endl;
			cout  << "What would you like to check out: ";
			cin >> subMenu;
			switch(subMenu)
			{
				case 1: 
				break;
				case 2:
				break;
			}
			break;

		case 8:
			library.pay_balance(n,id,phone,email,balance);
			break;
		
		case 0:
			cout << "Now exiting the program\n";
			break;
	}
}



