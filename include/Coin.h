#ifndef CPPTESTING_COIN_H
#define CPPTESTING_COIN_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"

class Entity;

class Coin: public Entity {

public:

    Coin(Global* main, double x, double y);

    void tick() override;

};


#endif //CPPTESTING_COIN_H
