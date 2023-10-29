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

    string playerName;

    ifstream loadFile(saveFileName);
    if (loadFile.is_open()) 
    {
        string playerName;
        int level, maxHealth, currentHealth, attack, defense, experience, coins;

        loadFile >> playerName >> level >> maxHealth >> currentHealth >> attack >> defense >> experience >> coins;

        playerCharacter.setName(playerName);
        playerCharacter.setLevel(level);
        playerCharacter.setMaxHealth(maxHealth);
        playerCharacter.setCurrentHealth(currentHealth);
        playerCharacter.setAttack(attack);
        playerCharacter.setDefense(defense);
        playerCharacter.setExperience(experience);
        playerCharacter.setCoins(coins);

        loadFile.close();

        cout << "Game loaded successfully.\nWelcome Back!\n\n";
    }
    else 
    {
        cout << "No saved game found.\n";
    }
    this_thread::sleep_for(chrono::seconds(1));
}

void GameFunctions::SaveGame(const PlayerCharacter& playerCharacter)
{
    const string saveFileName = "save_game.txt";
    
    ofstream saveFile(saveFileName);
    if (saveFile.is_open())
    {
        saveFile
            << playerCharacter.getName() << ' '
            << playerCharacter.getLevel() << ' '
            << playerCharacter.getMaxHealth() << ' '
            << playerCharacter.getAttack() << ' '
            << playerCharacter.getDefense() << ' '
            << playerCharacter.getExperience() << ' '
            << playerCharacter.getCoins() << '\n';

        saveFile.close();
        cout << "Game saved successfully\n";
        
    }
    this_thread::sleep_for(chrono::seconds(1));
}

void GameFunctions::PauseGame()
{

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
