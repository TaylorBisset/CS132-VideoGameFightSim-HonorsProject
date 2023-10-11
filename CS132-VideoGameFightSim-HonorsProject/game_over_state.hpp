/*
game_over_state.hpp
Subclass of Game State.
This class is the game state that ends the game play.
*/
#ifndef GAME_OVER_STATE_HPP
#define GAME_OVER_STATE_HPP

#include "game_state.hpp"

class GameOverState : public GameState
{
public:
    void Initialize() override;  // Initialize game state
    void HandleInput() override; // Handle player input
    void Update() override;      // Implement game mechanics
};

#endif // !GAME_OVER_STATE_HPP
