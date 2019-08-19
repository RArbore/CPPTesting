#include "../include/Entity.h"

Entity::Entity(Mainclass* in, double x, double y) {
    main = in;
    main->entities.push_back(this);
    horizAnis = 0;
    vertAnis = 0;
    ticksPerFrame = 0;
    hitbox = new Hitbox(x, y, 0, 0);
}

void Entity::remove() {
    main->entities.remove(this);
}

IntRect Entity::currentFrame() {
    int left = sheetLocation.left;
    int top = sheetLocation.top;
    int totalwidth = sheetLocation.width;
    int totalheight = sheetLocation.height;
    int indivwidth = totalwidth/horizAnis;
    int indivheight = totalheight/vertAnis;
    int timedCount = (int)(main->counter/ticksPerFrame);
    int x = left+(indivwidth*(timedCount%horizAnis));
    int y = top+(indivheight*((int)(timedCount/vertAnis)));
    return {x, y, indivwidth, indivheight};
}

void Entity::tick() {

}