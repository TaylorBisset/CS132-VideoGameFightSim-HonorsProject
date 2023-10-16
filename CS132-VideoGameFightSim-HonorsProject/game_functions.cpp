#include "game_functions.hpp"

void GameFunctions::StartNewGame()
{

}

void GameFunctions::ContinueGame()
{

}

void GameFunctions::PauseGame()
{

}

void GameFunctions::SaveGame()
{

}

void GameFunctions::QuitGame()
{
    // OS independent program termination sequence. 
#ifdef _WIN32
    cout << endl;
    system("pause");
#else
    cout << endl;
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return;
}
