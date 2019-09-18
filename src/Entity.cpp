#include "../include/Entity.h"

Entity::Entity(Global* main, double x, double y):
    hitbox(x, y, 0, 0)
{
    exists = true;
    doCollision = false;
    this->main = main;
    transparency = 255;
    horizAnis = 1;
    vertAnis = 1;
    ticksPerFrame = 1;
    counter = 0;
}

void Entity::remove() {
    exists = false;
}

int Entity::zeroToOne(int in) {
    if (in == 0) {
        return 1;
    }
    return in;
}

bool Entity::ccw(double x1, double y1, double x2, double y2, double x3, double y3) {
    return (y3-y1) * (x2-x1) > (y2-y1) * (x3-x1);
}

bool Entity::linesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    return ccw(x1, y1, x3, y3, x4, y4) != ccw(x2, y2, x3, y3, x4, y4) and ccw(x1, y1, x2, y2, x3, y3) != ccw(x1, y1, x2, y2, x4, y4);
}

IntRect Entity::currentFrame() {
    int left = sheetLocation.left;
    int top = sheetLocation.top;
    int totalwidth = sheetLocation.width;
    int totalheight = sheetLocation.height;
    int indivwidth = totalwidth/zeroToOne(horizAnis);
    int indivheight = totalheight/zeroToOne(vertAnis);
    int timedCount = (int)(counter/zeroToOne(ticksPerFrame));
    int x = left + (indivwidth * ((timedCount%zeroToOne(horizAnis)+zeroToOne(horizAnis))%zeroToOne(horizAnis)));
    int y = top+(indivheight*(((int)(timedCount/zeroToOne(horizAnis)))%zeroToOne(vertAnis)));
    return {x, y, indivwidth, indivheight};
}

bool Entity::checkCollision(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    if (hitbox.x < 0 || hitbox.y < 0 || hitbox.x+hitbox.w >= MAP_WIDTH*16) {
        return true;
    }
    for (int x = max(0, (int)(hitbox.x/16-1)); x < min(MAP_WIDTH, (int)((hitbox.x+hitbox.w)/16+1)); x++) {
        for (int y = max(0, (int)(hitbox.y/16-1)); y < min(MAP_HEIGHT, (int)((hitbox.y+hitbox.h)/16+1)); y++) {
            if (map->at(x).at(y) == 1) {
                Hitbox block(x * 16, y * 16, 16, 16);
                if (hitbox.overlap(&block)) {
                    return true;
                }
            }
        }
    }
    for (Entity* e : *main->entities) {
        if (e != this && e->doCollision && e->hitbox.overlap(&hitbox)) {
            return true;
        }
    }
    return false;
}

bool Entity::moveH(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    bool direction = true;
    if (distance < 0) {
        distance *= -1;
        direction = false;
    }
    int prevW = (int) hitbox.w;
    if (direction) {
        hitbox.w += distance;
        if (!checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
            hitbox.x += distance;
            hitbox.w = prevW;
            return true;
        }
    }
    else {
        hitbox.w += distance;
        hitbox.x -= distance;
        if (!checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
            hitbox.w = prevW;
            return true;
        }
        else {
            hitbox.x += distance;
        }
    }
    hitbox.w = prevW;
    for (int i = 0; i < distance; i++) {
        if (direction) {
            hitbox.x++;
            if (checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
                hitbox.x--;
                return false;
            }
        }
        else {
            hitbox.x--;
            if (checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
                hitbox.x++;
                return false;
            }
        }
    }
    return true;
}

bool Entity::moveV(double distance, vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    bool direction = true;
    if (distance < 0) {
        distance *= -1;
        direction = false;
    }
    int prevH = (int) hitbox.h;
    if (direction) {
        hitbox.h += distance;
        if (!checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
            hitbox.y += distance;
            hitbox.h = prevH;
            return true;
        }
    }
    else {
        hitbox.h += distance;
        hitbox.y -= distance;
        if (!checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
            hitbox.h = prevH;
            return true;
        }
        else {
            hitbox.y += distance;
        }
    }
    hitbox.h = prevH;
    for (int i = 0; i < distance; i++) {
        if (direction) {
            hitbox.y++;
            if (checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
                hitbox.y--;
                return false;
            }
        }
        else {
            hitbox.y--;
            if (checkCollision(map, MAP_WIDTH, MAP_HEIGHT)) {
                hitbox.y++;
                return false;
            }
        }
    }
    return true;
}

Entity::~Entity() = default;
