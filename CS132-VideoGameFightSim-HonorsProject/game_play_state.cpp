/*
game_play_state.cpp
This file implements the Gameplay mechanics
*/

#include "game_play_state.hpp"
#include "game_manager.hpp"
#include "main_menu_state.hpp"

void GamePlayState::Initialize()
{
    while (true)
    {
        IdleMenu();
    }
}

void GamePlayState::HandleInput()
{
    // Handle player input
}

void GamePlayState::Update()
{
    // Implement game mechanics
}

void GamePlayState::IdleMenu()
{
    while (true)
    {
        cout << "\n\tWelcome to Armamentarium\n\n";

        cout << "Make your choice\n\n";

        cout << "1. Fight your next opponent\n";
        cout << "2. Check gear and stats\n";
        cout << "3. Buy gear\n";
        cout << "4. Save the game\n";
        cout << "5. Exit to Main Menu\n";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Implement the fight logic
            break;
        case 2:
            // Implement the upgrade logic
            break;
        case 3:
            // Implement the buy gear logic
            break;
        case 4:
            // Implement the save game logic
            // You can save the game state, player progress, and other relevant data here.
            break;
        case 5:
            // Return to the Main Menu
            gameManager->ChangeState(new MainMenuState());
            return;
        default:
            cout << "Invalid choice. Please select a valid option.\n\n";
            break;
        }
    }
}