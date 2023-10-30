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
	Character()
		:
		Entity("DefaultName", "DefaultDescription"),
		maxHealth(10), currentHealth(10),
		attack(2), baseAttack(2),
		defense(2), baseDefense(2),
		level(1), experience(0), coins(0) {}

	Character(const string& name, const string& description,
		int maxHealth, int currentHealth,
		int attack, int baseAttack,
		int defense, int baseDefense,
		int level, int experience, int coins)
		:
		Entity(name, description),
		maxHealth(maxHealth), currentHealth(currentHealth),
		attack(attack), baseAttack(baseAttack),
		defense(defense), baseDefense(baseDefense),
		level(level), experience(experience), coins(coins)
	{
		// Character properties
	}

	// Max Health
	void setMaxHealth(int newMaxHealth)
	{
		maxHealth = level * 10;
	}
	int getMaxHealth() const
	{
		return maxHealth;
	}

	// Current Health
	void setCurrentHealth(int newCurrentHealth)
	{
		currentHealth = newCurrentHealth;
		if (currentHealth >= maxHealth)
		{
			currentHealth = maxHealth;
		}
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
	// Base Attack
	void setBaseAttack(int newBaseAttack)
	{
		baseAttack = newBaseAttack;
	}
	int getBaseAttack() const
	{
		return baseAttack;
	}
	//Modify Attack
	void modifyAttack(int attackBonus)
	{
		attack = baseAttack + attackBonus;
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
	// Base Defense
	void setBaseDefense(int newBaseDefense)
	{
		baseDefense = newBaseDefense;
	}
	int getBaseDefense() const
	{
		return baseDefense;
	}
	// Modify Defense
	void modifyDefense(int defenseBonus)
	{
		defense = baseDefense + defenseBonus;
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
	void modifyExperience(int experiencePoints)
	{
		experience += experiencePoints;
		if (experience >= (level * 10))
		{
			level++;
			maxHealth += 10;
			experience = 0;
		}
	}

	// Coins
	void setCoins(int newCoins)
	{
		coins = newCoins;
	}
	int getCoins() const
	{
		return coins;
	}

private:
	int maxHealth;
	int currentHealth;
	int attack;
	int baseAttack;
	int defense;
	int baseDefense;
	int level;
	int experience;
	int coins;
};

#endif // CHARACTER_HPP
