#ifndef CPPTESTING_GLOBAL_H
#define CPPTESTING_GLOBAL_H

#include "Entity.h"

class Entity;

class Global{

public:

    int* counter;

    bool* running;

    std::list<Entity*>* entities;

};

#endif //CPPTESTING_GLOBAL_H