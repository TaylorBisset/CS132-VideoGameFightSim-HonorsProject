/*
pause_menu_state.hpp
Subclass of Game State.
This class is the game state for the pause menu.
*/
#ifndef PAUSE_MENU_STATE_HPP
#define PAUSE_MENU_STATE_HPP

#include "game_state.hpp"

class PauseMenuState : public GameState
{
public:
    void Initialize() override;  // Initialize game state
    void HandleInput() override; // Handle player input
};

#endif // !PAUSE_MENU_STATE_HPP
