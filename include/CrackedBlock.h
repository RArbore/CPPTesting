#ifndef CPPTESTING_CRACKEDBLOCK_H
#define CPPTESTING_CRACKEDBLOCK_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"

class Entity;

class CrackedBlock: public Entity {

public:

    CrackedBlock(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_CRACKEDBLOCK_H
