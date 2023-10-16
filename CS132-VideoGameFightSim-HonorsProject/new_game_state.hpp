/*
new_game_state.hpp
Subclass of Game State.
This class is the game state that creates a new game to play.
*/
#ifndef NEW_GAME_STATE_HPP
#define NEW_GAME_STATE_HPP

#include "game_state.hpp"

class NewGameState : public GameState
{
public:
    void Initialize() override;
    void HandleInput() override;
};

#endif // !NEW_GAME_STATE_HPP
