#include "../include/Player.h"

Player::Player(Global* in, double x, double y): Entity(in, x, y) {
    direction = 0;
    hitbox->x = x;
    hitbox->y = y;
    hitbox->w = 16;
    hitbox->h = 24;
    sheetLocation.left = 128;
    sheetLocation.top = 40;
    sheetLocation.width = 64;
    sheetLocation.height = 24;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void Player::tick() {
    sheetLocation.left = 128*(-2*direction+1)+1024*direction-64*direction;
    sheetLocation.top = 40;
    sheetLocation.width = 64;
    sheetLocation.height = 24;
    horizAnis = 4;
    ticksPerFrame = 4*(-2*direction+1);
    if (main->keys->at('W')) {
        sheetLocation.left = 256*(-2*direction+1)+1024*direction-16*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 16;
        sheetLocation.height = 24;
        horizAnis = 1;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (main->keys->at('A')) {
        direction = 1;
        hitbox->x--;
        sheetLocation.left = 192*(-2*direction+1)+1024*direction-64*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (main->keys->at('D')) {
        direction = 0;
        hitbox->x++;
        sheetLocation.left = 192*(-2*direction+1)+1024*direction-64*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4*(-2*direction+1);
    }
}