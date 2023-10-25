/*
game_manager.cpp
This file implements the Game States and the Game Loop
*/

#include <thread>

#include "game_manager.hpp"
#include "game_state.hpp"
#include "main_menu_state.hpp"
#include "pause_menu_state.hpp"
#include "game_play_state.hpp"
#include "game_functions.hpp"

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

        GamePlayState* gameplayState = dynamic_cast<GamePlayState*>(currentState);
        if (gameplayState != nullptr)   // Check for Gameplay State
        {
            gameplayState->Update();    // If so, call Update()
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

void GameManager::StartNewGame()
{
    cout << "\nWelcome to the Coliseum\n";
    cout << "What is your name, Gladiator?\n";
    string playerName;
    cin >> playerName;
    cout << "\nExcellent! Alright, " << playerName << ",\n";
    this_thread::sleep_for(std::chrono::seconds(2));
    cout << "here's 10 coins to gear up with.\n";
    this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Head down the halls to the Armamentarium.\n";
    this_thread::sleep_for(std::chrono::seconds(2));

    /*
        name, description, 
        level, maxHealth, currentHealth, 
        attack, defense, 
        experience, coins
    */
    PlayerCharacter player(
        playerName, "A tough looking warrior", 
        1, 100, 100, 
        5, 5, 
        0, 10);

    playerCharacter = player;

    ChangeState(new GamePlayState(this, playerCharacter));
}
