#include "../include/Player.h"

Player::Player(Global* main, double x, double y): Entity(main, x, y) {
    vx = 0;
    vy = 0;
    pvx = 0;
    pvy = 0;
    direction = 0;
    hitbox.w = 14;
    hitbox.h = 24;
    sheetLocation.left = 128;
    sheetLocation.top = 40;
    sheetLocation.width = 64;
    sheetLocation.height = 24;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

bool Player::onGround() {
    hitbox.h = 28;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.h = 24;
    return val;
}

bool Player::onLeft() {
    double bx = hitbox.x;
    hitbox.x = bx-4;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.x = bx;
    return val;
}

bool Player::onRight() {
    hitbox.w = 18;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.w = 14;
    return val;
}

void Player::tick() {
    counter++;
    if (onGround()) {
        if (pvy > 1) {
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
            }
        }
        if (abs(vx) > 0.1 && counter % 4 == 0) {
            main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
        }
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
            vx *= -1.2;
            direction = 0;
        }
        else if (main->keys->at('D') && direction == 1) {
            vx *= -1.2;
            direction = 0;
        }
    }
    else if (main->keys->at('W') && ((onLeft() && pvx < 0) || (onRight() && pvx > 0))) {
        if (pvx < 0) {
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x, hitbox.y+rand()%20));
            }
        }
        else {
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x+10, hitbox.y+rand()%20));
            }
        }
        vy = -abs(pvx)-3;
        vx = -1*pvx;
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
    pvx = vx;
    pvy = vy;
    if (!moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vx = 0;
    }
    if (!moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vy = 0;
    }
    *(main->cx) = hitbox.x+hitbox.w/2;
    *(main->cy) = hitbox.y+hitbox.h/2;
    if (hitbox.y+hitbox.h >= main->MAP_HEIGHT*16) {
        remove();
    }
}