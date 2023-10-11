/*
game_play_state.hpp
Base class for all states in the game.
This class is the base game state from which all game states will inherit.
*/
#ifndef GAME_PLAY_STATE_HPP
#define GAME_PLAY_STATE_HPP

#include "game_state.hpp"

class GamePlayState : public GameState
{
public:
    void Initialize() override;  // Initialize game state
    void HandleInput() override; // Handle player input
    void Update() override;      // Implement game mechanics
};

#endif // !GAME_PLAY_STATE_HPP
