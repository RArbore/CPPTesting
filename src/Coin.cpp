#include "../include/Coin.h"

Coin::Coin(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 8;
    hitbox.h = 8;
    sheetLocation.left = 288;
    sheetLocation.top = 272;
    sheetLocation.width = 32;
    sheetLocation.height = 8;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
}

void Coin::tick() {
    counter++;
    for (Entity *e : *(main->entities)) {
        if (dynamic_cast<Player *>(e)) {
            auto *p = dynamic_cast<Player *>(e);
            if (p->hitbox.overlap(&hitbox)) {
                remove();
            }
            break;
        }
    }
}