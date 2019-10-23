#include "../include/ChestMonster.h"

ChestMonster::ChestMonster(Global* main, double x, double y): Entity(main, x, y) {
    hitbox.w = 16;
    hitbox.h = 15;
    sheetLocation.left = 240;
    sheetLocation.top = 240;
    sheetLocation.width = 16;
    sheetLocation.height = 16;
    horizAnis = 1;
    vertAnis = 1;
    ticksPerFrame = 1;
    vy = 0;
}

int ChestMonster::playerInRange() {
    double dx = main->player->hitbox.x+main->player->hitbox.w/2-hitbox.x-hitbox.w/2;
    double dy = main->player->hitbox.y+main->player->hitbox.h/2-hitbox.y-hitbox.h/2;
    double distance = sqrt(dx*dx+dy*dy);
    if (distance < 32) return 2;
    if (distance < 48) return 1;
    return 0;
}

void ChestMonster::tick() {
    sheetLocation.left = 240+16*playerInRange();
    vy += 0.5;
    if (!moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT)) {
        vy = 0;
    }
    if (hitbox.overlap(&main->player->hitbox) && dynamic_cast<Player*>(main->player)->damageTimer == 0) {
        if (main->player->hitbox.y+main->player->hitbox.h*1/2 < hitbox.y && main->player->vy > 0) {
            remove();
            for (int i = 0; i < 100; i++) {
                main->entities->push_back(new BloodParticle(main, hitbox.x+hitbox.w/2, hitbox.y+hitbox.h/2, i));
            }
            if (main->keys->at('W')) main->player->vy *= -1.1;
            else main->player->vy *= -0.8;
        }
        else {
            dynamic_cast<Player *>(main->player)->health--;
            dynamic_cast<Player *>(main->player)->damageTimer = 30;
        }
    }
}