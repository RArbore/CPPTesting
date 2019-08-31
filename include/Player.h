#ifndef CPPTESTING_PLAYER_H
#define CPPTESTING_PLAYER_H

#include "Entity.h"
#include "Global.h"
#include "DustCloud.h"

class Entity;

class Player: public Entity {

public:

    int direction;

    double vx;
    double vy;

    double pvx;
    double pvy;

    Player(Global* main, double x, double y);

    bool onGround(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);
    bool onLeft(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);
    bool onRight(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    void tick() override;
};


#endif //CPPTESTING_PLAYER_H
