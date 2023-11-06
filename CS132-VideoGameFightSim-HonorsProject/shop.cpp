// shop.cpp

#include "shop.hpp"

Shop::Shop(Inventory& shopInventory) 
    : 
    shopInventory(shopInventory) {}

void Shop::initializeShopInventory()
{
    shopInventory.addItem(ClothArmor);
    shopInventory.addItem(LeatherArmor);
    shopInventory.addItem(IronArmor);
    shopInventory.addItem(Dagger);
    shopInventory.addItem(IronSword);
    shopInventory.addItem(SteelSword);
    shopInventory.addItem(Sling);
    shopInventory.addItem(ShortBow);
    shopInventory.addItem(LongBow);
}

void Shop::enter(Character& player)
{
    while (true)
    {
        cout << "Welcome to the shop!\n";
        cout << "\nYour available coins: " << player.getCoins() << endl;
        cout << "\033[5mWhat would you like to do?\033[0m\n\n";
        cout << "1  Buy Armor\n";
        cout << "2  Buy Weapons\n";
        cout << "3  Exit the Shop\n\n";


        int choice;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            // display armor
            // switch to choose what to buy
            // return to idle menu
            break;
        case 2:
            // display weapons
            // switch to choose what to buy
            // return to idle menu
            break;
        case 3:
            // return to idle menu
            return;
        default:
            // handle invalid input
            break;
        }
    }
}
