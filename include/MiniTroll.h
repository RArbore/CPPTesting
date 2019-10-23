#ifndef CPPTESTING_MINITROLL_H
#define CPPTESTING_MINITROLL_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"

class Entity;

class MiniTroll: public Entity {

public:

    int direction;

    MiniTroll(Global* main, double x, double y);

    bool playerInRange();

    bool onGround();

    bool groundInFront();

    void tick() override;
};


#endif //CPPTESTING_MINITROLL_H
