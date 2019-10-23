#ifndef CPPTESTING_CHESTMONSTER_H
#define CPPTESTING_CHESTMONSTER_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"

class Entity;

class ChestMonster: public Entity {

public:

    ChestMonster(Global* main, double x, double y);

    int playerInRange();

    void tick() override;

};


#endif //CPPTESTING_CHESTMONSTER_H
