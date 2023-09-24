/*
 Author:        Taylor Bisset
 Section:       A
 Assignment:    P1
 Description:   This project is for my AAS in Computer Science Honors coursework. 
                Professor Lonnie Heinke is my mentor through this quarters assignments. 
*/

#include <iostream>

#include "entity.hpp"
#include "character.hpp"

int main()
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
    return 0;
}
