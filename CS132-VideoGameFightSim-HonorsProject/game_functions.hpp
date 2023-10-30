// game_functions.hpp

#ifndef GAME_FUNCTIONS_HPP
#define GAME_FUNCTIONS_HPP

using namespace std;

#include "character.hpp"

void SaveGame(const Character& playerCharacter, const string& filename);
void LoadGame(Character& playerCharacter, const string& filename);
void PrintPlayerStats(const Character& playerCharacter);
void GameMenu();

#endif // GAME_FUNCTIONS_HPP
