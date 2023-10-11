/*
game_play_state.hpp
Subclass of Game State.
This class is the game state that lets the game play.
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