#include "aaa2575_Controller.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Customer.h"
#include <vector>

void Controller:: cli()
{
	int cmd = -1;
	while(cmd != 0)
	{
		cmd = std::stoi( (std:: string) Dialogs::input(view.get_menu(),"Arlington Public Library"));
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
	vector<string> options = {"Cancel","Browse Media", "Browse Bundles"};
	string trackNumber;

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
			subMenu = std::stoi((std::string) Dialogs::input(view.browse_submenu(),"Browse Menu"));
			if(subMenu < 0 || subMenu  > 2)
			{
				throw runtime_error("Input invalid Number has to be from 0 to 2");
			}

			switch(subMenu)
			{
				case 0:
					break;

				case 1:
				temp = library.browse_media();
				Dialogs::message(temp,view.media_header());
				break;

				case 2:
				 temp = library.browse_bundles();
				 Dialogs::message(temp,view.bundles_header());
				break;
				
			}
			break;

		case 2:
			Dialogs::message(view.media_submenu(),"Media");
			options = {"Cancel","Add Book", "Add Movie", "Add Video Game", "Add Music Album", "Add Television Show Season"};
			subMenu = Dialogs::question("What would you like to do?","Add Media", options);

			if(subMenu < 0 || subMenu  > 5)
			{
				throw runtime_error("Input invalid Number has to be from 0 to 5");
			}

			switch(subMenu)
			{
				case 0:
				break;

				case 1:
				Dialogs::message("Adding book to library","Adding book");
				t = Dialogs::input("What is the title of this book: ", "Title");
				a = Dialogs::input("Who is the author of this book: ", "Author");
				cy = std::stoi(Dialogs::input("What is the copyright year: ", "Copyright Year"),nullptr,10);
				g = Dialogs::input("What is the genre of this book: ", "Genre");
				id = std::stoi(Dialogs::input("ID number: ", "ID"),nullptr, 10);
				library.create_new_book(a,cy,t,g,id, "Book");
				break;

				case 2:
				Dialogs::message("Adding movie to library","Adding movie");
				t = Dialogs::input("What is the title of this movie: ", "Title");
				ry = std::stoi(Dialogs::input("When is the release year: ", "Release Year"),nullptr,10);
				producer = Dialogs::input("Who produced the movie: ", "Producer");
				g = Dialogs::input("What is the genre of this movie: ", "Genre");
				d = Dialogs::input("Who is the director of this movie: ", "Director");
				size = std::stoi(Dialogs::input("How many leading actors are there: ", "Leading Actors"),nullptr,10);

				for(int i = 0; i < size; i++)
				{
					temp = Dialogs::input("Enter a leading actors name: ", "Leading Actors");
					la.push_back(temp);
				}

				id = std::stoi(Dialogs::input("ID number: ", "ID"),nullptr, 10);
				library.create_new_movie(ry, producer, d, la, t, id,g,"Movie");
				break;

				case 3:
				Dialogs::message("Adding video game to library","Adding video game");
				t = Dialogs::input("What is the title of this video game: ", "Title");
				ry = std::stoi(Dialogs::input("When is the release year: ", "Release Year"),nullptr,10);
				studio = Dialogs::input("What studio produced this video game", "Studio");
				g = Dialogs::input("What is the genre of this video game: ", "Genre");
				id = std::stoi(Dialogs::input("ID number: ", "ID"),nullptr, 10);
				library.create_new_video_game(ry, studio, id, t,g, "Video Game");
				break;

				case 4:
				Dialogs::message("Adding album to library","Adding album");
				t = Dialogs::input("What is the title of this album ", "Title");
				artist = Dialogs::input("Who is the artist ", "Artist");
				ry = std::stoi(Dialogs::input("When is the release year ", "Release Year"),nullptr,10);
				g = Dialogs::input("What is the genre of this album ", "Genre");
				size = std::stoi(Dialogs::input("How many tracks are in this album ", "Tracks"),nullptr, 10);
				for(int i = 0; i < size; i++)
				{
					trackNumber = "Track " + std::to_string(i+1);
					temp = Dialogs::input(trackNumber, "Tracks");
					tracks.push_back(temp);
				}
				id = std::stoi(Dialogs::input("ID number: ", "ID"),nullptr, 10);
				library.create_new_music_album(ry, artist, tracks, t, id, g, "Music Album");
				break;

				case 5:
				Dialogs::message("Adding Television show season to library","Adding Television show season");
				t = Dialogs::input("What is the title of this Television Show ", "Title");
				producer = Dialogs::input("Who is the producer ", "Producer");
				ry = std::stoi(Dialogs::input("When is the release year ","Release Year"),nullptr,10);
				g = Dialogs::input("What is the genre of this Television Show ", "Genre");
				seasonNum = std::stoi(Dialogs::input("What is the season number ", "Season Number"),nullptr,10);
				size = std::stoi(Dialogs::input("How many directors are there", "Director"),nullptr, 10);
		

				for(int i = 0; i < size; i++)
				{
					temp = Dialogs::input("Name a director","Director");
					director.push_back(temp);
				}

				size = std::stoi(Dialogs::input("How many leading actors are there ", "Leading Actors"),nullptr, 10);

				for(int i = 0; i < size; i++)
				{
					temp = Dialogs::input("Name a leading actor","Leading Actors");
					la2.push_back(temp);
				}

				id = std::stoi(Dialogs::input("ID number: ", "ID"),nullptr, 10);
				library.create_new_television_show_season(ry, producer, director, la2,seasonNum,t, id, g, "Television Show");
				break;
			}
			break;

		case 3:
			Dialogs::message("Adding bundle to library","Adding bundle");
			n = Dialogs::input("What is the name of this bundle", "Title");
			id = std::stoi(Dialogs::input("ID Number","ID"),nullptr,10);
			t = Dialogs::input("What type of bundle is this", "Type");
			g = Dialogs::input("What is the genre of this bundle", "Genre");
			library.create_new_bundle(n,id,"Bundle",t,g);
			break;
		case 4:
			Dialogs::message("Creating Librarian account","Creating Librarian");
			n = Dialogs::input("What is the name of the librarian", "Name");
			id = std::stoi(Dialogs::input("ID Number","ID"));
			l = library.create_new_librarian(n,id);
			break;
		case 5:
			Dialogs::message("Creating customer account","Creating customer");
			n = Dialogs::input("What is the name of the customer", "Name");
			phone =  Dialogs::input("What is the customer's phone number\n Enter this in the form 361-550-2335", "Phone Number");
			email = Dialogs::input("What is the customer's email", "Email");
			balance = double (std::stoi(Dialogs::input("What is the customers balance","Customers balance")));
			id = std::stoi(Dialogs::input("ID number","ID"));
			c = library.create_new_customer(n,id,phone,email,balance);
			break;
		case 6:
			Dialogs::message(view.check_in_submenu(),"Check in");
			options = {"Cancel","Check in Media", "Check in Bundles"};
			subMenu = Dialogs::question("What would you like to do","Check in", options);

			switch(subMenu)
			{
				case 0;
				break;

				case 1:
				Dialogs::message("Checking in media", "Media check in");
				Dialogs::message("Librarian Information", "Media check in");
				n = Dialogs::input("What is the name of the librarian", "Name");
				id = std::stoi(Dialogs::input("ID Number","ID"));
				l = library.create_new_librarian(n,id);

				Dialogs::message("Customer information", "Media check in");
				n = Dialogs::input("What is the name of the customer", "Name");
				phone =  Dialogs::input("What is the customer's phone number\n Enter this in the form 361-550-2335", "Phone Number");
				email = Dialogs::input("What is the customer's email", "Email");
				balance = double (std::stoi(Dialogs::input("What is the customers balance","Customers balance")));
				id = std::stoi(Dialogs::input("ID number","ID"));
				c = library.create_new_customer(n,id,phone,email,balance);

				Dialogs::message("Check in date", "Media check in");
				id = std::stoi(Dialogs::input("What is the id of the media you want to check in", "Media ID"));
				month = std::stoi(Dialogs::input("In what month was the media checked in", "Month"));
				day = std::stoi(Dialogs::input("On what day was the media checked in", "Day"));
				year = std::stoi(Dialogs::input("In what year was the media checked in","Year"));
				tNum = std::stoi(Dialogs::input("What is the transaction number", "Transaction number"));
				Date check_in1{month, day, year};

				Dialogs::message("Due date", "Media check in");
				month = std::stoi(Dialogs::input("In what month was the media due", "Month"));
				day = std::stoi(Dialogs::input("On what day was the media due", "Day"));
				year = std::stoi(Dialogs::input("In what year was the media due","Year"));
				Date due1{month, day, year};

				library.check_in_media(l,c,id,check_in1,due1,tNum);
				break;

				case 2:
				Dialogs::message("Checking in Bundles","Bundle check in");
				id = std::stoi(Dialogs::input("What is the ID of the bundle you want to check in","ID number"));



				cout << "What is the ID of the bundle you want to check in: ";
				cin >> id;
				cout << "What is the name of the librarian: ";
				cin >> n;
				cout << "ID number: ";
				cin >> id;
				cout << endl;
				l = library.create_new_librarian(n,id);

				cout << endl;
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

				cout << endl;
				cout << "What is the check in date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;

				Date check_in2{month, day, year};

				cout << endl;
				cout << "What is the due date " << endl;
				cout  << "Month: ";
				cin >> month;
				cout << "Day: ";
				cin >> day;
				cout << "Year: ";
				cin >> year;
				Date due2{month, day, year};

				cout << endl;
				cout << "What is the transaction number";
				cin >> tNum;

				library.check_in_bundle(l,c,id,check_in2,due2,tNum);
				break;
			}
			break;

		case 7:

			view.check_out_submenu();
			cout  << "What would you like to check out: ";
			cin >> subMenu;
			if(subMenu == 1)
			{
				cout << "What is the ID of the media you want to check out: ";
				cin >> id;
				cout << "What is the name of the librarian: ";
				cin >> n;
				cout << "ID number: ";
				cin >> id;
				cout << endl;
				l = library.create_new_librarian(n,id);

				cout << endl;
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
				
				library.check_out_media(l,c,id);
			}

			if(subMenu == 2)
			{
				cout << "What is the ID of the bundle you want to check out: ";
				cin >> id;
				cout << "What is the name of the librarian: ";
				cin >> n;
				cout << "ID number: ";
				cin >> id;
				cout << endl;
				l = library.create_new_librarian(n,id);

				cout << endl;
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

				library.check_out_bundle(l,c,id);
			}

			else
					cout << "invalid option";
			break;

		case 8:
			library.pay_balance(n,id,phone,email,balance);
			break;

		case 0:
			break;
	}
}



