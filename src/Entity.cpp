#include "../include/Entity.h"

Entity::Entity(Mainclass* in, double x, double y) {
    main = in;
    main->entities.push_back(this);
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
}

void tick() {

}