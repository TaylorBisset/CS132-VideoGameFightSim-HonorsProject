/*
player_character.hpp
PlayerCharacter subclass for the players' characters. 
This class is the where all the players' characters will be built from.
*/
#ifndef PLAYER_CHARACTER_HPP
#define PLAYER_CHARACTER_HPP

#include "character.hpp"

class PlayerCharacter : public Character
{
public:
    PlayerCharacter(const string& name, const string& description, 
        int level, int health, int attack, int defense, 
        int experience) :

        Character(name, description, 
            level, health, attack, defense), 

        experience(experience)
    {
        // Player character properties
    }

    int getExperience()
        const { return experience; }

private:
    int experience;
};

#endif // PLAYER_CHARACTER_HPP
