#ifndef CPPTESTING_RAINCLOUD_H
#define CPPTESTING_RAINCLOUD_H

#include "Entity.h"
#include "Global.h"

class Entity;

class RainCloud: public Entity {

public:

    RainCloud(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_RAINCLOUD_H
