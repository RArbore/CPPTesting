#include "../include/FireBreath.h"

FireBreath::FireBreath(Global *main, double x, double y, double vx, double vy): Entity(main, x, y) {
    hitbox.w = 2;
    hitbox.h = 2;
    sheetLocation.left = 128;
    sheetLocation.top = 236;
    sheetLocation.width = 2;
    sheetLocation.height = 2;
    this->vx = vx;
    this->vy = vy;
}

void FireBreath::tick() {
    counter++;
    vx *= 0.95;
    vy *= 0.95;
    if (counter % 4 == 0) {
        transparency -= 50;
    }
    if (transparency <= 0) {
        remove();
    }
    moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    if (hitbox.overlap(&main->player->hitbox) && dynamic_cast<Player*>(main->player)->damageTimer == 0) {
        dynamic_cast<Player*>(main->player)->health--;
        dynamic_cast<Player*>(main->player)->damageTimer = 30;
    }
}