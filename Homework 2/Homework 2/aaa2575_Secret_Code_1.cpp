//
//  secret_code_1.cpp
//  Homework 2
//
//  Created by Atafo Abure on 1/22/18.


#include <iostream>
#include <fstream>
#include <vector>
#include <ctype.h>
#include <stdio.h>


using namespace std;

int main()

{
	// Open the file to be read
	ifstream myInputFile ("Words.txt"); // creates or opens the input file
	string line;
	vector<char> secretCode;
	string str;
	double sumOfNumbers;
	vector<string>  words;
	char c;
	
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
			}
			
		}
		
		for(int k = 0; k < secretCode.size(); k++)
		{
			cout << secretCode[k];
			
		}
		
		
		
		myInputFile.close();
	}
	else
		cout << "Unable to open file" << endl;
	return 0;
}
