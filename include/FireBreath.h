#ifndef CPPTESTING_FIREBREATH_H
#define CPPTESTING_FIREBREATH_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"

class Entity;

class FireBreath: public Entity {

public:

    FireBreath(Global *main, double x, double y, double vx, double vy);

    void tick() override;

};


#endif //CPPTESTING_FIREBREATH_H
