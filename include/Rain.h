#ifndef CPPTESTING_RAIN_H
#define CPPTESTING_RAIN_H

#include "Entity.h"
#include "Global.h"

class Entity;

class Rain: public Entity {

public:

    Rain(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_RAIN_H
