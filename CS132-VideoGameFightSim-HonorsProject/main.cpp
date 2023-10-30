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

#include "game_functions.hpp"
#include "character.hpp"

using namespace std;

int main()
{
	cout << endl;
	cout << "Welcome to the Armamentarium!\n\n";
	cout << "What would you like to do?\n";
	cout << "1  New Game\n";
	cout << "2  Load Game\n";
	cout << "3  Leave Game\n";
	cout << endl;

	int choice;
	Character playerCharacter;
	string name;
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << endl;
			cout << "What is your name, warrior?\n";
			cin >> name;
			cin.ignore();
			playerCharacter = Character(name, "A capable warrior.", 10, 10, 2, 2, 2, 2, 1, 0, 0);
			cout << endl;
			cout << "Welcome, " << name << "!\n";
			sleep(1);

			cout << "I hope you find your experience here to be";
			sleep(2); cout << "."; sleep(1); cout << "."; sleep(1); 
			cout << "."; sleep(1); cout << " entertaining.\n";
			sleep(2);

			cout << "Here's 10 coins to gear up with.\n";
			sleep(1);
			playerCharacter.modifyCoins(10);
			sleep(2);
			PrintPlayerStats(playerCharacter);
			sleep(2);
			// Initiate gameplay
			break;
		case 2:
			cout << endl;
			cout << "Loading game...\n";
			sleep(1);

			LoadGame(playerCharacter, "save_game.txt");
			PrintPlayerStats(playerCharacter);
			sleep(2);
			// Initiate gameplay
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
			cout << endl;
			cout << "Invalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}

/*

Entity
 |
 |-Character
 |
 |-Item
	|
	|--Armor
	|
	|--Weapon

*/
