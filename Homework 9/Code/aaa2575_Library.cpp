#include "aaa2575_Library.h"
#include <iostream>


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
			bundles[i].get_info();
			cout << endl;
		}
	}
}

void Library::create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum)
{
	Book book{author, copyrightYear, title, genre, idNum, callNum};
	medias.pusk_back(book);
	
}

void Library::create_new_movie(int releaseYear, string studio, string director, vector<string> leadingActors, string title, int idNum, string genre, string callNum)
{
	Movie movie{releaseYear, producer, director, leadingActors, title, idNum, callNum};
	medias.pusk_back(movie);
	
}

void Library::create_new_video_game(int releaseYear, string studio, int idNum, string title, string genre, string callNum)
{
	Video_Game videoGame{releaseYear, studio, idNum, title, genre, callNum};
	medias.pusk_back(videoGame);
	
}

void Library::create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum)
{
	Music_Album musicAlbum{releaseYear, artist, tracks, title, idNum, genre, callNum};
	medias.pusk_back(musicAlbum);
	
}

void Library::create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, string idNum, string genre, string callNum)
{
	Television_Show_Season tvShow{releaseYear, producer, director, leadingActors, seasonNum, title, idNum, genre, callNum};
	medias.pusk_back(tvShow);
	
}

void Library::create_new_bundle(string name, int idNum, string callNum, string title, string genre)
{
	Bundle bundle{name,idNum, callNum, title, genre};
	bundles.push_back(bundles);
}


void Library::create_new_librarian(string name, int id)
{
	Librarian librarian{name,id};
	librarians.push_back(librarian);
}

void Library::create_new_customer(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer{name, id, phoneNum, email, balance};
	customers.push_back(customer);

}

void Library::create_new_transaction(int trasactionNumber, Librarian librarian, Customer customer)
{
	Transaction transaction{trasactionNumber, librarian, customer};
	transactions.push_back(transaction);
}

void Library::save(string file_name)
{
	
}

void Library::load(string file_name)
{

}