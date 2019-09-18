#include "../include/Player.h"

Player::Player(Global* main, double x, double y): Entity(main, x, y) {
    vx = 0;
    vy = 0;
    pvx = 0;
    pvy = 0;
    direction = 0;
    hitbox.w = 14;
    hitbox.h = 23;
    sheetLocation.left = 128;
    sheetLocation.top = 40;
    sheetLocation.width = 64;
    sheetLocation.height = 24;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
    lastWallJump = 0;
    wallJumpTimer = 0;
}

bool Player::onGround() {
    hitbox.h = 23+4;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.h = 23;
    return val;
}

bool Player::onGround(int d) {
    hitbox.h = 23+d;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.h = 23;
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
    if (wallJumpTimer > 0) {
        wallJumpTimer--;
    }
    if (transparency < 255) {
        transparency += 8;
    }
    else if (transparency > 255) {
        transparency = 255;
    }
    if (*main->leftmouse && transparency == 255) {
        hitbox.x = *main->mx-hitbox.w/2;
        hitbox.y = *main->my-hitbox.h/2;
        transparency = 0;
    }
    if (onGround()) {
        if (pvy > 1) {
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
            }
        }
        if (abs(vx) > 0.1 && counter % 4 == 0) {
            main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
        }
    }
    if (wallJumpTimer == 0) {
        vx *= 0.9;
    }
    vy += 0.5;
    if (onGround()) {
        lastWallJump = 0;
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
        vy = -0.3*abs(vx)-6;
    }
    else if (main->keys->at('W') && !onGround(17) && ((onLeft() && pvx < 0 && lastWallJump != 2) || (onRight() && pvx > 0 && lastWallJump != 1))) {
        if (pvx < 0) {
            vx = 7;
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x, hitbox.y+rand()%20));
            }
        }
        else {
            vx = -7;
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x+10, hitbox.y+rand()%20));
            }
        }
        wallJumpTimer = 10;
        vy = -abs(pvx)-3;
        lastWallJump = direction + 1;
        direction = 1 - direction;
    }
    if (main->keys->at('A') && wallJumpTimer == 0) {
        direction = 1;
        vx -= 0.8;
        if (onGround()) {
            sheetLocation.left = 192 * (-2 * direction + 1) + 1024 * direction - 64 * direction;
            sheetLocation.top = 40;
            sheetLocation.width = 64;
            sheetLocation.height = 24;
            horizAnis = 4;
            ticksPerFrame = 4 * (-2 * direction + 1);
        }
    }
    if (main->keys->at('D') && wallJumpTimer == 0) {
        direction = 0;
        vx += 0.8;
        if (onGround()) {
            sheetLocation.left = 192 * (-2 * direction + 1) + 1024 * direction - 64 * direction;
            sheetLocation.top = 40;
            sheetLocation.width = 64;
            sheetLocation.height = 24;
            horizAnis = 4;
            ticksPerFrame = 4 * (-2 * direction + 1);
        }
    }
    pvx = vx;
    pvy = vy;
    if (!moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vx = 0;
    }
    if (!moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vy = 0;
    }
    *(main->cx) -= (*(main->cx)-(hitbox.x+hitbox.w/2))*0.2;
    *(main->cy) -= (*(main->cy)-(hitbox.y+hitbox.h/2))*0.2;
    if (abs(*(main->cx)-(hitbox.x+hitbox.w/2)) < 1) {
        *(main->cx) = hitbox.x+hitbox.w/2;
    }
    if (abs(*(main->cy)-(hitbox.y+hitbox.h/2)) < 1) {
        *(main->cy) = hitbox.y+hitbox.h/2;
    }
    if (hitbox.y+hitbox.h >= main->MAP_HEIGHT*16) {
        remove();
    }
}