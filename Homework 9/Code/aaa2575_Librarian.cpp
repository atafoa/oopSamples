#include "aaa2575_Librarian.h"

using namespace std;

Librarian::Librarian(string n, int idNum)
{
	name = n;
	id = idNum;
}

string Librarian::to_string() const
{
	return "Librarian name: " + name + " ID number: " + std::to_string(id);
}

void Librarian::get_info()
{
	cout << "Librarian name: " << name << endl;
	cout << "ID number: " << id << endl;
}

void Librarian::check_out_media(int mediaID, vector<Media> media)
{
	for(int i = 0; i < media.size(); i++)
	{
		if(media[i].get_id() == mediaID)
		{
			media[i].check_out();
		}
	}
}
void Librarian::check_out_bundle(int bundleID, vector<Bundle> bundle)
{
	for(int i = 0; i < bundle.size(); i++)
	{
		if(bundle[i].get_id() == bundleID)
		{
			bundle[i].check_out();
		}

	}
}

void Librarian::check_in_media(int mediaID, vector<Media> media)
{
	for(int i = 0; i < media.size(); i++)
	{
		if(media[i].get_id() == mediaID)
		{
			media[i].check_in();
		}
	}

}

void Librarian::check_in_bundle(int bundleID, vector<Bundle> bundle)
{
	for(int i = 0; i < bundle.size(); i++)
	{
		if(bundle[i].get_id() == bundleID)
		{
			bundle[i].check_in();
		}

	}

}

ostream& operator<<(ostream& ost, const Librarian& lb_two)
{
	ost << lb_two;
	return ost;
}