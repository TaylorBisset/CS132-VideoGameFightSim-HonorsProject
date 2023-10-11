/*
game_state.hpp
Base class for all states in the game.
This class is the base game state from which all game states will inherit.
*/
#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

using namespace std;

class GameState
{
public:
    virtual void Initialize() = 0;  // Initialize game state
    virtual void HandleInput() = 0; // Handle player input
    virtual void Update() = 0;      // Impliment game mechanics
};

#endif // !GAME_STATE_HPP
