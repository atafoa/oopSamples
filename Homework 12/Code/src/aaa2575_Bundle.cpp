#include "include/aaa2575_Bundle.h"

#include <iostream>


Bundle::Bundle(string n , int idNum, string callNum, string t, string g) : Media(idNum,callNum,t,g)
{
	name = n;
	checked_out = false;
}

string Bundle::to_string() const
{
	string bundleInfo =  "Id Number: " + std::to_string(id_number) + " Name: " + name + "\n";
	return bundleInfo;
}

void Bundle::get_info()
{
	cout << "Id Number: " << id_number << endl;
	cout << "Name: " << name << endl;
}
 
 int Bundle::get_id()
 {
 	return id_number;
 }
ostream& operator<<(ostream& ost, const Bundle& bundle_two)
{
	ost << bundle_two;
	return ost;
}
void Bundle::add_to_bundle(Media media)
{
	medias.push_back(media);
	cout << "Media with id " << media.get_id() << " has been added to the bundle." << endl;

}

void Bundle::remove_from_bundle(int id)
{
	for(int i = 0; i < medias.size(); i++)
	{
		if(medias[i].get_id() == id)
		{
			medias.pop_back();
			cout << "Media with id " << medias[i].get_id() << " has been removed from the bundle." << endl;
		}
	}
}

void Bundle::list_items()
{
	if(medias.size() == 0)
	{
		cout << "Bundle is empty" << endl;
		return;
	}

	cout << endl << "Bundle Information" << endl << endl;

	for(int i = 0; i < medias.size(); i++)
	{
		medias[i].get_info();
		cout << endl; 
	}
}

bool Bundle::check_out()
{
	int i;
	checked_out = true;
	for(i = 0; i < medias.size(); i++)
	{
		if(medias[i].check_out() == true)
			return true;
	}
	return false;
}
