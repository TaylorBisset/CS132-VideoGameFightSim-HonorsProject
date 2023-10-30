// game_functions.cpp

#include <iostream>
#include <fstream>
#include <thread>

#include "game_functions.hpp"

void sleep(int seconds)
{
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
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

