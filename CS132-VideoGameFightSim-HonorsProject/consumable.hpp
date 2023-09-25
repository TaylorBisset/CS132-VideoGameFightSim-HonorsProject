/*
item.hpp
Item subclass for all item entities in the game.
This class is the main item class from which all items will inherit.
*/
#ifndef CONSUMABLE_HPP
#define CONSUMABLE_HPP

#include "item.hpp"

class Consumable : public Item
{
public:
	Consumable(const string& name, const string& description,
		const string& type, int value, int requiredLevel, 
		int charges) : 

		Item(name, description, 
			type, value, requiredLevel), 
		charges(charges)
	{
		// Consumable properties
	}

private: 
	int charges; 
};

#endif // !CONSUMABLE_HPP
