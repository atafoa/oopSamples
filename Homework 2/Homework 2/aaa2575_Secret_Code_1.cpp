//
//  secret_code_1.cpp
//  Homework 2
//
//  Created by Atafo Abure on 1/22/18.


#include <iostream>
#include <fstream>
#include <vector>
#include <ctype.h>


using namespace std;

int main()

{
	// Open the file to be read
	ifstream myInputFile ("Words.txt"); // creates or opens the input file
	string line;
	string secretCode;
	double sumOfNumbers;
	vector<string>  words;
	char c
	
	if(myInputFile.is_open())
	{
		while(getline (myInputFile, line))
		{
			  //store each words in terminal
			words.push_back(line);
			cout << line << endl;
		}
		
		for(int i = 0; i < words.size(); i++)
		{
			words[i]
		}
		
		
		myInputFile.close();
	}
	else
		cout << "Unable to open file" << endl;
	return 0;
}
