#include "../include/Entity.h"

Entity::Entity(Global* in, double x, double y) {
    main = in;
    main->entities->push_back(this);
    horizAnis = 0;
    vertAnis = 0;
    ticksPerFrame = 0;
    hitbox = new Hitbox(x, y, 0, 0);
}

void Entity::remove() {
    main->entities->remove(this);
}

IntRect Entity::currentFrame() {
    int left = sheetLocation.left;
    int top = sheetLocation.top;
    int totalwidth = sheetLocation.width;
    int totalheight = sheetLocation.height;
    int indivwidth = totalwidth/horizAnis;
    int indivheight = totalheight/vertAnis;
    int* counter = main->counter;
    int timedCount = (int)(*counter/ticksPerFrame);
    int x = left + (indivwidth * ((timedCount%horizAnis+horizAnis)%horizAnis));
    int y = top+(indivheight*(((int)(timedCount/horizAnis))%vertAnis));
    return {x, y, indivwidth, indivheight};
}

void Entity::setAni(IntRect isheetLocation, int ihorizAnis, int ivertAnis, int iticksPerFrame) {
    this->sheetLocation = isheetLocation;
    this->horizAnis = ihorizAnis;
    this->vertAnis = ivertAnis;
    this->ticksPerFrame = iticksPerFrame;
}

bool Entity::checkCollision() {
    if (hitbox->x < 0 || hitbox->y < 0 || hitbox->x+hitbox->w >= main->map->size()*16 || hitbox->y+hitbox->h >= main->map->at(0).size()*16) {
        return true;
    }
    for (int x = 0; x < main->map->size(); x++) {
        for (int y = 0; y < main->map->at(0).size(); y++) {
            if (main->map->at(x).at(y) == 1) {
                Hitbox block(x * 16, y * 16, 16, 16);
                if (hitbox->overlap(block.x, block.y, block.w, block.h)) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool Entity::moveH(double distance) {
    bool direction = true;
    if (distance < 0) {
        distance *= -1;
        direction = false;
    }
    int prevW = (int) hitbox->w;
    if (direction) {
        hitbox->w += distance;
        if (!checkCollision()) {
            hitbox->x += distance;
            hitbox->w = prevW;
            return true;
        }
    }
    else {
        hitbox->w += distance;
        hitbox->x -= distance;
        if (!checkCollision()) {
            hitbox->w = prevW;
            return true;
        }
        else {
            hitbox->x += distance;
        }
    }
    hitbox->w = prevW;
    for (int i = 0; i < distance; i++) {
        if (direction) {
            hitbox->x++;
            if (checkCollision()) {
                hitbox->x--;
                return false;
            }
        }
        else {
            hitbox->x--;
            if (checkCollision()) {
                hitbox->x++;
                return false;
            }
        }
    }
    return true;
}

bool Entity::moveV(double distance) {
    bool direction = true;
    if (distance < 0) {
        distance *= -1;
        direction = false;
    }
    int prevH = (int) hitbox->h;
    if (direction) {
        hitbox->h += distance;
        if (!checkCollision()) {
            hitbox->y += distance;
            hitbox->h = prevH;
            return true;
        }
    }
    else {
        hitbox->h += distance;
        hitbox->y -= distance;
        if (!checkCollision()) {
            hitbox->h = prevH;
            return true;
        }
        else {
            hitbox->y += distance;
        }
    }
    hitbox->h = prevH;
    for (int i = 0; i < distance; i++) {
        if (direction) {
            hitbox->y++;
            if (checkCollision()) {
                hitbox->y--;
                return false;
            }
        }
        else {
            hitbox->y--;
            if (checkCollision()) {
                hitbox->y++;
                return false;
            }
        }
    }
    return true;
}