/*
game_functions.hpp
This file defines the functions to be used in the game.
*/
#ifndef GAME_FUNCTIONS_HPP
#define GAME_FUNCTIONS_HPP

#include <iostream>
#include <string>

using namespace std;

class GameFunctions
{
public:
    void StartNewGame();
    void ContinueGame();
    void PauseGame();
    void SaveGame();
    void QuitGame();
};

#endif // !GAME_FUNCTIONS_HPP
