// game_functions.cpp

#include <iostream>
#include <fstream>
#include <thread>

#include "game_functions.hpp"

void sleep(int seconds)
{
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void QuitGame()
{
	// OS independent program termination sequence. 
#ifdef _WIN32
	cout << endl;
	system("pause");
#else
	cout << endl;
	cout << "Press any key to continue . . . ";
	cin.get();
#endif
	exit(0);
}

void SaveGame(const Character& playerCharacter, const string& filename)
{
	ofstream fout(filename);

	if (fout.is_open())
	{
		fout << playerCharacter.getName() << endl << playerCharacter.getDescription() << endl;
		fout << playerCharacter.getMaxHealth() << endl << playerCharacter.getCurrentHealth() << endl;
		fout << playerCharacter.getAttack() << endl << playerCharacter.getBaseAttack() << endl;
		fout << playerCharacter.getDefense() << endl << playerCharacter.getBaseDefense() << endl;
		fout << playerCharacter.getLevel() << endl << playerCharacter.getExperience() << endl;
		fout << playerCharacter.getCoins() << endl;

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

		getline(fin, name);
		getline(fin, description);
		fin >> maxHealth >> currentHealth;
		fin >> attack >> baseAttack >> defense >> baseDefense;
		fin >> level >> experience >> coins;

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

void GameMenu()
{
	Character playerCharacter;

	while (true)
	{
		cout << endl;
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << endl;

		cout << "Welcome to the Armamentarium!\n\n";
		cout << "What would you like to do?\n";
		cout << "1  New Game\n";
		cout << "2  Load Game\n";
		cout << "3  Leave Game\n";

		cout << endl;
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << endl;

		int choice;
		string name;
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
			QuitGame();
			return;
		default:
			cout << endl;
			cout << "Invalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}

void IdleMenu()
{
	Character playerCharacter;

	while (true)
	{
		cout << "\n\tWelcome to the Armamentarium\n\n";

		cout << "Make your choice\n\n";

		cout << "1  Fight your next opponent\n";
		cout << "2  View stats\n";
		cout << "3  Buy gear\n";
		cout << "4  Save the game\n";
		cout << "5  Exit to Main Menu\n";

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			// Implement the fight logic
			break;
		case 2:
			sleep(1);
			PrintPlayerStats(playerCharacter);
			sleep(1);
			break;
		case 3:
			// Implement the buy gear logic
			break;
		case 4:
			sleep(1);
			SaveGame(playerCharacter, "save_game.txt");
			sleep(1);
			break;
		case 5:
			sleep(1);
			cout << "Returning to Main Menu.\n";
			sleep(1);
			return;
		default:
			cout << "Invalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}
