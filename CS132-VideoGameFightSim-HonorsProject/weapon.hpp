/*
weapon.hpp
Weapon subclass for all weapon items in the game.
This class is the main weapon class from which all protection items will inherit.
*/
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "item.hpp"

class Weapon : public Item
{
public:
	Weapon()
		: 
		Item("DefaultWeapon", "DefaultDescription", "Weapon", 0),
		damage(0) {}

	Weapon(const string& name, const string& description,
		const string& type, int value,
		int damage)
		:
		Item(name, description,
			type, value),
		damage(damage)
	{
		// Weapon properties
	}

	// Damage
	void setDamage(int newDamage)
	{
		damage = newDamage;
	}
	int getDamage()	const
	{
		return damage;
	}

	void displayDetails() const override
	{
		Item::displayDetails();
		cout << "\t\t\033[31;3mDamage: " << getDamage() << "\033[0m" << endl;
	}

private:
	int damage;
};

#endif // !WEAPON_HPP
