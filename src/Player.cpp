#include "../include/Player.h"

Player::Player(Global* main, double x, double y): Entity(main, x, y) {
    vx = 0;
    vy = 0;
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

bool Player::onGround(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    hitbox.h = 28;
    bool val = checkCollision(map, MAP_WIDTH, MAP_HEIGHT);
    hitbox.h = 24;
    return val;
}

bool Player::onLeft(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    double bx = hitbox.x;
    hitbox.x = bx-4;
    bool val = checkCollision(map, MAP_WIDTH, MAP_HEIGHT);
    hitbox.x = bx;
    return val;
}

bool Player::onRight(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    hitbox.w = 18;
    bool val = checkCollision(map, MAP_WIDTH, MAP_HEIGHT);
    hitbox.w = 14;
    return val;
}

void Player::tick() {
    counter++;
    if (onGround(main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        if (abs(vx) > 0.1 && counter % 4 == 0) {
            main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
        }
        vx *= 0.8;
    }
    vy += 0.5;
    if (onGround(main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
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
    if (main->keys->at('W') && onGround(main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
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
    else if (main->keys->at('W') && ((onLeft(main->map, main->MAP_WIDTH, main->MAP_HEIGHT) && pvx < 0) || (onRight(main->map, main->MAP_WIDTH, main->MAP_HEIGHT) && pvx > 0))) {
        vy = -abs(pvx)-3;
        vx = -1*pvx;
        direction = 1 - direction;
    }
    if (main->keys->at('A') && onGround(main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        direction = 1;
        vx -= 0.8;
        sheetLocation.left = 192*(-2*direction+1)+1024*direction-64*direction;
        sheetLocation.top = 40;
        sheetLocation.width = 64;
        sheetLocation.height = 24;
        horizAnis = 4;
        ticksPerFrame = 4*(-2*direction+1);
    }
    if (main->keys->at('D') && onGround(main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
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
        if (vy > 1) {
            for (int i = 0; i < 4; i++) {
                main->entities->push_back(new DustCloud(main, hitbox.x+rand()%10, hitbox.y+24));
            }
        }
        vy = 0;
    }
    *(main->cx) = hitbox.x+hitbox.w/2;
    *(main->cy) = hitbox.y+hitbox.h/2;
//    for (int i = 0; i < point_to.size(); i++) {
//        BJCloud e = point_to.at(i);
//        if (!e.exists) {
//            point_to.erase(point_to.begin()+i);
//            i--;
//        }
//    }
}