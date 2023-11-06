// game_functions.hpp

#ifndef GAME_FUNCTIONS_HPP
#define GAME_FUNCTIONS_HPP

#include "character.hpp"

using namespace std;

#include "character.hpp"
#include "shop.hpp"

void sleep(int seconds);
void QuitGame();
void SaveGame(const Character& playerCharacter, const string& filename);
void LoadGame(Character& playerCharacter, const string& filename);
void PrintPlayerStats(const Character& playerCharacter);
void GameMenu();
void IdleMenu(Character& playerCharacter);

#endif // GAME_FUNCTIONS_HPP
