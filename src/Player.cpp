#include "../include/Player.h"

Player::Player(Global* in, double x, double y): Entity(in, x, y) {
    direction = 0;
    hitbox->x = x;
    hitbox->y = y;
    hitbox->w = 14;
    hitbox->h = 24;
    sheetLocation.left = 128;
    sheetLocation.top = 40;
    sheetLocation.width = 64;
    sheetLocation.height = 24;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

bool Player::onGround() {
    hitbox->h = 28;
    bool val = checkCollision();
    hitbox->h = 24;
    return val;
}

bool Player::onLeft() {
    double bx = hitbox->x;
    hitbox->x = bx-4;
    bool val = checkCollision();
    hitbox->x = bx;
    return val;
}

bool Player::onRight() {
    hitbox->w = 18;
    bool val = checkCollision();
    hitbox->w = 14;
    return val;
}

void Player::tick() {
    if (onGround()) {
        vx *= 0.8;
    }
    vy += 0.5;
    if (onGround()) {
        sheetLocation.left = 128 * (-2 * direction + 1) + 1024 * direction - 64 * direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4 * (-2 * direction + 1);
    }
    else {
        sheetLocation.left = 256*(-2*direction+1)+1024*direction-16*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 16;
        sheetLocation.height = 24;
        horizAnis = 1;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (main->keys->at('W') && onGround()) {
        vy = -abs(vx)-3;
        if (main->keys->at('A') && direction == 0) {
            vx *= -1.22;
            direction = 0;
        }
        else if (main->keys->at('D') && direction == 1) {
            vx *= -1.2;
            direction = 0;
        }
    }
    else if (main->keys->at('W') && !onGround() && ((onLeft() && vx < 0) || (onRight() && vx > 0))) {
        vy = -abs(vx)-3;
        vx *= -1;
        direction = 1 - direction;
    }
    if (main->keys->at('A') && onGround()) {
        direction = 1;
        vx -= 0.8;
        sheetLocation.left = 192*(-2*direction+1)+1024*direction-64*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (main->keys->at('D') && onGround()) {
        direction = 0;
        vx += 0.8;
        sheetLocation.left = 192*(-2*direction+1)+1024*direction-64*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (!moveH(vx)) {
        vx = 0;
    }
    if (!moveV(vy)) {
        vy = 0;
    }
    *(main->cx) = hitbox->x+hitbox->w/2;
    *(main->cy) = hitbox->y+hitbox->h/2;
}