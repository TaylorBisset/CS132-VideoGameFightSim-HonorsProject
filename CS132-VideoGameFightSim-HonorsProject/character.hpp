/*
character.hpp
Character subclass for all characters in the game.
This class is the main character class from which all characters will inherit.
*/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "entity.hpp"

class Character : public Entity
{
public:
    Character(const string& name, const string& description,
        int level, int health, int attack, int defense) :

        Entity(name, description), 
        level(level), health(health), attack(attack), defense(defense)
    {
        // Character properties
    }

    int getLevel() 
        const { return level; }
    int getHealth() 
        const { return health; }
    int getAttack() 
        const { return attack; }
    int getDefense() 
        const { return defense; }

private:
    int level;
    int health;
    int attack;
    int defense;
};

#endif // CHARACTER_HPP
