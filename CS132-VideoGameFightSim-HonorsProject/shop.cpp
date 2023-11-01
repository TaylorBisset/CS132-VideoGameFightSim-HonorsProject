// shop.cpp

#include "shop.hpp"

Shop::Shop(Inventory& shopInventory) : shopInventory(shopInventory) {}

void Shop::enter(Character& player)
{
    while (true)
    {
        cout << "Welcome to the shop!\nHere are the available items:\n";
        shopInventory.displayInventory();

        cout << "\nYour available coins: " << player.getCoins() << endl;
        cout << "What would you like to do?\n\n";
        cout << "1  Buy Armor\n";
        cout << "2  Buy Weapon\n";
        cout << "3  Exit the Shop\n\n";


        int choice;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    }
}
