// shop.hpp

#ifndef SHOP_HPP
#define SHOP_HPP

using namespace std;

#include "character.hpp"
#include "inventory.hpp"

class Shop
{
public:
	Shop(Inventory& ShopInventory);

	void enter(Character& playerCharacter);

private:
	Inventory& ShopInventory;
};

#endif // !SHOP_HPP
