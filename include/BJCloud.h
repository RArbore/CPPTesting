#ifndef CPPTESTING_BJCLOUD_H
#define CPPTESTING_BJCLOUD_H

#include "Entity.h"
#include "Global.h"

class Entity;

class BJCloud: public Entity {

public:

    BJCloud(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_BJCLOUD_H
