/*
armor.hpp
Armor subclass for all armor items in the game.
This class is the main armor class from which all protection items will inherit.
*/
#ifndef ARMOR_HPP
#define ARMOR_HPP

#include "item.hpp"

class Armor : public Item
{
public:
	Armor()
		:
		Item("DefaultArmor", "DefaultDescription", "Armor", 0),
		protection(0) {}

	Armor(const string& name, const string& description,
		const string& type, int value,
		int protection)
		:
		Item(name, description, 
			type, value), 
		protection(protection)
	{
		// Armor properties
	}

	// Protection
	void setProtection(int newProtection)
	{
		protection = newProtection;
	}
	int getProtection()	const 
	{
		return protection;
	}

	void displayDetails() const override
	{
		Item::displayDetails();
		cout << "\t\t\033[32;3mProtection: " << getProtection() << "\033[0m" << endl;
	}

private:
	int protection;
};

#endif // !ARMOR_HPP
