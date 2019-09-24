#include "../include/BloodParticle.h"

BloodParticle::BloodParticle(Global* main, double x, double y, int seed_mod): Entity(main, x, y) {
    hitbox.w = 2;
    hitbox.h = 1;
    sheetLocation.left = 136;
    sheetLocation.top = 232;
    sheetLocation.width = 8;
    sheetLocation.height = 2;
    horizAnis = 4;
    vertAnis = 1;
    ticksPerFrame = 4;
    vx = 0;
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    long time = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    std::default_random_engine generator(time+seed_mod);
    std::normal_distribution<double> distribution(0,2.0);
    vy = distribution(generator);
    vx = 0.4*distribution(generator);
}

void BloodParticle::tick() {
    counter++;
    vy += 0.5;
    if (counter % 4 == 0) {
        transparency -= 25;
    }
    if (transparency <= 0) {
        remove();
    }
    moveH(vx, main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
    moveV(vy, main->map, main->MAP_WIDTH, main->MAP_HEIGHT);
}