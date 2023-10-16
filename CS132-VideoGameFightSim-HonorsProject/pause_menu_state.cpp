/*
pause_menu_state.cpp
This file implements the Pause Menu
*/

#include "pause_menu_state.hpp"

void PauseMenuState::Initialize()
{
    cout << "Pause Menu\n\n";
    cout << "1. Resume Game\n";
    cout << "2. Save Game\n";
    cout << "3. Quit to Main Menu\n\n";
}

void PauseMenuState::HandleInput()
{
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        // Resume the game
        // Update game state to resume play
        break;
    case 2:
        // Save the game
        // Implement game save functionality
        break;
    case 3:
        // Quit to the main menu
        // Update game state to transition to the main menu
        break;
    default:
        // Handle invalid input
        cout << "Invalid choice. Please select a valid option.\n\n";
        break;
    }
}

void Update() {}
