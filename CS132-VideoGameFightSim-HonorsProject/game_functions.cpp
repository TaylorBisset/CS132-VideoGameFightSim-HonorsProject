/*
game_functions.cpp
This file implements the functions to be used in the game.
*/

#include "game_functions.hpp"
#include "game_manager.hpp"
#include "game_play_state.hpp"
#include "player_character.hpp"

void GameFunctions::ContinueGame()
{

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
        saveFile << "Player Name: " << playerCharacter.getName() << endl;
        saveFile << "Level: "       << playerCharacter.getLevel() << endl;
        saveFile << "Health: "      << playerCharacter.getMaxHealth() << endl;
        saveFile << "Health: "      << playerCharacter.getCurrentHealth() << endl;
        saveFile << "Attack: "      << playerCharacter.getAttack() << endl;
        saveFile << "Defense: "     << playerCharacter.getDefense() << endl;
        saveFile << "Experience: "  << playerCharacter.getExperience() << endl;
        saveFile << "Coins: "       << playerCharacter.getCoins() << endl;

        saveFile.close();
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
