#include "../include/MiniTroll.h"

MiniTroll::MiniTroll(Global* main, double x, double y): Entity(main, x, y) {
    vx = 0;
    vy = 0;
    direction = 0;
    hitbox.w = 8;
    hitbox.h = 8;
    sheetLocation.left = 368;
    sheetLocation.top = 20;
    sheetLocation.width = 64;
    sheetLocation.height = 16;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

bool MiniTroll::playerInRange() {
    if (main->player->transparency == 0) return false;
    int x1 = (hitbox.x+hitbox.w/2)/16;
    int y1 = (hitbox.y+hitbox.h/2)/16;
    int x2 = (main->player->hitbox.x+main->player->hitbox.w/2)/16;
    int y2 = (main->player->hitbox.y+main->player->hitbox.h/2)/16;
    if (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) > 20) {
        return false;
    }
    for (int x = min(x1, x2); x < max(x1, x2); x++) {
        for (int y = min(y1, y2); y < max(y1, y2); y++) {
            if (main->map->at(x).at(y) == 1) {
                int x3 = x;
                int y3 = y;
                int x4 = x+1;
                int y4 = y+1;
                int x5 = x+1;
                int y5 = y;
                int x6 = x;
                int y6 = y+1;
                if (linesIntersect(x1, y1, x2, y2, x3, y3, x4, y4) || linesIntersect(x1, y1, x2, y2, x5, y5, x6, y6)) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool MiniTroll::onGround() {
    hitbox.h = 8+4;
    bool val = checkCollision(main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    hitbox.h = 8;
    return val;
}

bool MiniTroll::groundInFront() {
    int x = (hitbox.x+hitbox.w/2)/16+(-2*direction+1);
    int y = (hitbox.y+hitbox.h/2)/16+1;
    return main->map->at(x).at(y) != 0;
}

void MiniTroll::tick() {
    counter++;
    bool chasing = false;
    if (!playerInRange()) {
        if (rand() % 100 == 1) {
            srand(rand());
            direction = rand() % 2;
            sheetLocation.left = 432 + direction * 160;
            vx = 2 * (-2 * direction + 1);
            ticksPerFrame = 4 * (-2 * direction + 1);
        } else if (rand() % 15 == 1 || vx == 0) {
            vx = 0;
            sheetLocation.left = 368 + direction * 224;
        }
    }
    else {
        chasing = true;
        if (main->player->hitbox.x+main->player->hitbox.w/2 > hitbox.x+hitbox.w/2) {
            direction = 0;
        }
        else {
            direction = 1;
        }
        sheetLocation.left = 432 + direction * 160;
        vx = 4 * (-2 * direction + 1);
        ticksPerFrame = 4 * (-2 * direction + 1);
    }
    vy += 0.5;
    if ((!groundInFront() && !chasing) || !moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vx = 0;
        if (chasing && onGround()) {
            vy = -6;
        }
    }
    else if (chasing && !groundInFront() && onGround()) {
        vy = -6;
    }
    if (!moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vy = 0;
    }
    if (hitbox.y+hitbox.h >= main->MAP_HEIGHT*16-32) {
        remove();
    }
    if (hitbox.overlap(&main->player->hitbox)) {
        dynamic_cast<Player*>(main->player)->dying = true;
    }
}