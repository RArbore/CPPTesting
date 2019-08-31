#ifndef CPPTESTING_BJCLOUD_H
#define CPPTESTING_BJCLOUD_H

#include "Entity.h"
#include "Global.h"

class Entity;

class DustCloud: public Entity {

public:

    DustCloud(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_BJCLOUD_H
