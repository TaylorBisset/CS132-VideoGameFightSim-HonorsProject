/*
game_functions.hpp
This file defines the functions to be used in the game.
*/
#ifndef GAME_FUNCTIONS_HPP
#define GAME_FUNCTIONS_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class GameManager;
class PlayerCharacter;

class GameFunctions
{
public:
    void LoadGame(PlayerCharacter& playerCharacter);
    void PauseGame();
    void SaveGame(const PlayerCharacter& playerCharacter);
    void QuitGame();
};

#endif // !GAME_FUNCTIONS_HPP
