/*
character.hpp
Character subclass for all character entities in the game.
This class is the main character class from which all characters will inherit.
*/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "entity.hpp"

class Character : public Entity
{
public:
	Character(const string& name, const string& description,
		int maxHealth, int currentHealth,
		int attack, int defense,
		int level, int experience)
		:
		Entity(name, description),
		maxHealth(maxHealth), currentHealth(currentHealth),
		attack(attack), defense(defense),
		level(level), experience(experience)
	{
		// Character properties
	}

	// Max Health
	void setMaxHealth(int newMaxHealth)
	{
		maxHealth = newMaxHealth;
	}
	int getMaxHealth() const
	{
		return maxHealth;
	}

	// Current Health
	void setCurrentHealth(int newCurrentHealth)
	{
		currentHealth = newCurrentHealth;
	}
	int getCurrentHealth() const
	{
		return currentHealth;
	}

	// Attack
	void setAttack(int newAttack)
	{
		attack = newAttack;
	}
	int getAttack() const
	{
		return attack;
	}

	// Defense
	void setDefense(int newDefense)
	{
		defense = newDefense;
	}
	int getDefense() const
	{
		return defense;
	}

	// Level
	void setLevel(int newLevel)
	{
		level = newLevel;
	}
	int getLevel() const
	{
		return level;
	}

	// Experience
	void setExperience(int newExperience)
	{
		experience = newExperience;
	}
	int getExperience() const
	{
		return experience;
	}

private:
	int maxHealth;
	int currentHealth;
	int attack;
	int defense;
	int level;
	int experience;
};

#endif // CHARACTER_HPP
