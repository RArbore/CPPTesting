#include "../include/BJCloud.h"

BJCloud::BJCloud(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 4;
    hitbox.h = 4;
    sheetLocation.left = 128;
    sheetLocation.top = 196;
    sheetLocation.width = 40;
    sheetLocation.height = 4;
    horizAnis = 10;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void BJCloud::tick() {
    counter++;
    if (counter % 4 == 0) {
        transparency -= 25;
    }
    if (transparency <= 0) {
        remove();
    }
}