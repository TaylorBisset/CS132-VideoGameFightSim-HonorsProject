/*
game_manager.cpp
This file implements the Game States and the Game Loop
*/
#include "game_manager.hpp"
#include "game_state.hpp"
#include "main_menu_state.hpp"
#include "pause_menu_state.hpp"
#include "game_play_state.hpp"

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
    currentState->Initialize();         // Set the initial state
}

void GameManager::RunGameLoop()
{
    while (true)                        // Runs through the game loop
    {
        currentState->HandleInput();    // Handles user input inside the current state

        if (currentState == new GamePlayState())                 // Check for Gameplay State
        {
            static_cast<GamePlayState*>(currentState)->Update(); // If so, call Update()
        }
    }
}

void GameManager::ChangeState(GameState* newState)
{
    if (currentState != nullptr)
    {
        delete currentState;    // Releases the current state's allocated resources
    }

    currentState = newState;    // Set the current state to the new state
    currentState->Initialize(); // Initialize the new game state
}
