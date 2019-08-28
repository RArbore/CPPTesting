#ifndef CPPTESTING_BJCLOUD_H
#define CPPTESTING_BJCLOUD_H

#include "Entity.h"
#include "Global.h"

class Entity;

class BJCloud: public Entity {

public:

    BJCloud(vector<Entity*>* ilist, double x, double y);

    void tick(Global* main) override;

};


#endif //CPPTESTING_BJCLOUD_H
