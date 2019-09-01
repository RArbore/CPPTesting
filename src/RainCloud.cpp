#include "../include/RainCloud.h"

RainCloud::RainCloud(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 88;
    hitbox.h = 32;
    sheetLocation.left = 128;
    sheetLocation.top = 200;
    sheetLocation.width = 88;
    sheetLocation.height = 32;
    horizAnis = 1;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void RainCloud::tick() {
    counter++;
    if (counter % 10 == 0) {
        hitbox.x++;
    }
}