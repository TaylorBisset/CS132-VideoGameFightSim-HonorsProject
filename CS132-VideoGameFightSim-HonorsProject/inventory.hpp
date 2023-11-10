// inventory.hpp

#ifndef INVENTORY_HPP
#define INVENTORY_HPP

using namespace std;

#include <iostream>
#include <vector>

#include "item.hpp"
#include "weapon.hpp"
#include "armor.hpp"

class Inventory
{
public:
	Inventory();

	void addItem(const Item& item);
	void displayInventory();
	bool isEmpty() const
	{
		return items.empty();
	}

private:
	vector<Item> items;
};

#endif // !INVENTORY_HPP
