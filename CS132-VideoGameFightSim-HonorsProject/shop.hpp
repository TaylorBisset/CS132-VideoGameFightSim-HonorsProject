// shop.hpp

#ifndef SHOP_HPP
#define SHOP_HPP

using namespace std;

#include "character.hpp"
#include "inventory.hpp"

class Shop
{
public:
	Shop(Inventory& shopInventory);
	void initializeShopInventory();
	void enter(Character& playerCharacter);

private:
	Inventory& shopInventory;
	Armor ClothArmor;
	Armor LeatherArmor;
	Armor IronArmor;
	Weapon Dagger;
	Weapon IronSword;
	Weapon SteelSword;
	Weapon Sling;
	Weapon ShortBow;
	Weapon LongBow;
};

#endif // !SHOP_HPP
