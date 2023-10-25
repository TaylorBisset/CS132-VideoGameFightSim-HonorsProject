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
        string playerName;
        int playerLevel;
        int playerMaxHealth;
        int playerCurrentHealth;
        int playerAttack;
        int playerDefense;
        int playerExperience;
        int playerCoins;

        loadFile >> playerName;
        loadFile >> playerLevel;
        loadFile >> playerMaxHealth;
        loadFile >> playerCurrentHealth;
        loadFile >> playerAttack;
        loadFile >> playerDefense;
        loadFile >> playerExperience;
        loadFile >> playerCoins;

        playerCharacter.setName(playerName);
        playerCharacter.setLevel(playerLevel);
        playerCharacter.setMaxHealth(playerMaxHealth);
        playerCharacter.setCurrentHealth(playerCurrentHealth);
        playerCharacter.setAttack(playerAttack);
        playerCharacter.setDefense(playerDefense);
        playerCharacter.setExperience(playerExperience);
        playerCharacter.setCoins(playerCoins);

        loadFile.close();
        cout << "Game loaded successfully\n";
        this_thread::sleep_for(std::chrono::seconds(2));
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
        this_thread::sleep_for(std::chrono::seconds(2));
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
