#ifndef CPPTESTING_GLOBAL_H
#define CPPTESTING_GLOBAL_H

#include "Entity.h"

class Entity;

class Global{

public:

    int* counter;

    int* cx;
    int* cy;

    int MAP_WIDTH;
    int MAP_HEIGHT;

    bool* running;

    std::vector<std::vector<int>>* map;

    std::list<Entity*>* entities;

    std::map<char, bool>* keys;

};

#endif //CPPTESTING_GLOBAL_H