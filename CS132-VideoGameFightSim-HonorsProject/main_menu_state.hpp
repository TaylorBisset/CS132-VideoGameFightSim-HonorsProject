/*
main_menu_state.hpp
Subclass of Game State.
This class is the game state for the main menu.
*/
#ifndef MAIN_MENU_STATE_HPP
#define MAIN_MENU_STATE_HPP

#include "game_state.hpp"
#include "game_manager.hpp"
#include "game_functions.hpp"
#include "game_play_state.hpp"

class MainMenuState : public GameState
{
public:
    void Initialize() override;  // Initialize game state
    void HandleInput() override; // Handle player input
};

#endif // !MAIN_MENU_STATE_HPP
