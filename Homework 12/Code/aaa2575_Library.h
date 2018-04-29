#ifndef LIBRARY_H
#define LIBRARY_H

#include "aaa2575_Dialog.h"
#include "aaa2575_Book.h"
#include "aaa2575_Movie.h"
#include "aaa2575_Video_Game.h"
#include "aaa2575_Music_Album.h"
#include "aaa2575_Television_Show_Season.h"
#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Customer.h"
#include "aaa2575_Transaction.h"
#include <fstream>
#include <vector>
#include <sstream>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

class Library
{
	public:
	Library();
	string browse_media();
	string browse_bundles();
	Media create_new_media(int idNum, string callNum, string title, string genre);
	void create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum);
	void create_new_movie(int releaseYear, string producer, string director, vector<string> leadingActors, string title, int idNum, string genre, string callNum);
	void create_new_video_game(int releaseYear, string studio, int idNum, string title, string genre, string callNum);
	void create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum);
	void create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, int idNum, string genre, string callNum);
	Bundle create_new_bundle(string name, int idNum, string callNum, string title, string genre);
	Librarian create_new_librarian(string name, int id);
	Customer create_new_customer(string name, int id, string phoneNum, string email, double balance);
	Transaction create_new_transaction(int trasactionNumber, Librarian librarian, Customer customer, Date check_in, Date due);
	string check_in_media(Librarian l, Customer c, int id, Date check_in, Date due, int tNum);
	string check_in_bundle(Librarian l, Customer c, int id, Date check_in, Date due, int tNum);
	string check_out_media(Librarian l, Customer c, int id);
	string check_out_bundle(Librarian l, Customer c, int id);
	void pay_balance(int id);
	string stock_levels();
	void save(string file_name);
	void load();
	ofstream outfile;
	
	protected:
	vector<Media> medias;
	vector<Transaction> transactions;
	vector<Customer> customers;
	vector<Librarian> librarians;
	vector<Bundle> bundles;
	vector<Media> checked_out;
	vector<Customer> user_checked_out;
	
};

#endif
