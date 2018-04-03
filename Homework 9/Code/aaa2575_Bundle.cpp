#include "aaa2575_Bundle.h"

#include <iostream>

Bundle::Bundle(string n , int idNum, string callNum, string t, string g) : Media(idNum,callNum,t,g)
{
	name = n;
	checked_out = false;
}

void Bundle::get_info()
{
	cout << "Bundle" << endl;
	cout << "Id Number: " << id_number << endl;
	cout << "Name: " << name << endl;
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
	checked_out = true;
	return true;

}
