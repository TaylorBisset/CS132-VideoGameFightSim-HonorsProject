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

	void enter(Character& playerCharacter);

private:
	Inventory& shopInventory;
};

#endif // !SHOP_HPP
