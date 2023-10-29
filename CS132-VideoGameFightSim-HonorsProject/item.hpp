/*
item.hpp
Item subclass for all item entities in the game.
This class is the main item class from which all items will inherit.
*/
#ifndef ITEM_HPP
#define ITEM_HPP

#include "entity.hpp"

class Item : public Entity
{
public:
	Item(const string& name, const string& description,
		const string& type, int value)
		: 
		Entity(name, description),
		type(type), value(value)
	{
		// Item properties
	}

	// Type
	void setType(const string& newType) 
	{
		type = newType;
	}
	string getType() const 
	{
		return type;
	}

	// Value
	void setValue(const int newValue)
	{
		value = newValue;
	}
	int getValue() const 
	{
		return value;
	}

private:
	string type; // armor, weapon
	int	value;
};

#endif // !ITEM_HPP
