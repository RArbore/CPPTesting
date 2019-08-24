#include "../include/Player.h"

Player::Player(Global* in, double x, double y): Entity(in, x, y) {
    direction = 1;
    hitbox->x = x;
    hitbox->y = y;
    hitbox->w = 16;
    hitbox->h = 20;
    sheetLocation.left = 128;
    sheetLocation.top = 44;
    sheetLocation.width = 64;
    sheetLocation.height = 20;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void Player::tick() {
    sheetLocation.left = 128;
    sheetLocation.top = 44;
    sheetLocation.width = 64;
    sheetLocation.height = 20;
    horizAnis = 4;
    if (main->keys->at('W')) {
        //hitbox->y--;
        sheetLocation.left = 256;
        sheetLocation.top = 44;
        sheetLocation.width = 16;
        sheetLocation.height = 20;
        horizAnis = 1;
    }
    if (main->keys->at('A')) {
        direction = -1;
        hitbox->x--;
        sheetLocation.left = 192;
        sheetLocation.top = 44;
        sheetLocation.width = 64;
        sheetLocation.height = 20;
        horizAnis = 4;
    }
    if (main->keys->at('D')) {
        direction = 1;
        hitbox->x++;
        sheetLocation.left = 192;
        sheetLocation.top = 44;
        sheetLocation.width = 64;
        sheetLocation.height = 20;
        horizAnis = 4;
    }
}