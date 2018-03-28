#include "aaa2575_Bundle.h"

#include <iostream>

Bundle::Bundle(string n , int idNum, string callNum, string t, string g) : Media(idNum,callNum,t,g)
{
	name = n;
	checked_out = false;
}

void Media::get_info()
{
	cout << "Bundle" << endl;
	cout << "Id Number: " << id_number << endl;
	cout << "Name:" << name << endl;
}
 
ostream& operator<<(ostream& ost, const Bundle& bundle_two)
{
	ost << bundle_two;
	return ost;
}
void Bundle::add_to_bundle(Media media)
{
	medias.push_back(media);
}

void Bundle::remove_from_bundle(int id)
{
	auto i = medias.find(id);
	if(i != medias.end())
	{
		medias.erase(i);
		cout << "Item removed from bundle" << endl;
	}
	else
		cout << "Item cannot be removed" << endl;
}

void Bundle::list_items()
{
	if(medias.size() == 0)
	{
		cout << "Bundle is empty" << endl;
		return;
	}

	auto it = medias.begin();
	for(;it != medias.end(); it++)
	{
		it.Media::get_info();
	}
}

bool Bundle::is_checked_out()
{
	if(Media::check_out() == true)
	{
		cheked_out = true;
		return true;
	}

	return false;

}