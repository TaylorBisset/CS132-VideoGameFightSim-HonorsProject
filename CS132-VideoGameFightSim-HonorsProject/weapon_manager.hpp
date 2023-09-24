/*
weapon_manager.hpp
The Weapon Manager creates instances of all weapons in the game.
*/

#include "weapon.hpp"
				// name, description, type,      value, requiredLevel, damage 
Weapon IronLKnife("Iron Knife", "A small knife for cutting", "Weapon",		15,  1,  5);
Weapon IronDagger("Iron Dagger", "A short blade for quick work", "Weapon",	25,  2, 10);
Weapon IronSword("Iron Sword", "A basic sword made of iron", "Weapon",		50,  5, 25);
Weapon IronLongsword("Iron Longsword", "A long-bladed sword", "Weapon",		75,  8, 40);
Weapon IronClaymore("Iron Claymore", "A massive iron sword", "Weapon",	   100, 10, 55);
