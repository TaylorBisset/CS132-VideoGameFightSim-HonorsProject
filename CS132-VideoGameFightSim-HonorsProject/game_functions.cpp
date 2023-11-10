// game_functions.cpp

#include <iostream>
#include <fstream>
#include <thread>

#include "game_functions.hpp"

char ll = 200;
char ul = 201;
char ur = 187;
char lr = 188;
char hl = 186;
char vl = 205;

void sleep(int seconds)
{
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void QuitGame()
{
	cout << "\nThank you for playing!\nCome back soon!\n\n";
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
	cout << "Saving game";
	sleep(1); cout << "."; sleep(1); cout << "."; sleep(1); cout << "."; sleep(1);

	ofstream fout(filename);

	if (fout.is_open())
	{
		fout << playerCharacter.getName() << endl << playerCharacter.getDescription() << endl;

		fout << playerCharacter.getLevel() << endl << playerCharacter.getExperience() << endl;
		fout << playerCharacter.getCoins() << endl;

		fout << playerCharacter.getMaxHealth() << endl << playerCharacter.getCurrentHealth() << endl;

		fout << playerCharacter.getAttack() << endl << playerCharacter.getBaseAttack() << endl;
		fout << playerCharacter.getDefense() << endl << playerCharacter.getBaseDefense() << endl;


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
		cout << "Loading game";
		sleep(1); cout << "."; sleep(1); cout << "."; sleep(1); cout << "."; sleep(1);

		string name, description;
		int maxHealth, currentHealth, attack, baseAttack;
		int defense, baseDefense, level, experience, coins;

		getline(fin, name);
		getline(fin, description);
		fin >> level >> experience >> coins;
		fin >> maxHealth >> currentHealth;
		fin >> attack >> baseAttack >> defense >> baseDefense;

		playerCharacter.setName(name);
		playerCharacter.setDescription(description);
		playerCharacter.setLevel(level);
		playerCharacter.setExperience(experience);
		playerCharacter.setCoins(coins);
		playerCharacter.setMaxHealth(maxHealth);
		playerCharacter.setCurrentHealth(currentHealth);
		playerCharacter.setAttack(attack);
		playerCharacter.setBaseAttack(baseAttack);
		playerCharacter.setDefense(defense);
		playerCharacter.setBaseDefense(baseDefense);

		fin.close();
		cout << "\nGame loaded successfully.\n";
	}
	else
	{
		cout << "\nUnable to open the file for loading.\n";
	}
}

void PrintPlayerStats(const Character& playerCharacter)
{
	cout << endl;
	cout << playerCharacter.getName() << endl;
	cout << playerCharacter.getDescription() << endl << endl;
	cout << "Level:          " << playerCharacter.getLevel() << endl;
	cout << "Experience:     " << playerCharacter.getExperience() << endl;
	cout << "Coins:          " << playerCharacter.getCoins() << endl << endl;

	cout << "Max Health:     " << playerCharacter.getMaxHealth() << endl;
	cout << "Current Health: " << playerCharacter.getCurrentHealth() << endl << endl;

	cout << "Attack:         " << playerCharacter.getAttack() << endl;
	cout << "Base Attack:    " << playerCharacter.getBaseAttack() << endl;
	cout << "Defense:        " << playerCharacter.getDefense() << endl;
	cout << "Base Defense:   " << playerCharacter.getBaseDefense() << endl;

	cout << endl;
	sleep(1);
}

void GameMenu()
{
	Character playerCharacter;

	while (true)
	{
		cout << endl;
		// main menu top line
		cout << "\t" << ul;
		for (int i = 0; i < 31; i++)
		{
			cout << vl;
		}
		cout << ur << endl;

		cout << "\t" << hl << "                               " << hl << "\n";
		cout << "\t" << hl << " \033[1mWelcome to the Armamentarium!\033[0m " << hl << "\n";
		cout << "\t" << hl << "                               " << hl << "\n";
		cout << "\t" << hl << "   \033[1;6mWhat would you like to do?\033[0m  " << hl << "\n";
		cout << "\t" << hl << "                               " << hl << "\n";
		cout << "\t" << hl << "   1  New Game                 " << hl << "\n";
		cout << "\t" << hl << "   2  Load Game                " << hl << "\n";
		cout << "\t" << hl << "   3  Leave Game               " << hl << "\n";
		cout << "\t" << hl << "                               " << hl << "\n";

		// main menu end line
		cout << "\t" << ll;
		for (int i = 0; i < 31; i++)
		{
			cout << vl;
		}
		cout << lr << endl << endl << "\t";

		int choice;
		string name;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\n\tWhat is your name, warrior?\n\t";
			cin >> name;
			cin.ignore();
			playerCharacter = Character(name, "A capable warrior.", 10, 10, 1, 1, 1, 1, 1, 0, 0);
			cout << "\n\tWelcome, " << name << "!\n";
			sleep(1);
			cout << "\tI hope you find your experience here to be";
			sleep(1); cout << "."; sleep(1); cout << "."; sleep(1);
			cout << "."; sleep(1); cout << " entertaining.\n";
			sleep(1);
			cout << "\tHere's 10 coins to gear up with.\n";
			sleep(2);
			playerCharacter.modifyCoins(10);
			sleep(2);
			IdleMenu(playerCharacter);
			break;
		case 2:
			LoadGame(playerCharacter, "save_game.txt");
			playerCharacter.modifyExperience(playerCharacter.getExperience());
			sleep(1);
			IdleMenu(playerCharacter);
			break;
		case 3:
			QuitGame();
			return;
		default:
			cout << "\nInvalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}

void IdleMenu(Character& playerCharacter)
{
	Shop shop(playerCharacter.getInventory());

	while (true)
	{
		cout << "\n\tWelcome back, " << playerCharacter.getName() << endl << endl;
		// idle menu top line
		cout << "\t" << ul;
		for (int i = 0; i < 27; i++)
		{
			cout << vl;
		}
		cout << ur << endl;

		cout << "\t" << hl << "                           " << hl << "\n";
		cout << "\t" << hl << "        \033[1mEntering the\033[0m       " << hl << "\n";
		cout << "\t" << hl << "       \033[1mArmamentarium!\033[0m      " << hl << "\n";
		cout << "\t" << hl << "                           " << hl << "\n";
		cout << "\t" << hl << "      \033[1;6mMake your choice\033[0m     " << hl << "\n";
		cout << "\t" << hl << "                           " << hl << "\n";
		cout << "\t" << hl << "  1  Fight next opponent   " << hl << "\n";
		cout << "\t" << hl << "  2  View stats            " << hl << "\n";
		cout << "\t" << hl << "  3  Equip gear            " << hl << "\n";
		cout << "\t" << hl << "  4  Buy gear              " << hl << "\n";
		cout << "\t" << hl << "  5  Save game             " << hl << "\n";
		cout << "\t" << hl << "  6  Exit the game         " << hl << "\n";
		cout << "\t" << hl << "                           " << hl << "\n";

		// idle menu end line
		cout << "\t" << ll;
		for (int i = 0; i < 27; i++)
		{
			cout << vl;
		}
		cout << lr << endl << endl << "\t";

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			// Implement the fight logic
			break;
		case 2:
			PrintPlayerStats(playerCharacter);
			sleep(1);
			break;
		case 3:
			playerCharacter.displayCharacterInventory();
			// Implement the equip gear logic
			break;
		case 4:
			shop.enter(playerCharacter);
			break;
		case 5:
			SaveGame(playerCharacter, "save_game.txt");
			sleep(1);
			break;
		case 6:
			cout << "\nExiting the game.\n";
			QuitGame();
			return;
		default:
			cout << "\nInvalid choice.\nPlease select a valid option.\n\n";
			break;
		}
	}
}
