/*
game_play_state.hpp
Subclass of Game State.
This class is the game state that lets the game play.
*/
#ifndef GAME_PLAY_STATE_HPP
#define GAME_PLAY_STATE_HPP

#include "game_state.hpp"
#include "game_functions.hpp"
#include "player_character.hpp"

class GamePlayState : public GameState
{
public:
    GamePlayState(GameManager* gm, PlayerCharacter player) : gameManager(gm), playerCharacter(player) {}

    void Initialize() override;  // Initialize game state
    void HandleInput() override; // Handle player input
    void Update();               // Implement game mechanics
    void IdleMenu();             // Idle menu, play in between fights

private:
    GameManager* gameManager;
    PlayerCharacter playerCharacter;
};

#endif // !GAME_PLAY_STATE_HPP
