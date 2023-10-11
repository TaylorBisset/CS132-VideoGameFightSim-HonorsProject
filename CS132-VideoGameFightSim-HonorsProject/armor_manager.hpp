/*
armor_manager.hpp
The Armor Manager creates instances of all armors in the game.
*/

#include "armor.hpp"
// name, description, type, 
// value, requiredLevel, protection 
Armor ClothArmor("Cloth \"Armor\"", "Simple clothes for a simple person", "Armor",
	15,  1,  5);
Armor LeatherArmor("Leather Armor", "Armor sewn from sturdy cow leather", "Armor",
	25,  4, 20);
Armor IronArmor("Iron Armor", "Standard issue armor for the king's men", "Armor",
	50,  7, 45);
Armor SteelArmor("Steel Armor", "The ultimate protection for the finest warriors", "Armor", 
	90, 10, 65);

Armor Buckler("Buckler", "A small wooden disk strapped to your forearm", "Shield",
	15,  1,  5);
Armor WoodenShield("Wooden Shield", "A round shield fit for the field", "Shield",
	35,  3, 20);
Armor IronShield("Iron Shield", "An iron shield issued by the King's men", "Shield",
	55,  6, 50);
Armor SteelShield("Tower Shield", "A steel wall that stops any enemy onslaught", "Shield",
	75, 10, 85);
