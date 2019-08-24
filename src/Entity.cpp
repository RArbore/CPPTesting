#include "../include/Entity.h"

Entity::Entity(Global* in, double x, double y) {
    main = in;
    main->entities->push_back(this);
    horizAnis = 0;
    vertAnis = 0;
    ticksPerFrame = 0;
    hitbox = new Hitbox(x, y, 0, 0);
}

void Entity::remove() {
    main->entities->remove(this);
}

IntRect Entity::currentFrame() {
    int left = sheetLocation.left;
    int top = sheetLocation.top;
    int totalwidth = sheetLocation.width;
    int totalheight = sheetLocation.height;
    int indivwidth = totalwidth/horizAnis;
    int indivheight = totalheight/vertAnis;
    int* counter = main->counter;
    int timedCount = (int)(*counter/ticksPerFrame);
    int x = left+(indivwidth*(timedCount%horizAnis));
    int y = top+(indivheight*(((int)(timedCount/horizAnis))%vertAnis));
    return {x, y, indivwidth, indivheight};
}

void Entity::tick() {

}

void Entity::setAni(IntRect isheetLocation, int ihorizAnis, int ivertAnis, int iticksPerFrame) {
    this->sheetLocation = isheetLocation;
    this->horizAnis = ihorizAnis;
    this->vertAnis = ivertAnis;
    this->ticksPerFrame = iticksPerFrame;
}
