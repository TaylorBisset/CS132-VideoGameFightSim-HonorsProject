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
		cout << item.getName() << endl;
		cout << "\t" << item.getDescription() << endl;
		cout << "\t\tValue: " << item.getValue() << " coins" << endl;

		if (item.getType() == "Weapon")
		{
			const Weapon* weapon = dynamic_cast<const Weapon*>(&item);
			if (weapon)
			{
				cout << "\t\tDamage: " << weapon->getDamage() << endl;
			}
		}

		if (item.getType() == "Armor")
		{
			const Armor* armor = dynamic_cast<const Armor*>(&item);
			if (armor)
			{
				cout << "\t\tProtection: " << armor->getProtection() << endl;
			}
		}
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	}
}
