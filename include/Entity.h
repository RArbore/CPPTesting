#ifndef CPPTESTING_ENTITY_H
#define CPPTESTING_ENTITY_H

#include <SFML/Graphics.hpp>
#include "Hitbox.h"

using namespace sf;

class Entity {

public:
    Hitbox hitbox;

    IntRect sheetLocation;

};


#endif //CPPTESTING_ENTITY_H
