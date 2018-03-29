#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Customer.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Television_Show_Season.h"
#include "aaa2575_Book.h"
#include "aaa2575_Movie.h"
#include "aaa2575_Music_Album.h"
#include "aaa2575_Video_Game.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Book book{"F. Scott Fitzgerald", 1925, "The Great Gatsby" ,"Fiction",001, "Book"};
	book.get_info();
	cout << endl;

	Video_Game videoGame{2017, "Epic Games", 002, "Fortnite", "Survival", "Game"};
	videoGame.get_info();
	cout << endl;

	vector<string> la = {"Orson Welles", "Joseph Cotton", "Ruth Warrick"};
	Movie movie{1941,"RKO Pictures","Orson Welles",la, "Citizen Kane", 003, "Mystery", "Movie"};
	movie.get_info();
	cout << endl;

	vector<string> tr = {"Good Morning", "Champion", "Stronger"};
	Music_Album musicAlbum{2007,"Kanye West", tr, "Graduation", 004, "Rap/Hip-Hop", "Music Album"};
	musicAlbum.get_info();
	cout << endl;

	vector<string> d = {"Alan Myserson", "Andrew Tsao", "Arlene Sanford", "David Schwimmer", "David Steinberg", "Gail Mancuso"};
	vector <string> tla = {"Jennifer Aniston", "Courteney Cox", "Matthew Perry", "Lisa Kudrow", "Matt LeBlanc", "David Schwimmer"};
	Television_Show_Season show{2004, "Bright, Kauffman, Crane Productions",d,tla,10,"Friends", 005,"Sitcom","TV Show"};
	show.get_info();
	cout << endl;

	Librarian librarian{"Maggie Willis", 006};
	librarian.get_info();
	cout << endl;

	Customer customer{"Cole Wheeler", 006, "361-550-2335", "cole.wheeler@gmail.com", 5.0};
	customer.get_info();
	customer.get_balance();
	cout << endl;

	Bundle bundle{"Cole's Bundle", 007, "Book", "Historical Fiction Books", "Fiction"};
	Book fiction1{"Ernst Hemingway",1926, "The Sun Also Rises", "Fiction",8, "Book"};
	Book fiction2{"Ernst Hemingway",1952, "The Old Man and the Sea", "Fiction",9, "Book"};
	bundle.get_info();
	cout << endl;
	bundle.add_to_bundle(fiction1);
	bundle.add_to_bundle(fiction2);
	cout << endl;
	bundle.list_items();
	bundle.remove_from_bundle(9);
	cout << endl;
	




}
