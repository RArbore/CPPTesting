#ifndef CPPTESTING_DRAGON_H
#define CPPTESTING_DRAGON_H

#include "Entity.h"
#include "Global.h"
#include "Player.h"
#include "FireBreath.h"

class Entity;

class Dragon: public Entity {

public:

    std::vector<Entity::sframe> frames;

    float animationcount;

    int direction;

    float defaultAngles[14];
    float defaultX[14];
    float defaultY[14];

    Dragon(Global* main, double x, double y);

    vector<Entity::sframe> currentFrame() override;

    bool playerInRange();

    void tick() override;

};

#endif //CPPTESTING_DRAGON_H
