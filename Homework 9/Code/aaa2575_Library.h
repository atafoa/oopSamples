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
	void browse_media();
	void browse_bundles();
	void get_bundle_info(Bundle bundle)
	void create_new_book(string author, int copyrightYear, string title, string genre ,int idNum, string callNum);
	void create_new_movie(int releaseYear, string producer, string director, vector<string> leadingActors, string title, int idNum, string genre, string callNum);
	void create_new_video_game(int releaseYear, string studio, int idNum, string title, string genre, string callNum);
	void create_new_music_album(int releaseYear, string artist, vector<string> tracks, string title, int idNum, string genre, string callNum);
	void create_new_television_show_season(int releaseYear, string producer, vector<string> director, vector<string> leadingActors, int seasonNum, string title, string idNum, string genre, string callNum);
	void create_new_bundle(string name, int idNum, string callNum, string title, string genre, Media media, int id, int subMenu);
	void create_new_librarian(string name, int id);
	void create_new_customer(string name, int id, string phoneNum, string email, double balance);
	void create_new_transaction(int transactionNumber, Librarian libraian, Customer customer);
	void save(string file_name);
	void load(string file_name);

	private:
	vector<Media> medias;
	vector<Transactions> transactions;
	vector<Customer> customers;
	vector<Librarian> librarians;
	vector<Bundles> bundles;
};

#endif