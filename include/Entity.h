#ifndef CPPTESTING_ENTITY_H
#define CPPTESTING_ENTITY_H

#include "Hitbox.h"
#include "Global.h"
#include <list>

using namespace std;
using namespace sf;

class Global;

class Entity {

public:

    int horizAnis;
    int vertAnis;
    int ticksPerFrame;

    int transparency;

    vector<Entity*>* elist;

    Hitbox hitbox;

    IntRect sheetLocation;

    Entity(vector<Entity*>* ilist, double x, double y);

    void remove();

    int zeroToOne(int in);

    IntRect currentFrame(int counter);

    bool checkCollision(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    bool moveH(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    bool moveV(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    virtual void tick(Global* main) = 0;

};


#endif //CPPTESTING_ENTITY_H
