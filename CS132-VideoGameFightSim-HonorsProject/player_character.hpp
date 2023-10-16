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
        int experience, int coins) :

        Character(name, description, 
            level, health, attack, defense), 

        experience(experience), coins(coins)
    {
        // Player character properties
    }

    int getExperience()
        const { return experience; }
    int getCoins()
        const {
        return coins;
    }

private:
    int experience;
    int coins;
};

#endif // PLAYER_CHARACTER_HPP
