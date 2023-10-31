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
    cout << "Inventory:" << endl;
    for (const Item& item : items)
    {
        cout << item.getName() << endl;
        cout << "\t" << item.getDescription() << endl;
        cout << "\t\tValue: " << item.getValue() << " coins" << endl;
        if (item.getType() == "Weapon")
        {
            cout << "\t\tDamage: " << Weapon::getDamage << endl;
        }
        if (item.getType() == "Armor")
        {
            cout << "\t\tProtection: " << Armor::getProtection << endl;
        }
        cout << endl;
    }
}
