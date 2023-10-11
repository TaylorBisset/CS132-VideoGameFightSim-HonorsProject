/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Honors Project
 Description:   This project is for my AAS in Computer Science Honors coursework. 
                Professor Lonnie Heinke is my mentor through this quarter's assignments. 

                The game will be a text-based console-window fighting simulator game.

Repo:           https://github.com/TaylorBisset/CS132-VideoGameFightSim-HonorsProject
*/

/*
main.cpp
*/
#include <iostream>

#include "entity.hpp"

#include "character.hpp"
#include "player_character.hpp"
#include "non_player_character.hpp"
#include "enemy_non_player_character.hpp"

#include "item.hpp"
#include "armor.hpp"
#include "armor_manager.hpp"
#include "weapon.hpp"
#include "weapon_manager.hpp"
#include "consumable.hpp"
#include "consumable_manager.hpp"

#include "game_state.hpp"

#include "game_play_state.hpp"
#include "game_over_state.hpp"
#include "main_menu_state.hpp"
#include "pause_menu_state.hpp"

int main()
{
    // OS independent program termination sequence. 
#ifdef _WIN32
    cout << endl;
    system("pause");
#else
    cout << endl;
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}

/*
Class hierarchy: 

- - - - - - - - - - - - - - - - - - - - 

Entity
|
|-Character
| |
| |--Player_Character
| |
| |--Non_Player_Character
|    |
|    |---Enemy_Non_Player_Character
|    |
|    |---Friendly_Non_Player_Character
|
|-Item
  |
  |--Armor
  |  |
  |  |---Armor_Manager
  |
  |--Weapon
  |  |
  |  |---Weapon_Manager
  |
  |--Consumable
     |
     |---Consumable_Manager

- - - - - - - - - - - - - - - - - - - - 

GameState
|
|-MainMenuState
|
|-PauseState
|
|-GamePlayState
|
|-GameOverState

- - - - - - - - - - - - - - - - - - - - 

*/
