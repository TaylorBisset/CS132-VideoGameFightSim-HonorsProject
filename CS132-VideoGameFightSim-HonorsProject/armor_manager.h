/*
armor_manager.hpp
The Armor Manager creates instances of all armors in the game.
*/

#include "armor.hpp"
// name, description, type, 
// value, requiredLevel, protection 
Armor ClothArmor("Cloth \"Armor\"", "Simple clothes for a simple person", "Armor",
	10,  1,  5);
Armor LeatherArmor("Leather Armor", "Armor sewn from sturdy cow leather", "Armor",
	20,  3, 10);
Armor IronArmor("Iron Armor", "Standard issue armor for the king's men", "Armor",
	30,  7, 15);
Armor SteelArmor("Steel Armor", "The ultimate protection for the finest warriors", "Armor", 
	40, 10, 20);

Armor Buckler("Buckler", "A small wooden disk strapped to your forearm", "Shield",
	10,  2,  5);
Armor WoodenShield("Wooden Shield", "A round shield fit for the field", "Shield",
	20,  4, 10);
Armor IronShield("Iron Shield", "An iron shield issued by the King's men", "Shield",
	30,  8, 15);
Armor SteelShield("Tower Shield", "A steel wall that stops any enemy onslaught", "Shield",
	40, 10, 20);
