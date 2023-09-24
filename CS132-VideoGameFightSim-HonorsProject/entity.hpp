/*
entity.hpp 
Base class for all objects in the game. 
This class is the base entity from which all objects will inherit. 
*/
#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

using namespace std;

class Entity
{
public:
    Entity(const string& name, const string& description) : 
        name(name), description(description)
    {
        // Entity properties
    }

    string getName() 
        const { return name; }
    string getDescription() 
        const { return description; }

private:
    string name;
    string description;
};

#endif // !ENTITY_HPP
