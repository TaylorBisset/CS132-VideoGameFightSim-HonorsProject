/*
character.hpp
Character subclass for all character entities in the game.
This class is the main character class from which all characters will inherit.
*/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "entity.hpp"
#include "item.hpp"
#include "weapon.hpp"
#include "armor.hpp"
#include "inventory.hpp"

class Inventory;

class Character : public Entity
{
public:
	Character()
		:
		Entity("DefaultName", "DefaultDescription"),
		maxHealth(10), currentHealth(10),
		attack(1), baseAttack(1),
		defense(1), baseDefense(1),
		level(1), experience(0), coins(0), 
		equippedWeapon(nullptr), equippedArmor(nullptr), inventory() {}

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
		level(level), experience(experience), coins(coins),
		equippedWeapon(nullptr), equippedArmor(nullptr) 
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
		if (currentHealth >= maxHealth)
		{
			currentHealth = maxHealth;
		}
	}
	int getCurrentHealth() const
	{
		return currentHealth;
	}
	//Modify Current Health
	void modifyCurrentHealth(int healthChange)
	{
		currentHealth += healthChange;
		setCurrentHealth(currentHealth);
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
		setAttack(attack);
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
		setDefense(defense);
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
			setLevel(level);
			cout << "Congratulations!\nYou are now level " << level << endl;
			maxHealth = level * 10;
			setMaxHealth(maxHealth);
			setBaseAttack(level);
			setBaseDefense(level);
		}
		setExperience(experience);
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
	void modifyCoins(int coinChange)
	{
		coins += coinChange;
		if (coinChange > 0)
		{
			cout << "\nYou received " << coinChange << " coins.\n";
		}
		cout << "Current coin count: " << coins << endl;
	}

	// Inventory
	void setInventory(const Inventory& newInventory)
	{
		inventory = newInventory;
	}
	Inventory& getInventory()
	{
		return inventory;
	}
	void displayCharacterInventory()
	{
		if (inventory.isEmpty()) 
		{
			cout << "Inventory is empty.\n";
		}
		else {
			inventory.displayInventory();
		}
	}

	// Equip items
	void equipWeapon(const Weapon* weapon)
	{
		equippedWeapon = weapon;
		modifyAttack(weapon->getDamage());
	}
	void equipArmor(const Armor* armor)
	{
		equippedArmor = armor;
		modifyDefense(armor->getProtection());
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

	Inventory inventory;

	const Weapon* equippedWeapon;
	const Armor* equippedArmor;
};

#endif // CHARACTER_HPP
