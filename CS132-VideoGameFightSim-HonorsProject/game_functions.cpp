/*
game_functions.cpp
This file implements the functions to be used in the game.
*/

#include "game_functions.hpp"
#include "game_manager.hpp"
#include "game_play_state.hpp"
#include "player_character.hpp"

void GameFunctions::StartNewGame(GameManager& gameManager)
{
    GameState* newGameState = new GamePlayState();  // Create new gameplay state

    string playerName = "John";
    cout << "What is your name? ";
    cin >> playerName;

    PlayerCharacter playerCharacter(
        // name, description, level, health, attack, defense, experience, coins
        playerName, "A tough warrior in the making", 1, 10, 1, 1, 0, 20);

    gameManager.ChangeState(newGameState);          // Change game state to the new gameplay state
}

void GameFunctions::ContinueGame()
{

}

void GameFunctions::PauseGame()
{

}

void GameFunctions::SaveGame()
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
