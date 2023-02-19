//DeMario Russell 
//CIS - 251 C++
//02/17/2023
//HW - Infinite Loop
// Lab 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//variables for the user's input

	int choice = 0; // variable to store user's menu choice

	string name = ""; // variable to store user's name
	int age = 0; // variable to store user's age
	string occup = ""; // variable to store user's occupation

	//Start of Loop
	while (choice != -1)
	{
		// display menu options
		cout << "-1: Exit\n";
		cout << "1: Enter Name\n";
		cout << "2: Enter Age\n";
		cout << "3: Enter Occupation\n";
		
		// retrieve user's choices
		cin >> choice;

		// check if input fails (e.g. user enters a non-integer value)
		if (cin.fail()) {
			// clear input buffer to prevent infinite loop
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Sorry that choice is not valid!" << endl;
			continue;
		}
		// handle user's menu choice
		switch (choice)
		{
		case 1:
			//retrieve user's name
			cout << "What is your Name: ";
			cin >> name;
			break;
		case 2:
			//retrieve user's age
			cout << "What is your Age? ";
			cin >> age;
			break;
		case 3:
			//retrieve user's occupation
			cout << "What is your Occupation? ";
			cin >> occup;
			break;
		case -1:
			//exit the program
			break;
		default:
			// Assume Invalid Menu Choice
			cout << "Sorry that choice is not valid!" << endl;
			break;
		}
	}
	//increase the user's age by one
	age += 1;

	cout << "Thank you for using our application, " << name << " and hope your career in " << occup << " is successful.";
	cout << "Hope your " << age << " birthday will enjoyable and exciting";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
