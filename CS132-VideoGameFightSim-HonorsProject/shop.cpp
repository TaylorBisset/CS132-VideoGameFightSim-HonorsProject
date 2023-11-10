// shop.cpp

#include "shop.hpp"

Shop::Shop(Inventory& shopInventory) 
    : 
    shopInventory(shopInventory) {}

void Shop::initializeShopInventory()
{
    Armor ClothArmor("Cloth Armor", "Cloth rags.", "Armor", 10, 5);
    Armor LeatherArmor("Leather Armor", "Protective leather.", "Armor", 20, 10);
    Armor IronArmor("Iron Armor", "Iron Plate Armor.", "Armor", 40, 20);
    shopInventory.addItem(ClothArmor);
    shopInventory.addItem(LeatherArmor);
    shopInventory.addItem(IronArmor);

    Weapon Dagger("Dagger", "Short Iron Blade.", "Weapon", 10, 5);
    Weapon IronSword("Iron Sword", "Sharp Iron Sword.", "Weapon", 20, 10);
    Weapon SteelSword("Steel Sword", "Long Steel Sword.", "Weapon", 40, 20);
    shopInventory.addItem(Dagger);
    shopInventory.addItem(IronSword);
    shopInventory.addItem(SteelSword);

    Weapon Sling("Sling", "Leather Sling.", "Weapon", 10, 5);
    Weapon ShortBow("Short Bow", "Compact Short Bow.", "Weapon", 20, 10);
    Weapon LongBow("Long Bow", "Large Long Bow.", "Weapon", 40, 20);
    shopInventory.addItem(Sling);
    shopInventory.addItem(ShortBow);
    shopInventory.addItem(LongBow);
}

void Shop::enter(Character& player)
{
    while (true)
    {
        initializeShopInventory();
        shopInventory.displayInventory();
        player.getInventory();
        cout << "\tWelcome to the shop!\n\n";
        cout << "\tYour available coins: " << player.getCoins() << endl;
        cout << "\t\033[5mWhat would you like to do?\033[0m\n\n";
        cout << "\t1  Buy Armor\n";
        cout << "\t2  Buy Melee Weapon\n";
        cout << "\t3  Buy Ranged Weapon\n";
        cout << "\t3  Exit the Shop\n\n";

        int choice;
        int buyChoice;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "1  Cloth Armor\n";
            cout << "2  Leather Armor\n";
            cout << "3  Iron Armor\n";
            cout << "4  Go back\n";
            
            cin >> buyChoice;

            switch (buyChoice)
            {
            case 1:
                player.getInventory().addItem(ClothArmor);
                return;
            case 2: 
                player.getInventory().addItem(LeatherArmor);
                return;
            case 3:
                player.getInventory().addItem(IronArmor);
                return;
            case 4:
                return;
            default:
                break;
            }
            break;
        case 2:
            cout << "1  Dagger\n";
            cout << "2  Iron Sword\n";
            cout << "3  Steel Sword\n";
            // switch to choose what to buy
            // return to idle menu
            break;
        case 3:
            cout << "1  Sling\n";
            cout << "2  Short Bow\n";
            cout << "3  Long Bow\n";
            // switch to choose what to buy
            // return to idle menu
            break;
        case 4:
            // return to idle menu
            return;
        default:
            // handle invalid input
            break;
        }
    }
}
