 //
//  secret_code_2.cpp
//  Homework 2
//
//  Created by Atafo Abure on 1/22/18.


#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

int main()

{
	// Open the file to be read
	ifstream myInputFile ("Bonus_Words.txt"); // creates or opens the input file
	string line;
	vector<char> secretCode;
	string str;
	char c;
	int secretNumber = 0;
	vector<string>  words;

	
	if(myInputFile.is_open())
	{
		while(getline (myInputFile, line))
		{
			//store each words in vector
			words.push_back(line);
			cout << line << endl;
		}
		
		
		// iterates through vector and checks for uppercase letters
		for(int i = 0; i < words.size(); i++)
		{
			str = words[i];
			
			
			for (int j = 0; j < str.size(); j++)
			{
				c = str[j];
				
				if(isupper(c))
				{
					secretCode.push_back(c);
				}


				if (isdigit(c))
				{
					if(c == str.size() - 1)
					{
						secretNumber += ( c - '0');
					}
					else 
					{
						char cNext = str[j+1];
						if(isdigit(cNext))
						{
							secretNumber += (c -'0') * 10;
						} else
						{
							secretNumber += (c - '0');
						}
					}
				}
				
				
				
			
			} 
				
		}
			
		

		//Append to file        
		ofstream outfile;
		ofstream oft;
		outfile.open("Bonus_Words.txt",ios_base::app);
		oft.open("aaa2575_Secret_Code_2.txt");

		cout << "\n" << "The Secret Code is: ";
		outfile << "\n\n" << "The Secret Code is: ";
		oft << "The Secret Code is: ";

		for(int k = 0; k < secretCode.size(); k++)
		{
			cout << secretCode[k];
			outfile << secretCode[k];
			oft << secretCode[k];
			
		}

		cout << secretNumber << endl;
		outfile << secretNumber << endl;
		oft << secretNumber << endl;

		myInputFile.close();
	}
	else
		cout << "Unable to open file" << endl;
	return 0;
}
