#ifndef CPPTESTING_PLAYER_H
#define CPPTESTING_PLAYER_H

#include "Entity.h"
#include "Global.h"
#include "DustCloud.h"
#include "BloodParticle.h"

class Entity;

class Player: public Entity {

public:

    int direction;

    int lastWallJump;
    int wallJumpTimer;

    bool dying;

    double vx;
    double vy;

    double pvx{};
    double pvy{};

    Player(Global* main, double x, double y);

    bool onGround();
    bool onGround(int d);
    bool onLeft();
    bool onRight();

    void tick() override;
};


#endif //CPPTESTING_PLAYER_H
