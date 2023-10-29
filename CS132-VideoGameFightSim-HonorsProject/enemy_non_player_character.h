/*
enemy_non_player_character.hpp
EnemyNonPlayerCharacter subclass for enemy NPCs.
This class is the where all the hostile NPCs will be built from.
*/
#ifndef ENEMY_NON_PLAYER_CHARACTER_HPP
#define ENEMY_NON_PLAYER_CHARACTER_HPP

#include "non_player_character.hpp"

class EnemyNonPlayerCharacter : public NonPlayerCharacter
{
public:
    EnemyNonPlayerCharacter(const string& name, const string& description,
        int level, int maxHealth, int currentHealth,
        int attack, int defense,
        int attitude, 
        int loot) :

        NonPlayerCharacter(name, description,
            level, maxHealth, currentHealth,
            attack, defense, 
            attitude),

        loot(loot)
    {
        // Enemy NPC properties
    }

    int getLoot()
        const { return loot; }

private:
    int loot;
};

#endif // ENEMY_NON_PLAYER_CHARACTER_HPP
