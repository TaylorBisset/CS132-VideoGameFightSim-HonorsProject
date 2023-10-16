/*
game_manager.cpp
This file implements the Game States and the Game Loop
*/
#include "game_manager.hpp"

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
