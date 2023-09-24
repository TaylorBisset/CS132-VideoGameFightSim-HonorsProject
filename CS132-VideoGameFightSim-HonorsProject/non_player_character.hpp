/*
non_player_character.hpp
Non_Player_Character subclass for NPCs.
This class is the where all the NPCs will be built from.
*/
#ifndef NON_PLAYER_CHARACTER_HPP
#define NON_PLAYER_CHARACTER_HPP

#include "character.hpp"

class NonPlayerCharacter : public Character
{
public:
    NonPlayerCharacter(const string& name, const string& description, 
        int level, int health, int attack, int defense, 
        int attitude) :

        Character(name, description, 
            level, health, attack, defense), 

        attitude(attitude)
    {
        // NPC properties
    }

private:
    int attitude; // friendly or enemy
};

#endif // NON_PLAYER_CHARACTER_HPP
