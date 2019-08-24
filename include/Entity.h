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

    Global* main;

    Hitbox* hitbox;

    IntRect sheetLocation;

    Entity(Global* in, double x, double y);

    void remove();

    IntRect currentFrame();

    virtual void tick() = 0;

protected:

    void setAni(IntRect isheetLocation, int ihorizAnis, int ivertAnis, int iticksPerFrame);

};


#endif //CPPTESTING_ENTITY_H
