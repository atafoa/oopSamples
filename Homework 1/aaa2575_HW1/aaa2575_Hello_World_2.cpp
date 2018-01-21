//
//  aaa2575_Hello_World_2.cpp
//  Homework 1
//
//  Created by Atafo Abure on 1/17/18.
//  Copyright © 2018 Atafo Abure. All rights reserved.
//

#include <iostream>
#include <cstdlib>


using namespace	std;

int main() {
	
	cout << "Hello and welcome!\n" << endl;
	string userName;
	userName = getenv("USER");

	cout << "Thanks " << userName << " for telling me your name.\n" << endl;
	
	cout << "Please enter two integers: ";
	int num1, num2;
	cin >> num1 >> num2 ;
	cout << "\nThe sum of these two numbers is "<< num1 + num2 << endl;
	cout << "The difference of these two numbers is "<< num1 - num2 << endl;
	cout << "The product of these two numbers is "<< num1 * num2 << endl;
	cout << "The quotient of these two numbers is "<< num1 / num2 << endl;
	
	cout << "\nPlease enter two doubles: ";
	double num3, num4;
	cin >> num3 >> num4;
	cout << "\nThe sum of these two numbers is "<< num3 + num4 << endl;
	cout << "The difference of these two numbers is "<< num3 - num4 << endl;
	cout << "The product of these two numbers is " << num3 * num4 << endl;
	cout << "The quotient of these two numbers is " << num3 / num4 << endl;
	
	cout << "\nThank you for time " << userName << "." << endl;
	return 0;
}

