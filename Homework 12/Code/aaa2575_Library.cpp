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


string Library::check_in_media(Librarian l, Customer c, int id, Date check_in, Date due, int tNum)
{
	Transaction t =  create_new_transaction(tNum,l,c,check_in,due);
	int diff = t.calculate_fee();
	string output;

	if(diff >= 0)
	{
		output +=  "Unable to check this book in as you are checking it in past the due date. \n";
		output += "Please pay outstanding fees\n";
		return output;
	}

	for(int i = 0; i < medias.size(); i++)
	{
		if(medias[i].get_id() == id)
		{
			if(medias[i].check_in() == true)
			{
				output += t.to_string();
				output += " Media has been succesfully checked in \n";
				return output;
			}
		}
	}

	return output;

}

string Library::check_in_bundle(Librarian l, Customer c, int id, Date check_in, Date due, int tNum)
{
	Transaction t = create_new_transaction(tNum,l,c,check_in,due);
	int diff = t.calculate_fee();
	string output;

	if(diff >= 0)
	{
		output += "Unable to check this book in as you are checking it in past the due date. \n";
		output += "Please pay outstanding fees\n";
		return output;
	}

	
	for(int i = 0; i < bundles.size(); i++)
	{
		if(bundles[i].get_id() == id)
		{
			if(bundles[i].check_in() == true)
			{
				output += t.to_string();
				output += " Bundle has been succesfully checked in \n";
				return output;
			}
		}
	}
}

string Library::check_out_media(Librarian l, Customer c, int id)
{	
	string output;
	for(int i = 0; i < medias.size(); i++)
	{
		if(medias[i].get_id() == id)
		{
			if(medias[i].check_out())
			{	
				output += l.to_string();
				output += c.to_string();
				output += "Media has been succesfully checked out";
				checked_out.push_back(medias[i]);
				user_checked_out.push_back(c);
			}
			else
				output += "Unable to check out media";
		}
	}

	return output;
}

string Library::check_out_bundle(Librarian l, Customer c, int id)
{
	string output;
	for(int i = 0; i < bundles.size(); i++)
	{
		if(bundles[i].get_id() == id)
		{
			if(bundles[i].check_out())
			{
				output += l.to_string();
				output += c.to_string();
				output += "Bundle has been succesfully checked out";
			}
			else
				output += "Unable to check out bundle";
		}
	}
	return output;
}

void Library::pay_balance(int id)
{
	for(int i = 0; i < customers.size();i++)
	{
		if(customers[i].get_id() == id)
		{
			Dialogs::message(customers[i].get_balance(),"Customer balance");
			customers[i].pay_balance();
			Dialogs::message(("New balance is "+customers[i].get_balance()),"Customers balance");
		}		
	}

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
	Dialogs::message(tvShow.get_info(),"TV show information");
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
	Dialogs::message(librarian.to_string(),"Librarian information");
	librarians.push_back(librarian);
	return librarian;
}

Customer Library::create_new_customer(string name, int id, string phoneNum, string email, double balance)
{
	Customer customer{name, id, phoneNum, email, balance};
	Dialogs::message(customer.to_string(), "Customer information");
	customers.push_back(customer);
	return customer;

}

Transaction Library::create_new_transaction(int trasactionNumber, Librarian librarian, Customer customer, Date check_in, Date due)
{
	Transaction transaction{trasactionNumber, librarian, customer, check_in, due};
	transactions.push_back(transaction);
	return transaction;
}

string Library::stock_levels()
{
	bool flag = false;
	string output;

	if(!checked_out.empty())
	{	
		flag = true;
		for(int i = 0; i < checked_out.size(); i++)
		{
			output += "Item: " + checked_out[i].to_string() + " has been checked out to " + user_checked_out[i].to_string();
		
		}
		return output;
	}

	if(flag == false)
	{
		output += "No items have been checked out \n";
		return output;
	}
}

void Library::save(string file_name)
{
	outfile.open(file_name);
	string output;

	if(librarians.empty())
	{
		output = "No Librarians have been entered into the system \n";
		outfile << output;
	}
	else
	{
		output = R"(
		=================
		Librarians
		=================\n

		)";

		outfile << output;
		for(int i = 0; i < librarians.size(); i++)
		{
			outfile << librarians[i].to_string() << endl;
		}
		outfile << endl;
	}

	if(customers.empty())
	{
		output = "No Customers have been entered into the system \n";
		outfile << output;
	}
	else
	{
		output = R"(
		=================
		Customers
		=================

		)";

		outfile << output;
		for(int i = 0; i < customers.size(); i++)
		{
			outfile << customers[i].to_string() << endl;
		}
		outfile << endl;
	}

	if(medias.empty())
	{
		output = "No Medias have been entered into the system \n";
		outfile << output;
	}
	else
	{
		output = R"(
		=================
		Media
		=================

		)";

		outfile << output;
		for(int i = 0; i < medias.size(); i++)
		{
			outfile << medias[i].to_string() << endl;
		}
		outfile << endl;
	}


	if(bundles.empty())
	{
		output = "No Bundles have been entered into the system \n";
		outfile << output;
	}
	else
	{
		output = R"(
		=================
		Bundles
		=================

		)";

		outfile << output;
		for(int i = 0; i < bundles.size(); i++)
		{
			outfile << bundles[i].to_string() << endl;
		}
		outfile << endl;
	}

	if(transactions.empty())
	{
		output = "No Transactions have been entered into the system";
		outfile << output;
	}
	else
	{
		output = R"(
		=================
		Transactions
		=================

		)";

		outfile << output;
		for(int i = 0; i < transactions.size(); i++)
		{
			outfile << transactions[i].to_string() << endl;
		}
		outfile << endl;
	}


	outfile.close();
}

string Library::load_librarians(string file_name)
{

	Librarian tempLibrarian{"",0};
	string name;
	string output;
	string line;
	char removeChar;
	int id;
	infile.open(file_name);

	if(infile.is_open())
	{
		if(infile.eof())
		{
			infile.close();
			output += "No Information is in this file\n";
			return output;
		}
		
		while(infile.eof() == false)
		{
			getline(infile,line);
			iss << line;
			iss >> id;
			iss >> removeChar;
			iss >> name;
			iss.str("");
			iss.clear();
			tempLibrarian = create_new_librarian(name,id);
		}
		output += "Load Successful";
		infile.close();
		return output;

		if(infile.bad())
			throw runtime_error("Bad File");
	}

}

string Library::load_customers(string file_name)
{
	Customer tempCustomer{"",0,"","",0.0};
	string name;
	int id;
	string phone;
	string email;
	double balance;
	char removeChar;
	infile.open(file_name);
	string output;
	string line;

	if(infile.is_open())
	{
		if(infile.eof())
		{
			infile.close();
			output += "No Information is in this file\n";
			return output;
		}
		
		while(infile.eof() == false)
		{
			getline(infile,line);
			iss << line;
			iss >> id;
			iss >> removeChar;
			iss >> name;
			iss >> removeChar;
			iss >> phone;
			phone.erase(phone.end());
			iss >> email;
			iss >> removeChar;
			iss >> balance;
			iss.str("");
			iss.clear();
			tempCustomer = create_new_customer(name,id,phone,email,balance);
		}
		output += "Load Successful";
		infile.close();
		return output;

		if(infile.bad())
			throw runtime_error("Bad File");
	}
}

string Load