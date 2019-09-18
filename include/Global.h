#ifndef CPPTESTING_GLOBAL_H
#define CPPTESTING_GLOBAL_H

#include "Entity.h"

class Entity;

class Global{

public:

    int* cx;
    int* cy;

    int MAP_WIDTH;
    int MAP_HEIGHT;

    bool* running;

    bool* map_done;

    std::vector<std::vector<int>>* map;

    std::vector<Entity*>* entities;

    Entity* player;

    Entity** currentTick;

    int* mx;
    int* my;

    bool* leftmouse;

    std::map<char, bool>* keys;

};

#endif //CPPTESTING_GLOBAL_H