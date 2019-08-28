#include "../include/BJCloud.h"

BJCloud::BJCloud(vector<Entity*>* ilist, double x, double y): Entity(ilist, x, y) {
    hitbox->x = x;
    hitbox->y = y;
    hitbox->w = 4;
    hitbox->h = 4;
    sheetLocation.left = 128;
    sheetLocation.top = 196;
    sheetLocation.width = 40;
    sheetLocation.height = 4;
    horizAnis = 10;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void BJCloud::tick(Global* main) {
    if (*main->counter % 4 == 0) {
        transparency -= 255/10;
    }
    if (transparency <= 0) {
        remove();
    }
}