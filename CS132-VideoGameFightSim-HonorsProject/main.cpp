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
#include <thread>

#include "character.hpp"

using namespace std;

void SaveGame(const Character& playerCharacter, const string& filename);
void LoadGame(Character& playerCharacter, const string& filename);
void PrintPlayerStats(const Character& playerCharacter);
void sleep(int seconds);

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

			cout << "I hope you find your experience here";
			sleep(1); cout << "."; sleep(1); cout << "."; sleep(1); cout << "."; sleep(1); cout << "entertaining.\n";
			sleep(2);

			cout << "Here's 10 coins to gear up with.\n";
			sleep(2);

			// Add 10 coins
			SaveGame(playerCharacter, "save_game.txt");
			PrintPlayerStats(playerCharacter);
			break;
		case 2:
			cout << endl;
			cout << "Loading game...\n";
			sleep(1);

			LoadGame(playerCharacter, "save_game.txt");
			PrintPlayerStats(playerCharacter);
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

void SaveGame(const Character& playerCharacter, const string& filename)
{
	ofstream fout(filename);

	if (fout.is_open())
	{
		fout << playerCharacter.getName()		<< " " << playerCharacter.getDescription()	 << " ";
		fout << playerCharacter.getMaxHealth()	<< " " << playerCharacter.getCurrentHealth() << " ";
		fout << playerCharacter.getAttack()		<< " " << playerCharacter.getBaseAttack()	 << " ";
		fout << playerCharacter.getDefense()	<< " " << playerCharacter.getBaseDefense()	 << " ";
		fout << playerCharacter.getLevel()		<< " " << playerCharacter.getExperience()	 << " ";
		fout << playerCharacter.getCoins();

		fout.close();

		cout << "\nGame saved successfully.\n";
	}
	else
	{
		cout << "\nUnable to open the file for saving.\n";
	}
	sleep(1);
}

void LoadGame(Character& playerCharacter, const string& filename)
{
	ifstream fin(filename);
	if (fin.is_open())
	{
		string name, description;
		int maxHealth, currentHealth, attack, baseAttack;
		int defense, baseDefense, level, experience, coins;

		fin >> name   >> description >> maxHealth >> currentHealth;
		fin >> attack >> baseAttack  >> defense   >> baseDefense;
		fin >> level  >> experience  >> coins;

		playerCharacter.setName(name);
		playerCharacter.setDescription(description);
		playerCharacter.setMaxHealth(maxHealth);
		playerCharacter.setCurrentHealth(currentHealth);
		playerCharacter.setAttack(attack);
		playerCharacter.setBaseAttack(baseAttack);
		playerCharacter.setDefense(defense);
		playerCharacter.setBaseDefense(baseDefense);
		playerCharacter.setLevel(level);
		playerCharacter.setExperience(experience);
		playerCharacter.setCoins(coins);

		fin.close();
		cout << "\nGame loaded successfully.\n";
	}
	else
	{
		cout << "\nUnable to open the file for loading.\n";
	}
	sleep(1);
}

void PrintPlayerStats(const Character& playerCharacter)
{
	cout << endl;
	cout << playerCharacter.getName() << endl;
	cout << playerCharacter.getDescription() << endl << endl;
	cout << "Max Health:     " << playerCharacter.getMaxHealth() << endl;
	cout << "Current Health: " << playerCharacter.getCurrentHealth() << endl;
	cout << "Attack:         " << playerCharacter.getAttack() << endl;
	cout << "Base Attack:    " << playerCharacter.getBaseAttack() << endl;
	cout << "Defense:        " << playerCharacter.getDefense() << endl;
	cout << "Base Defense:   " << playerCharacter.getBaseDefense() << endl;
	cout << "Level:          " << playerCharacter.getLevel() << endl;
	cout << "Experience:     " << playerCharacter.getExperience() << endl;
	cout << "Coins:          " << playerCharacter.getCoins() << endl;
	cout << endl;
	sleep(1);
}

void sleep(int seconds) 
{
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
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
