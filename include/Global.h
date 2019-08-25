#ifndef CPPTESTING_GLOBAL_H
#define CPPTESTING_GLOBAL_H

#include "Entity.h"

class Entity;

class Global{

public:

    int* counter;

    bool* running;

    std::array<std::array<int, 40>, 80>* map;

    std::list<Entity*>* entities;

    std::map<char, bool>* keys;

};

#endif //CPPTESTING_GLOBAL_H