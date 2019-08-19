#include "../include/Player.h"

Player::Player(Global* in, double x, double y): Entity(in, x, y) {
    hitbox->x = x;
    hitbox->y = y;
    hitbox->w = 16;
    hitbox->h = 20;
    this->sheetLocation.left = 128;
    this->sheetLocation.top = 44;
    this->sheetLocation.width = 48;
    this->sheetLocation.height = 20;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void Player::tick() {

}