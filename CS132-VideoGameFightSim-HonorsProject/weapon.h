/*
weapon.hpp
Weapon subclass for all weapon items in the game.
This class is the main weapon class from which all damaging items will inherit.
*/
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "item.hpp"

class Weapon : public Item
{
public:
	Weapon(const string& name, const string& description,
		const string& type, int value, int requiredLevel,
		int damage) :

		Item(name, description,
			type, value, requiredLevel),
		damage(damage)
	{
		// Weapon properties
	}

	int getDamage()
		const { return damage; }

private:
	int damage;
};

#endif // !WEAPON_HPP
