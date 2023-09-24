/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    P1
 Description:   This project is for my AAS in Computer Science Honors coursework. 
                Professor Lonnie Heinke is my mentor through this quarters assignments. 
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
#include "weapon.hpp"

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

Entity
|
|-Character
| |--Player_Character
| |--Non_Player_Character
| |  |---Enemy_Non_Player_Character
| |  |---Friendly_NonPPlayer_Character
|
|-Item
  |--Armor
  |--Weapon
  |--Consumable

GameState
|
|-MainMenuState
|
|-GameplayState
|
|-PauseState
|
|-GameOverState

*/
