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
        int level, int maxHealth, int currentHealth, int attack, int defense) :

        Entity(name, description), 
        level(level), maxHealth(maxHealth), currentHealth(currentHealth), 
        attack(attack), defense(defense)
    {
        // Character properties
    }

    int getLevel() 
        const { return level; }
    int getCurrentHealth()
        const { return currentHealth; }
    int getAttack() 
        const { return attack; }
    int getDefense() 
        const { return defense; }

    void setLevel(int newLevel)
        { level = newLevel; }
    void setHealth(int newMaxHealth)
        { maxHealth = newMaxHealth; }
    void setHealth(int newCurrentHealth)
        { currentHealth = newCurrentHealth; }
    void setAttack(int newAttack)
        { attack = newAttack; }
    void setDefense(int newDefense)
        { defense = newDefense; }

private:
    int level;
    int maxHealth;
    int currentHealth;
    int attack;
    int defense;
};

#endif // CHARACTER_HPP
