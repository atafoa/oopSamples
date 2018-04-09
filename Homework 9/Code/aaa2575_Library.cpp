#include "aaa2575_Library.h"
#include <iostream>

Library::Library()
{

}

void Library::browse_media()
{
	if(medias.empty())
	{
		cout << "UH-OH. we are temporarily out of stock" << endl;
	}
	else
	{
		for(int i = 0; i  < medias.size(); i++)
		{
			medias[i].get_info();
			cout << endl;
		}
	}
}


void Library::browse_bundles()
{
	if(bundles.empty())
	{
		cout << "UH-OH. we are temporarily out of stock" << endl;
	}
	else
	{
		for(int i = 0; i < bundles.size(); i++)
		{
			cout << bundles[i].to_string();
			cout << endl;
		}
	}
}

void Library::check_in()
{

}

void Library::check_out()
{

}

void Library::pay_balance(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer = create_new_customer(name, id, phoneNum, email, balance);
	customer.pay_balance();
}

Media Library::create_new_media(int idNum, string callNum, string title, string genre)
{
	Media media{idNum, callNum, title, genre};
	media.get_info();
	medias.push_back(media);
	return media;

}

void Library::create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum)
{
	Book book{author, copyrightYear, title, genre, idNum, callNum};
	book.get_info();
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
	videoGame.get_info();
	medias.push_back(videoGame);	
}

void Library::create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum)
{
	Music_Album musicAlbum{releaseYear, artist, tracks, title, idNum, genre, callNum};
	musicAlbum.get_info();
	medias.push_back(musicAlbum);
}

void Library::create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, int idNum, string genre, string callNum)
{
	Television_Show_Season tvShow{releaseYear, producer, director, leadingActors, seasonNum, title, idNum, genre, callNum};
	tvShow.get_info();
	medias.push_back(tvShow);	
}

Bundle Library::create_new_bundle(string name, int idNum, string callNum, string title, string genre)
{
	Bundle bundle{name,idNum, callNum, title, genre};
	bundle.get_info();
	bundles.push_back(bundle);
	return bundle;
}

void Library::add_to_bundle(string name, int idNum, string callNum, string title, string genre)
{
	Bundle bundle = create_new_bundle(name,idNum,callNum,title,genre);
	int id; string type; string titleM; string genreM; int size;
	cout << "How many items are you adding to the bundle: ";
	cin  >> size;

	for(int i = 0; i < size; i++)
	{
		cout << "What is the title of this item: ";
		cin >> titleM;
		cout << "What is the genre of this item: ";
		cin >> genreM;
		cout << "ID number: ";
		cin >> id;
		cout << "What is the type of this item: ";
		cin >> type;
		bundle.add_to_bundle(create_new_media(id, type, titleM,genreM));
	}
	bundle.list_items();
}


void Library::create_new_librarian(string name, int id)
{
	Librarian librarian{name,id};
	librarian.get_info();
	librarians.push_back(librarian);

}

Customer Library::create_new_customer(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer{name, id, phoneNum, email, balance};
	customer.get_info();
	customers.push_back(customer);
	return customer;

}

void Library::create_new_transaction(int trasactionNumber, Librarian librarian(string name, int id), Customer customer(string n, int idC, string phone, string email, double balance), Date check_in(int m, int d, int y), Date due(int m,int d, int y))
{
	Transaction transaction{trasactionNumber, librarian, customer, check_in, due};
	transaction.get_info();
	transactions.push_back(transaction);
}

