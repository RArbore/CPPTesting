#include "../include/Entity.h"

Entity::Entity(Mainclass* in, double x, double y) {
    in->entities.push_back(this);
}