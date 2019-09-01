#include "../include/CrackedBlock.h"

CrackedBlock::CrackedBlock(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 16;
    hitbox.h = 16;
    sheetLocation.left = 48;
    sheetLocation.top = 64;
    sheetLocation.width = 16;
    sheetLocation.height = 16;
    horizAnis = 1;
    vertAnis = 1;
    ticksPerFrame = 1;
    doCollision = true;
}

void CrackedBlock::tick() {
    if (transparency == 255) {
        for (Entity *e : *(main->entities)) {
            if (dynamic_cast<Player *>(e)) {
                auto *p = dynamic_cast<Player *>(e);
                if (p->onGround() && p->hitbox.overlap(hitbox.x, hitbox.y - 3, hitbox.w, hitbox.h)) {
                    transparency-=5;
                    sheetLocation.left = 32;
                }
                break;
            }
        }
    }
    else {
        transparency-=10;
        if (transparency % 20 == 0) {
            hitbox.y++;
        }
        if (transparency < 10) {
            remove();
        }
        else if (transparency < 120) {
            doCollision = false;
        }
    }
}