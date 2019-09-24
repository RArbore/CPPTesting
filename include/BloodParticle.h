#ifndef CPPTESTING_BLOODPARTICLE_H
#define CPPTESTING_BLOODPARTICLE_H

#include "Entity.h"
#include "Global.h"

class Entity;

class BloodParticle: public Entity {

public:

    double vx;
    double vy;

    BloodParticle(Global* main, double x, double y, int seed_mod=0);

    void tick() override;

};


#endif //CPPTESTING_BLOODPARTICLE_H
