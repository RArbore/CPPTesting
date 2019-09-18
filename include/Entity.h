#ifndef CPPTESTING_ENTITY_H
#define CPPTESTING_ENTITY_H

#include "Hitbox.h"
#include "Global.h"

using namespace std;
using namespace sf;

class Global;

class Entity {

public:

    int horizAnis;
    int vertAnis;
    int ticksPerFrame;

    int counter;

    int transparency;

    bool doCollision;

    bool exists;

    Global* main;

    Hitbox hitbox;

    IntRect sheetLocation;

    Entity(Global* main, double x, double y);

    void remove();

    static int zeroToOne(int in);

    static bool ccw(double x1, double y1, double x2, double y2, double x3, double y3);

    static bool linesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

    IntRect currentFrame();

    bool checkCollision(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    bool moveH(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    bool moveV(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT);

    virtual void tick() = 0;

    virtual ~Entity();

};


#endif //CPPTESTING_ENTITY_H
