//
//  secret_code_1.cpp
//  Homework 2
//
//  Created by Atafo Abure on 1/22/18.


#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()

{
	// Open the file to be read
	ifstream myInputFile ("Words.txt"); // creates or opens the input file
	string line;
	if(myInputFile.is_open())
	{
		vector<string>  words;
		words.push_back(line); //store each words in terminal
	}
	else
		cout << "Unable to open file" << endl;
	return 0;
}
