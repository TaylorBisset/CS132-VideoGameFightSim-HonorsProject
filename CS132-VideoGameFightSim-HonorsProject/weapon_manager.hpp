/*
weapon_manager.hpp
The Weapon Manager creates instances of all weapons in the game.
*/

#include "weapon.hpp"
// name, description, type,
// value, requiredLevel, damage 
Weapon IronLKnife("Iron Knife", "A small knife for cutting", "Melee",
	10,  1,  10);
Weapon IronDagger("Iron Dagger", "A short blade for quick work", "Melee",
	20,  3, 20);
Weapon IronSword("Iron Sword", "A basic sword made of iron", "Melee",
	30,  5, 30);
Weapon IronLongsword("Iron Longsword", "A long-bladed sword", "Melee",
	40,  7, 40);
Weapon IronClaymore("Iron Claymore", "A massive iron sword", "Melee",
	50, 10, 50);

Weapon ShortBow("Short Bow", "A fitting bow for a small hunt", "Ranged",
	15, 1, 15);
Weapon CrossBow("Crossbow", "Great for protecting a Keep", "Ranged",
	30, 5, 30);
Weapon LongBow("Longbow", "A Longbow suitable for decimating armies", "Ranged",
	45, 8, 45);
