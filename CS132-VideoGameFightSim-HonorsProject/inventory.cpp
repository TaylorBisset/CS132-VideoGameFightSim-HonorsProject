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
	cout << "\033[1m=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\033[0m" << endl;
	cout << "Inventory:" << endl;
	for (const Item& item : items)
	{
		cout << "\033[2m-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-\033[0m" << endl;
		item.displayDetails();
	}
	cout << "\033[1m=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\033[0m" << endl << endl;
}
