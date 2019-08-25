#ifndef CPPTESTING_PLAYER_H
#define CPPTESTING_PLAYER_H

#include "Entity.h"
#include "Global.h"

class Entity;

class Player: public Entity {

public:

    int direction;

    double vx;
    double vy;

    Player(Global* in, double x, double y);

    void tick() override;
};


#endif //CPPTESTING_PLAYER_H
