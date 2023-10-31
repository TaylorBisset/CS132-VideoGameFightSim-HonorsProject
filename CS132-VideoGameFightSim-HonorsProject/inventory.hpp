// inventory.hpp

#ifndef INVENTORY_HPP
#define INVENTORY_HPP

using namespace std;

#include <iostream>
#include <vector>

#include "item.hpp"  // Include the item class
#include "weapon.hpp" // Include the weapon class
#include "armor.hpp"  // Include the armor class

class Inventory
{
public:
	Inventory();

	void addItem(const Item& item);
	void displayInventory();

private:
	vector<Item> items;
};

#endif // !INVENTORY_HPP
