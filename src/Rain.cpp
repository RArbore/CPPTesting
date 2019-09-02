#include "../include/Rain.h"

Rain::Rain(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 2;
    hitbox.h = 4;
    sheetLocation.left = 128;
    sheetLocation.top = 232;
    sheetLocation.width = 8;
    sheetLocation.height = 4;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
    vy = 0;
}

void Rain::tick() {
    vy+=0.5;
    vy*=0.9;
    if (!moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT) || hitbox.y+hitbox.h > main->MAP_HEIGHT*16) {
        remove();
    }
}