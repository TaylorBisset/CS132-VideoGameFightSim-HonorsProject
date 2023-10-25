/*
main_menu_state.cpp
This file implements the Main Menu
*/

#include "main_menu_state.hpp"

GameFunctions gameFunctions;
GameManager gameManager;

void MainMenuState::Initialize()
{
	cout << "\nMain Menu\n\n";
    cout << "1. New Game\n";
    cout << "2. Continue\n";
    cout << "3. Quit\n\n";

    HandleInput();
}

void MainMenuState::HandleInput()
{
    int choice;
    cin >> choice;

    PlayerCharacter loadedPlayer;

    switch (choice) 
    {
    case 1:
        cout << "\nCreating a New Game will override any previously saved game.\n";
        cout << "Are you ready to start a New Game?\n";
        cout << "1. Yes, start new game\n";
        cout << "2. No, return to main menu\n\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            gameManager.StartNewGame();
            break;
        default:
            Initialize();
            break;
        }
        break;
    case 2:
        cout << "\nLoading the saved game...\n";
        loadedPlayer.setName("player");
        loadedPlayer.setLevel(1);
        loadedPlayer.setMaxHealth(1);
        loadedPlayer.setCurrentHealth(1);
        loadedPlayer.setAttack(1);
        loadedPlayer.setDefense(1);
        loadedPlayer.setExperience(1);
        loadedPlayer.setCoins(1);
        gameFunctions.LoadGame(loadedPlayer);
        break;
    case 3:
        gameFunctions.QuitGame();
        exit(0);
    default:
        // Handle invalid input
        cout << "Invalid choice. Please select a valid option.\n\n";
        break;
    }
}
