#include "aaa2575_Library.h"
#include <iostream>
#include <vector>

Library::Library()
{

}

string Library::browse_media()
{
	string temp;

	if(medias.empty())
	{
		temp = "UH-OH. we are temporarily out of stock";
	}
	else
	{
		for(int i = 0; i  < medias.size(); i++)
		{
			temp  += medias[i].to_string();
		}
	}
	return temp;
}


string Library::browse_bundles()
{

	string temp;
	if(bundles.empty())
	{
		temp =  "UH-OH. we are temporarily out of stock";
	}
	else
	{
		
		for(int i = 0; i < bundles.size(); i++)
		{
			temp += bundles[i].to_string();
		}
	}

	return temp;
}


void Library::check_in_media(Librarian l, Customer c, int id, Date check_in, Date due, int tNum)
{
	Transaction t =  create_new_transaction(tNum,l,c,check_in,due);
	int diff = t.calculate_fee();

	if(diff >= 0)
	{
		cout << "Unable to check this book in as you are checking it in past the due date." << endl;
		cout  << "Please pay outstanding fees" << endl;
		return;
	}

	t.get_info();

	for(int i = 0; i < medias.size(); i++)
	{
		if(medias[i].get_id() == id)
		{
			medias[i].check_in();
		}
	}

}

void Library::check_in_bundle(Librarian l, Customer c, int id, Date check_in, Date due, int tNum)
{
	Transaction t = create_new_transaction(tNum,l,c,check_in,due);
	int diff = t.calculate_fee();

	if(diff >= 0)
	{
		cout << endl << "Unable to check this book in as you are checking it in past the due date." << endl;
		cout  << "Please pay outstanding fees" << endl;
		return;
	}

	t.get_info();
	for(int i = 0; i < bundles.size(); i++)
	{
		if(bundles[i].get_id() == id)
		{
			bundles[i].check_in();
		}

	}
}

void Library::check_out_media(Librarian l, Customer c, int id)
{	
	for(int i = 0; i < medias.size(); i++)
	{
		if(medias[i].get_id() == id)
		{
			medias[i].check_in();
		}
	}
}

void Library::check_out_bundle(Librarian l, Customer c, int id)
{

	for(int i = 0; i < bundles.size(); i++)
	{
		if(bundles[i].get_id() == id)
		{
			bundles[i].check_in();
		}

	}
}

void Library::pay_balance(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer = create_new_customer(name, id, phoneNum, email, balance);
	customer.pay_balance();
}

Media Library::create_new_media(int idNum, string callNum, string title, string genre)
{
	Media media{idNum, callNum, title, genre};
	medias.push_back(media);
	return media;

}

void Library::create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum)
{
	Book book{author, copyrightYear, title, genre, idNum, callNum};
	medias.push_back(book);	
}

void Library::create_new_movie(int releaseYear, string producer, string director, vector<string> leadingActors, string title, int idNum, string genre, string callNum)
{
	Movie movie{releaseYear, producer, director, leadingActors, title, idNum, genre,callNum};
	movie.get_info();
	medias.push_back(movie);	
}

void Library::create_new_video_game(int releaseYear, string studio, int idNum, string title, string genre, string callNum)
{
	Video_Game videoGame{releaseYear, studio, idNum, title, genre, callNum};
	medias.push_back(videoGame);	
}

void Library::create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum)
{
	Music_Album musicAlbum{releaseYear, artist, tracks, title, idNum, genre, callNum};
	medias.push_back(musicAlbum);
}

void Library::create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, int idNum, string genre, string callNum)
{
	Television_Show_Season tvShow{releaseYear, producer, director, leadingActors, seasonNum, title, idNum, genre, callNum};
	medias.push_back(tvShow);	
}

Bundle Library::create_new_bundle(string name, int idNum, string callNum, string title, string genre)
{
	Bundle bundle{name,idNum, callNum, title, genre};
	bundles.push_back(bundle);
	
	int id; string type; string titleM; string genreM; int size;
	Dialogs::message("Now adding items to bundle","Add to Bundle");
	size = std::stoi(Dialogs::input("How many items are you adding to the bundle", "Add to Bundle"));

	for(int i = 0; i < size; i++)
	{
		titleM = Dialogs::input("What is the title of this item","Title");
		genreM = Dialogs::input("What is the genre of this item", "Genre");
		id = std::stoi(Dialogs::input("ID number","ID"));
		type = Dialogs::input("What is the type of media","Type");
		bundle.add_to_bundle(create_new_media(id, type, titleM,genreM));
	}

	return bundle;
}


Librarian Library::create_new_librarian(string name, int id)
{
	Librarian librarian{name,id};
	librarian.get_info();
	librarians.push_back(librarian);
	return librarian;

}

Customer Library::create_new_customer(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer{name, id, phoneNum, email, balance};
	customer.get_info();
	customers.push_back(customer);
	return customer;

}

Transaction Library::create_new_transaction(int trasactionNumber, Librarian librarian, Customer customer, Date check_in, Date due)
{
	Transaction transaction{trasactionNumber, librarian, customer, check_in, due};
	transactions.push_back(transaction);
	return transaction;
}

