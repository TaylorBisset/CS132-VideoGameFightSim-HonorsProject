/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Honors Project
 Description:   This project is for my AAS in Computer Science Honors coursework.
				Professor Lonnie Heinke is my mentor through this quarter's assignments.

				The game will be a text-based console-window fighting simulator game.

Repo:           https://github.com/TaylorBisset/CS132-VideoGameFightSim-HonorsProject
*/

/*
main.cpp
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Welcome to the Armamentarium\n";
	cout << "What would you like to do?\n";
	cout << "1  New Game\n";
	cout << "2  Load Game\n";
	cout << "3  Leave Game\n";
	cout << endl;

	int choice;
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:
			// OS independent program termination sequence. 
#ifdef _WIN32
			cout << endl;
			system("pause");
#else
			cout << endl;
			cout << "Press any key to continue . . . ";
			cin.get();
#endif
			return 0;
		default:
			cout << "Invalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}

/*

Entity
 |
 |-Character
 |  |
 |  |--Player_Character
 |  |
 |  |--Non_Player_Character
 |
 |-Item
	|
	|--Armor
	|
	|--Weapon

*/
