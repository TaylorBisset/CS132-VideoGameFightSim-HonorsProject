/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    Honors Project
 Description:   This project is for my AAS in Computer Science Honors coursework.
				Professor Lonnie Heinke is my mentor through this quarter's assignments.

				The game will be a text-based console-window fighting simulator game.

Repo:           https://github.com/TaylorBisset/CS132-VideoGameFightSim-HonorsProject
*/

/*
main.cpp
*/

#include <iostream>	

using namespace std;

int main()
{
	cout << "Hello World!\n";

    // OS independent program termination sequence. 
#ifdef _WIN32
    cout << endl;
    system("pause");
#else
    cout << endl;
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
	return 0;
}

/*

Entity
|
|-Character
|  |
|  |--Player_Character
|  |
|  |--Non_Player_Character
|      |
|      |---Enemy_Non_Player_Character
|
|-Item
   |
   |--Armor
   |   |
   |   |---Armor_Manager
   |
   |--Weapon
   |   |
   |   |---Weapon_Manager

*/
