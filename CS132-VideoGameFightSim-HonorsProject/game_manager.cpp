/*
game_manager.cpp
This file implements the Game States and the Game Loop
*/
#include "game_manager.hpp"
#include "main_menu_state.hpp"

GameManager::GameManager()
{
    currentState = nullptr;     // Initialize the current state pointer
}
GameManager::~GameManager()
{
    if (currentState != nullptr)
    {
        delete currentState;    // Release any allocated resources
    }
}

void GameManager::Initialize()
{
    currentState = new MainMenuState(); // Initialize the game manager
    currentState->Initialize();         // set the initial state
}
