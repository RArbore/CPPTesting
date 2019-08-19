#ifndef CPPTESTING_ENTITY_H
#define CPPTESTING_ENTITY_H

#include <SFML/Graphics.hpp>
#include "Hitbox.h"
#include "Mainclass.h"

using namespace sf;

class Mainclass;
class Hitbox;

class Entity {

public:

    int horizAnis;
    int vertAnis;
    int ticksPerFrame;

    Mainclass* main;

    Hitbox* hitbox;

    IntRect sheetLocation;

    Entity(Mainclass* in, double x, double y);

    void remove();

    IntRect currentFrame();

    virtual void tick() = 0;

};


#endif //CPPTESTING_ENTITY_H
