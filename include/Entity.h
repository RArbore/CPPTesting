#ifndef CPPTESTING_ENTITY_H
#define CPPTESTING_ENTITY_H

#include <SFML/Graphics.hpp>
#include "Hitbox.h"
#include "Global.h"

using namespace sf;

class Hitbox;
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

};


#endif //CPPTESTING_ENTITY_H
