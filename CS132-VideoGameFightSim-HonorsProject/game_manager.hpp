/*
game_manager.hpp
This class is the Game Manager, which dictates game state changes.
*/
#ifndef GAME_MANAGER_HPP
#define GAME_MANAGER_HPP

#include "game_state.hpp"

class GameManager
{
public:
    GameManager();
    ~GameManager();

    void Initialize();

    void RunGameLoop(); // run the game loop

    void ChangeState(GameState* newState);

private:
    GameState* currentState;  // Pointer to the current game state
};

#endif // !GAME_MANAGER_HPP
