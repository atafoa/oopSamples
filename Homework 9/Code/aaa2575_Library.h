#ifndef LIBRARY_H
#define LIBRARY_H

#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Date.h"
#include "aaa2575_Librarian.h"
#include "aa2575_Customer.h"
#include "aaa2575_Transaction.h"

using namespace std;

class Library
{
	public:
	Library();
	void browse_media();
	void browse_bundles();
	Media create_new_media(int idNum, string callNum, string title, string genre);
	void create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum);
	void create_new_movie(int releaseYear, string producer, string director, vector<string> leadingActors, string title, int idNum, string genre, string callNum);
	void create_new_video_game(int releaseYear, string studio, int idNum, string title, string genre, string callNum);
	void create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum);
	void create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, string idNum, string genre, string callNum);
	void create_new_bundle(string name, int idNum, string callNum, string title, string genre, Media media, int id, int subMenu);
	void create_new_librarian(string name, int id);
	Customer create_new_customer(string name, int id, string phoneNum, string email, double balance);
	void create_new_transaction(int transactionNumber, Librarian libraian, Customer customer, Date check_in, Date due);
	void add_to_bundle();
	void check_in();
	void check_out();
	void pay_balance();
	void save(string file_name);
	void load_media(string file_name);
	void load_bundle(string file_name);
	void load_librarian(string file_name);
	void load_customer(string file_name);
	ofstream outfile;
	ifstream infile;

	private:
	vector<Media> medias;
	vector<Transactions> transactions;
	vector<Customer> customers;
	vector<Librarian> librarians;
	vector<Bundles> bundles;
};

#endif