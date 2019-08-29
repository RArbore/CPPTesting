#include "../include/Entity.h"

Entity::Entity(vector<Entity*>* ilist, double x, double y):
    hitbox(x, y, 0, 0)
{
    elist = ilist;
    elist->push_back(this);
    transparency = 255;
    horizAnis = 0;
    vertAnis = 0;
    ticksPerFrame = 0;
}

void Entity::remove() {
    elist->erase(std::find(elist->begin(), elist->end(), this));
}

int Entity::zeroToOne(int in) {
    if (in == 0) {
        return 1;
    }
    return in;
}

IntRect Entity::currentFrame(int counter) {
    int left = sheetLocation.left;
    int top = sheetLocation.top;
    int totalwidth = sheetLocation.width;
    int totalheight = sheetLocation.height;
    int indivwidth = totalwidth/zeroToOne(horizAnis);
    int indivheight = totalheight/zeroToOne(vertAnis);
    int timedCount = (int)(counter/zeroToOne(ticksPerFrame));
    int x = left + (indivwidth * ((timedCount%horizAnis+horizAnis)%horizAnis));
    int y = top+(indivheight*(((int)(timedCount/horizAnis))%vertAnis));
    return {x, y, indivwidth, indivheight};
}

bool Entity::checkCollision(vector<std::vector<int>>* map, int MAP_WIDTH, int MAP_HEIGHT) {
    if (hitbox.x < 0 || hitbox.y < 0 || hitbox.x+hitbox.w >= map->size()*16 || hitbox.y+hitbox.h >= map->at(0).size()*16) {
        return true;
    }
    for (int x = 0; x < MAP_WIDTH; x++) {
        for (int y = 0; y < MAP_HEIGHT; y++) {
            if (map->at(x).at(y) == 1) {
                Hitbox block(x * 16, y * 16, 16, 16);
                if (hitbox.overlap(block.x, block.y, block.w, block.h)) {
                    return true;
                }
            }
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