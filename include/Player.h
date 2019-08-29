#ifndef CPPTESTING_PLAYER_H
#define CPPTESTING_PLAYER_H

#include "Entity.h"
#include "BJCloud.h"
#include "Global.h"
#include "BJCloud.h"

class Entity;

class Player: public Entity {

public:

    int direction;

    double vx;
    double vy;

    vector<BJCloud> point_to;

    Player(Global* main, double x, double y);

    bool onGround(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);
    bool onLeft(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);
    bool onRight(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    void tick() override;
};


#endif //CPPTESTING_PLAYER_H
