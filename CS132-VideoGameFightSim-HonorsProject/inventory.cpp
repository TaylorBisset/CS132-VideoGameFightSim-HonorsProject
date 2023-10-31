// inventory.cpp
#include "inventory.hpp"

Inventory::Inventory()
{
	// Initialize the inventory, if needed
}

void Inventory::addItem(const Item& item)
{
	items.push_back(item);
}

void Inventory::displayInventory()
{
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "Inventory:" << endl;
	for (const Item& item : items)
	{
		item.displayDetails();
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	}
}
