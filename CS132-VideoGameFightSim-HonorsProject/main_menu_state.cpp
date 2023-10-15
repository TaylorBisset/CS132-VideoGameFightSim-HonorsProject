/*
main_menu_state.cpp
This file implements the Main Menu
*/

#include "main_menu_state.hpp"

void MainMenuState::Initialize()
{
	cout << "Main Menu\n\n";
    cout << "1. New Game\n";
    cout << "2. Continue\n";
    cout << "3. Quit\n\n";
}

void MainMenuState::HandleInput()
{
    int choice;
    cin >> choice;

    switch (choice) 
    {
    case 1:
        // Start a new game
        break;
    case 2:
        // Continue a saved game
        break;
    case 3:
        // Quit the game
        exit(0);
    default:
        // Handle invalid input
        cout << "Invalid choice. Please select a valid option.\n\n";
        break;
    }
}
