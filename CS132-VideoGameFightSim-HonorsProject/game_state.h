/*
game_state.hpp
Base class for all states in the game.
This class is the base game state from which all game states will inherit.
*/
#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

#include <iostream>

#include "game_functions.hpp"
#include "game_manager.hpp"

using namespace std;

class GameManager;

class GameState
{
public:
    virtual void Initialize() = 0;  // Initialize game state
    virtual void HandleInput() = 0; // Handle player input
};

#endif // !GAME_STATE_HPP
