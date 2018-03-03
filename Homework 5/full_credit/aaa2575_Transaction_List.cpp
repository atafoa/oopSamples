#include "aaa2575_Transaction_List.h"


using namespace std;

Transaction_List:: Transaction_List()
{

}
bool Transaction_List:: add_transaction(Date date, Transaction transaction)
{
	return transactions.insert(make_pair(date,transaction)).second;
}

void Transaction_List::  save_to_file()
{
		outFile.open("aaa2575_save_file.txt");

			Date d {0,0,0,0,0,0};
			Transaction t {0, ""};

			auto it = transactions.begin();
			for(;it != transactions.end(); it++)
			{
				d = it->first;
				t = it->second;

				outFile << d.to_string() << " " << t.to_string() << endl;
			}
			outFile.close();

}
void Transaction_List:: list_transactions()
{
	if(transactions.size() == 0)
	{
		cout << "No transactions have been made " << endl;
		return;
	}

	Date d {0,0,0,0,0,0};
	Transaction t {0, ""};

	auto it = transactions.begin();
	for(;it != transactions.end(); it++)
	{
		d = it->first;
		t = it->second;
		cout << d.to_string() << " " << t.to_string() << endl;
		outFile << d.to_string() << " " << t.to_string() << endl;
	}
	outFile.close();
}

double Transaction_List:: get_average_transaction()
{
	auto it = transactions.begin();
	double sum = 0;
	Transaction t {0,""};

	for(;it != transactions.end();it++)
	{
		t = it-> second;
		sum +=t.get_price();
	}

	double average = sum / transactions.size();
	return average;

}

string Transaction_List:: bonus()
{
	if(transactions.empty())
	        return "No one";
	    map<string, int> bonus_list;
	    map<Date,Transaction>::iterator it = transactions.begin();
	    for(;it != transactions.end(); it++)
	    {
	        if(bonus_list.count(it->second.get_name()) == 0)
	            bonus_list.insert(make_pair(it->second.get_name(), 1));
	        else
	            bonus_list[it->second.get_name()] = bonus_list[it->second.get_name()] + 1;
	    }

	    int max = 0;
	    string bonus_winner = "";

	    map<string, int>::iterator itt = bonus_list.begin();
	    for(;itt != bonus_list.end(); itt++)
	    {
	        if(itt->second > max)
	        {
	            max = itt->second;
	            bonus_winner = itt->first;
	        }
	    }

	    return bonus_winner;
}

string Transaction_List:: to_string() const
{
	Date d {0,0,0,0,0,0};
	Transaction t {0, ""};
	stringstream ret;
	auto it = transactions.begin();
	for(;it != transactions.end(); it++)
	{
		d = it->first;
		t = it->second;
		ret << d.to_string() << ": " << t.to_string() << endl;
	}

	return ret.str();
}

ostream& operator<<(ostream& ost, const Transaction_List& trans_list_two)
{
	ost << trans_list_two;
	return ost;
}

void Transaction_List:: delete_transaction_by_date(Date d)
{
	auto i   = transactions.find(d);
	if( i != transactions.end())
		{
			transactions.erase(i);
		}
	else
	{
		cout <<"Date not found" << endl;
		return;
	}
}

void Transaction_List:: delete_transactions_by_name(string n)
{
	Transaction temp{0,""};
	auto it = transactions.begin();
	for(;it != transactions.end();it++)
	{
		temp = it -> second;
		if(n.compare(temp.get_name()) == 0)
		{
			transactions.erase(it);
		}
		else
		{
			cout << "Employee not found" << endl;
			return;
		}
	}
}
