/*
game_functions.cpp
This file implements the functions to be used in the game.
*/

#include <thread>

#include "game_functions.hpp"
#include "game_manager.hpp"
#include "game_play_state.hpp"
#include "player_character.hpp"

void GameFunctions::LoadGame(PlayerCharacter& playerCharacter)
{
    const string saveFileName = "save_game.txt";

    ifstream loadFile(saveFileName);
    if (loadFile.is_open())
    {
        string label;
        while (loadFile >> label)
        {
            if (label == "Player")
            {
                string name;
                loadFile >> name; // Read the player name
                playerCharacter.setName(name);
            }
            else if (label == "Level:")
            {
                int level;
                loadFile >> level; // Read the player level
                playerCharacter.setLevel(level);
            }
            else if (label == "Max")
            {
                int maxHealth;
                loadFile >> maxHealth; // Read the max health
                playerCharacter.setMaxHealth(maxHealth);
            }
            else if (label == "Current")
            {
                int currentHealth;
                loadFile >> currentHealth; // Read the current health
                playerCharacter.setCurrentHealth(currentHealth);
            }
            else if (label == "Attack:")
            {
                int attack;
                loadFile >> attack; // Read the attack value
                playerCharacter.setAttack(attack);
            }
            else if (label == "Defense:")
            {
                int defense;
                loadFile >> defense; // Read the defense value
                playerCharacter.setDefense(defense);
            }
            else if (label == "Experience:")
            {
                int experience;
                loadFile >> experience; // Read the experience value
                playerCharacter.setExperience(experience);
            }
            else if (label == "Coins:")
            {
                int coins;
                loadFile >> coins; // Read the coins value
                playerCharacter.setCoins(coins);
            }
        }

        loadFile.close();
        cout << "Game loaded successfully\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void GameFunctions::PauseGame()
{

}

void GameFunctions::SaveGame(const PlayerCharacter& playerCharacter)
{
    const string saveFileName = "save_game.txt";
    
    ofstream saveFile(saveFileName);
    if (saveFile.is_open())
    {
        saveFile << "Player Name: "     << playerCharacter.getName() << endl;
        saveFile << "Level: "           << playerCharacter.getLevel() << endl;
        saveFile << "Max Health: "      << playerCharacter.getMaxHealth() << endl;
        saveFile << "Current Health: "  << playerCharacter.getCurrentHealth() << endl;
        saveFile << "Attack: "          << playerCharacter.getAttack() << endl;
        saveFile << "Defense: "         << playerCharacter.getDefense() << endl;
        saveFile << "Experience: "      << playerCharacter.getExperience() << endl;
        saveFile << "Coins: "           << playerCharacter.getCoins() << endl;

        saveFile.close();
        cout << "Game saved successfully\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void GameFunctions::QuitGame()
{
    cout << "Thank you for playing!\nCome back soon!\n";
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
