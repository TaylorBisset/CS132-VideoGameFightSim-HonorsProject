/*
non_player_character.hpp
NonPlayerCharacter subclass for NPCs.
This class is the where all the NPCs will be built from.
*/
#ifndef NON_PLAYER_CHARACTER_HPP
#define NON_PLAYER_CHARACTER_HPP

#include "character.hpp"

class NonPlayerCharacter : public Character
{
public:
    NonPlayerCharacter(const string& name, const string& description, 
        int level, int maxHealth, int currentHealth, 
        int attack, int defense, 
        int attitude) :

        Character(name, description, 
            level, maxHealth, currentHealth, 
            attack, defense), 

        attitude(attitude)
    {
        // NPC properties
    }

    int getAttitude() 
        const { return attitude; }

private:
    int attitude; // friendly or enemy
};

#endif // NON_PLAYER_CHARACTER_HPP