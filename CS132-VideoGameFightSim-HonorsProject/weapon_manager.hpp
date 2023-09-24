/*
weapon_manager.hpp
The Weapon Manager creates instances of all weapons in the game.
*/

#include "weapon.hpp"
				// name, description, type,      value, requiredLevel, damage 
Weapon IronLKnife("Iron Knife", "A small knife for cutting", "Melee",	  15,  1,  5);
Weapon IronDagger("Iron Dagger", "A short blade for quick work", "Melee", 25,  2, 10);
Weapon IronSword("Iron Sword", "A basic sword made of iron", "Melee",	  50,  5, 25);
Weapon IronLongsword("Iron Longsword", "A long-bladed sword", "Melee",	  75,  8, 40);
Weapon IronClaymore("Iron Claymore", "A massive iron sword", "Melee",	 100, 10, 55);

Weapon ShortBow("Short Bow", "A fitting bow for a small hunt", "Ranged",		15, 1, 5);
Weapon CrossBow("Crossbow", "Great for protecting a Keep", "Ranged",			25, 2, 10);
Weapon LongBow("Longbow", "A Longbow suitable for decimating armies", "Ranged", 50, 5, 25);
